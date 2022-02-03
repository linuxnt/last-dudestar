/*
	Copyright (C) 2019-2021 Doug McLain

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include <iostream>
#include <cstring>
#include "dcscodec.h"
#include "CRCenc.h"

#define DEBUG

const unsigned char MMDVM_DSTAR_HEADER = 0x10U;
const unsigned char MMDVM_DSTAR_DATA   = 0x11U;
const unsigned char MMDVM_DSTAR_LOST   = 0x12U;
const unsigned char MMDVM_DSTAR_EOT    = 0x13U;

DCSCodec::DCSCodec(QString callsign, QString hostname, char module, QString host, int port, bool ipv6, QString vocoder, QString modem, QString audioin, QString audioout) :
	Codec(callsign, module, hostname, host, port, ipv6, vocoder, modem, audioin, audioout)
{
}

DCSCodec::~DCSCodec()
{
}

void DCSCodec::decoder_gain_changed(qreal v)
{
#ifdef AMBEHW_SUPPORTED
	if(m_hwrx){
		m_ambedev->set_decode_gain(v);
	}
#endif
	m_mbedec->setVolume(v);
}

void DCSCodec::process_udp()
{
	QByteArray buf;
	QHostAddress sender;
	quint16 senderPort;
	static bool sd_sync = 0;
	static int sd_seq = 0;
	static char user_data[21];
	buf.resize(200);
	//qDebug() << "buf size before == " << buf.size();
	//buf.resize(m_udp->pendingDatagramSize());
	//qDebug() << "buf size after == " << buf.size();
	int size = m_udp->readDatagram(buf.data(), buf.size(), &sender, &senderPort);
#ifdef DEBUG
	fprintf(stderr, "RECV: ");
	for(int i = 0; i < size; ++i){
		fprintf(stderr, "%02x ", (unsigned char)buf.data()[i]);
	}
	fprintf(stderr, "\n");
	fflush(stderr);
#endif
	if(size == 22){ //2 way keep alive ping
		m_modeinfo.count++;
		m_modeinfo.netmsg.clear();
		if( (m_modeinfo.stream_state == STREAM_LOST) || (m_modeinfo.stream_state == STREAM_END) ){
			m_modeinfo.stream_state = STREAM_IDLE;
		}
	}

	if( (m_modeinfo.status == CONNECTING) && (size == 14) && (!memcmp(buf.data()+10, "ACK", 3)) ){
		qDebug() << "Connected to DCS";
		m_modeinfo.status = CONNECTED_RW;
		m_mbedec = new MBEDecoder();
		//m_mbedec->setAutoGain(true);
		m_mbeenc = new MBEEncoder();
		m_mbeenc->set_dstar_mode();
		m_mbeenc->set_gain_adjust(1);
		if(m_vocoder != ""){
			m_hwrx = true;
			m_hwtx = true;
#ifdef AMBEHW_SUPPORTED
			m_ambedev = new SerialAMBE("DCS");
			m_ambedev->connect_to_serial(m_vocoder);
			connect(m_ambedev, SIGNAL(data_ready()), this, SLOT(get_ambe()));
#endif
		}
		else{
			m_hwrx = false;
			m_hwtx = false;
		}
		if(m_modemport != ""){
			m_modem = new SerialModem("DCS");
			m_modem->set_modem_flags(m_rxInvert, m_txInvert, m_pttInvert, m_useCOSAsLockout, m_duplex);
			m_modem->set_modem_params(m_rxfreq, m_txfreq, m_txDelay, m_rxLevel, m_rfLevel, m_ysfTXHang, m_cwIdTXLevel, m_dstarTXLevel, m_dmrTXLevel, m_ysfTXLevel, m_p25TXLevel, m_nxdnTXLevel, m_pocsagTXLevel);
			m_modem->connect_to_serial(m_modemport);
			connect(m_modem, SIGNAL(modem_data_ready(QByteArray)), this, SLOT(process_modem_data(QByteArray)));
		}
		m_rxtimer = new QTimer();
		connect(m_rxtimer, SIGNAL(timeout()), this, SLOT(process_rx_data()));
		m_txtimer = new QTimer();
		connect(m_txtimer, SIGNAL(timeout()), this, SLOT(transmit()));
		m_ping_timer = new QTimer();
		connect(m_ping_timer, SIGNAL(timeout()), this, SLOT(send_ping()));
		m_ping_timer->start(2000);
		m_audio = new AudioEngine(m_audioin, m_audioout);
		m_audio->init();
		//fprintf(stderr, "m_vocoder == %s m_hwtx:m_hwrx == %d:%d\n", m_vocoder.toStdString().c_str(), m_hwtx, m_hwrx);fflush(stderr);
	}

	if(m_modeinfo.status != CONNECTED_RW) return;
	if(size == 35){
		m_modeinfo.ts = QDateTime::currentMSecsSinceEpoch();
		m_modeinfo.netmsg = QString(buf.data());
	}
	if((size == 100) && (!memcmp(buf.data(), "0001", 4)) ){
		m_rxwatchdog = 0;
		//qDebug() << "m_streamid == " << m_streamid << ":" << m_hwrx << ":" << m_tx;
		uint16_t streamid = (buf.data()[43] << 8) | (buf.data()[44] & 0xff);

		if(!m_tx && (m_modeinfo.streamid == 0)){
			m_modeinfo.streamid = streamid;
			m_modeinfo.stream_state = STREAM_NEW;
			m_modeinfo.ts = QDateTime::currentMSecsSinceEpoch();

			if(!m_rxtimer->isActive()){
				m_audio->start_playback();
				m_rxtimer->start(m_rxtimerint);
				m_rxcodecq.clear();
			}

			char temp[9];
			memcpy(temp, buf.data() + 7, 8); temp[8] = '\0';
			m_modeinfo.gw2 = QString(temp);
			memcpy(temp, buf.data() + 15, 8); temp[8] = '\0';
			m_modeinfo.gw = QString(temp);
			memcpy(temp, buf.data() + 23, 8); temp[8] = '\0';
			m_modeinfo.dst = QString(temp);
			memcpy(temp, buf.data() + 31, 8); temp[8] = '\0';
			m_modeinfo.src = QString(temp);
			QString h = m_hostname + " " + m_module;

			if(m_modem){
				uint8_t out[44];
				out[0] = 0xe0;
				out[1] = 44;
				out[2] = MMDVM_DSTAR_HEADER;
				out[3] = 0x40;
				out[4] = 0;
				out[5] = 0;
				memcpy(out + 6, m_modeinfo.gw2.toLocal8Bit().data(), 8);
				memcpy(out + 14, m_modeinfo.gw.toLocal8Bit().data(), 8);
				memcpy(out + 22, m_modeinfo.dst.toLocal8Bit().data(), 8);
				memcpy(out + 30, m_modeinfo.src.toLocal8Bit().data(), 8);
				memcpy(out + 38, buf.data() + 52, 4);
				CCRC::addCCITT161((uint8_t *)out + 3, 41);
				for(int i = 0; i < 44; ++i){
					m_rxmodemq.append(out[i]);
				}
				//m_modem->write(out);
			}
			qDebug() << "New stream from " << m_modeinfo.src << " to " << m_modeinfo.dst << " id == " << QString::number(m_modeinfo.streamid, 16);
		}
		else{
			m_modeinfo.stream_state = STREAMING;
		}
		
		m_modeinfo.frame_number = buf.data()[0x2d];
		
		if((buf.data()[45] == 0) && (buf.data()[55] == 0x55) && (buf.data()[56] == 0x2d) && (buf.data()[57] == 0x16)){
			sd_sync = 1;
			sd_seq = 1;
		}
		if(sd_sync && (sd_seq == 1) && (buf.data()[45] == 1) && (buf.data()[55] == 0x30)){
			user_data[0] = buf.data()[56] ^ 0x4f;
			user_data[1] = buf.data()[57] ^ 0x93;
			++sd_seq;
		}
		if(sd_sync && (sd_seq == 2) && (buf.data()[45] == 2)){
			user_data[2] = buf.data()[55] ^ 0x70;
			user_data[3] = buf.data()[56] ^ 0x4f;
			user_data[4] = buf.data()[57] ^ 0x93;
			++sd_seq;
		}
		if(sd_sync && (sd_seq == 3) && (buf.data()[45] == 3) && (buf.data()[55] == 0x31)){
			user_data[5] = buf.data()[56] ^ 0x4f;
			user_data[6] = buf.data()[57] ^ 0x93;
			++sd_seq;
		}
		if(sd_sync && (sd_seq == 4) && (buf.data()[45] == 4)){
			user_data[7] = buf.data()[55] ^ 0x70;
			user_data[8] = buf.data()[56] ^ 0x4f;
			user_data[9] = buf.data()[57] ^ 0x93;
			++sd_seq;
		}
		if(sd_sync && (sd_seq == 5) && (buf.data()[45] == 5) && (buf.data()[55] == 0x32)){
			user_data[10] = buf.data()[56] ^ 0x4f;
			user_data[11] = buf.data()[57] ^ 0x93;
			++sd_seq;
		}
		if(sd_sync && (sd_seq == 6) && (buf.data()[45] == 6)){
			user_data[12] = buf.data()[55] ^ 0x70;
			user_data[13] = buf.data()[56] ^ 0x4f;
			user_data[14] = buf.data()[57] ^ 0x93;
			++sd_seq;
		}
		if(sd_sync && (sd_seq == 7) && (buf.data()[45] == 7) && (buf.data()[55] == 0x33)){
			user_data[15] = buf.data()[56] ^ 0x4f;
			user_data[16] = buf.data()[57] ^ 0x93;
			++sd_seq;
		}
		if(sd_sync && (sd_seq == 8) && (buf.data()[45] == 8)){
			user_data[17] = buf.data()[55] ^ 0x70;
			user_data[18] = buf.data()[56] ^ 0x4f;
			user_data[19] = buf.data()[57] ^ 0x93;
			user_data[20] = '\0';
			sd_sync = 0;
			sd_seq = 0;
			m_modeinfo.usertxt = QString(user_data);
		}
		if(buf.data()[45] & 0x40){
			qDebug() << "DCS RX stream ended ";
			m_rxwatchdog = 0;
			m_modeinfo.stream_state = STREAM_END;
			m_modeinfo.ts = QDateTime::currentMSecsSinceEpoch();
			emit update(m_modeinfo);
			m_modeinfo.streamid = 0;
			if(m_modem){
				m_rxmodemq.append(0xe0);
				m_rxmodemq.append(3);
				m_rxmodemq.append(MMDVM_DSTAR_EOT);
			}
		}
		else if(m_modeinfo.stream_state == STREAMING){
			if(m_modem){
				m_rxmodemq.append(0xe0);
				m_rxmodemq.append(15);
				m_rxmodemq.append(MMDVM_DSTAR_DATA);
				for(int i = 0; i < 12; ++i){
					m_rxmodemq.append(buf.data()[46+i]);
				}
			}
		}
		for(int i = 0; i < 9; ++i){
			m_rxcodecq.append(buf.data()[46+i]);
		}
	}
	emit update(m_modeinfo);
}

void DCSCodec::hostname_lookup(QHostInfo i)
{
	if (!i.addresses().isEmpty()) {
		QByteArray out;
		out.resize(519);
		memcpy(out.data(), m_modeinfo.callsign.toStdString().c_str(), m_modeinfo.callsign.size());
		memset(out.data() + m_modeinfo.callsign.size(), ' ', 8 - m_modeinfo.callsign.size());
		out[8] = m_module;
		out[9] = m_module;
		out[10] = 11;

		//out.append(m_modeinfo.callsign.toUtf8());
		//out.append(8 - m_modeinfo.callsign.size(), ' ');
		//out.append(m_module);
		//out.append(m_module);
		//out.append(11);
		//out.append(508, 0);
		m_address = i.addresses().first();
		m_udp = new QUdpSocket(this);
		connect(m_udp, SIGNAL(readyRead()), this, SLOT(process_udp()));
		m_udp->writeDatagram(out, m_address, m_modeinfo.port);
#ifdef DEBUG
		fprintf(stderr, "CONN: ");
		for(int i = 0; i < out.size(); ++i){
			fprintf(stderr, "%02x ", (unsigned char)out.data()[i]);
		}
		fprintf(stderr, "\n");
		fflush(stderr);
#endif
	}
}

void DCSCodec::send_ping()
{
	static QByteArray out;
	out.clear();
	out.append(m_modeinfo.callsign.toUtf8());
	out.append(7 - m_modeinfo.callsign.size(), ' ');
	out.append(m_module);
	out.append('\x00');
	out.append(m_hostname.toUtf8());
	out.append('\x00');
	out.append(m_module);
	m_udp->writeDatagram(out, m_address, m_modeinfo.port);
#ifdef DEBUG
	fprintf(stderr, "PING: ");
	for(int i = 0; i < out.size(); ++i){
		fprintf(stderr, "%02x ", (unsigned char)out.data()[i]);
	}
	fprintf(stderr, "\n");
	fflush(stderr);
#endif
}

void DCSCodec::send_disconnect()
{
	QByteArray out;
	out.append(m_modeinfo.callsign.toUtf8());
	out.append(8 - m_modeinfo.callsign.size(), ' ');
	out.append(m_module);
	out.append(' ');
	out.append('\x00');
	m_udp->writeDatagram(out, m_address, m_modeinfo.port);
#ifdef DEBUG
	fprintf(stderr, "SEND: ");
	for(int i = 0; i < out.size(); ++i){
		fprintf(stderr, "%02x ", (unsigned char)out.data()[i]);
	}
	fprintf(stderr, "\n");
	fflush(stderr);
#endif
}

void DCSCodec::format_callsign(QString &s)
{
	QStringList l = s.simplified().split(' ');

	if(l.size() > 1){
		s = l.at(0).simplified();
		while(s.size() < 7){
			s.append(' ');
		}
		s += l.at(1).simplified();
	}
	else{
		while(s.size() < 8){
			s.append(' ');
		}
	}
}

void DCSCodec::process_modem_data(QByteArray d)
{
	QByteArray txdata;
	char cs[9];
	uint8_t ambe[9];

	uint8_t *p_frame = (uint8_t *)(d.data());
	if(p_frame[2] == MMDVM_DSTAR_HEADER){
		format_callsign(m_txrptr1);
		format_callsign(m_txrptr2);
		cs[8] = 0;
		memcpy(cs, p_frame + 22, 8);
		m_txurcall = QString(cs);
		memcpy(cs, p_frame + 30, 8);
		m_txmycall = QString(cs);
		m_modeinfo.stream_state = TRANSMITTING_MODEM;
		m_tx = true;
	}
	else if( (p_frame[2] == MMDVM_DSTAR_EOT) || (p_frame[2] == MMDVM_DSTAR_LOST) ){
		m_tx = false;
	}
	else if(p_frame[2] == MMDVM_DSTAR_DATA){
		memcpy(ambe, p_frame + 3, 9);
	}
	send_frame(ambe);
}

void DCSCodec::toggle_tx(bool tx)
{
	tx ? start_tx() : stop_tx();
}

void DCSCodec::start_tx()
{
	format_callsign(m_txmycall);
	format_callsign(m_txurcall);
	format_callsign(m_txrptr1);
	format_callsign(m_txrptr2);
	Codec::start_tx();
}

void DCSCodec::transmit()
{
	unsigned char ambe[9];
	uint8_t ambe_frame[72];
	int16_t pcm[160];
	memset(ambe_frame, 0, 72);
	memset(ambe, 0, 9);
	
#ifdef USE_FLITE
	if(m_ttsid > 0){
		for(int i = 0; i < 160; ++i){
			if(m_ttscnt >= tts_audio->num_samples/2){
				//audiotx_cnt = 0;
				pcm[i] = 0;
			}
			else{
				pcm[i] = tts_audio->samples[m_ttscnt*2] / 2;
				m_ttscnt++;
			}
		}
	}
#endif
	if(m_ttsid == 0){
		if(m_audio->read(pcm, 160)){
		}
		else{
			return;
		}
	}
	if(m_hwtx){
#ifdef AMBEHW_SUPPORTED
		m_ambedev->encode(pcm);
#endif
		if(m_tx && (m_txcodecq.size() >= 9)){
			for(int i = 0; i < 9; ++i){
				ambe[i] = m_txcodecq.dequeue();
			}
			send_frame(ambe);
		}
		else if(!m_tx){
			send_frame(ambe);
		}
	}
	else{
		m_mbeenc->encode(pcm, ambe_frame);

		for(int i = 0; i < 9; ++i){
			for(int j = 0; j < 8; ++j){
				ambe[i] |= (ambe_frame[(i*8)+j] << j);
			}
		}
		send_frame(ambe);
	}
}

void DCSCodec::send_frame(uint8_t *ambe)
{
	QByteArray txdata;
	static uint16_t txstreamid = 0;

	txdata.clear();
	txdata.append(100, 0);

	if(txstreamid == 0){
		txstreamid = static_cast<uint16_t>((::rand() & 0xFFFF));
	}

	txdata.replace(0, 4, "0001");
	txdata.replace(7, 8, m_txrptr2.toLocal8Bit().data());
	txdata.replace(15, 8, m_txrptr1.toLocal8Bit().data());
	txdata.replace(23, 8, m_txurcall.toLocal8Bit().data());
	txdata.replace(31, 8, m_txmycall.toLocal8Bit().data());
	txdata.replace(39, 4, "AMBE");
	txdata[43] = txstreamid & 0xff;
	txdata[44] = (txstreamid >> 8) & 0xff;
	txdata[45] = (m_txcnt % 21) & 0xff;
	memcpy(txdata.data() + 46, ambe, 9);

	switch(txdata.data()[45]){
	case 0:
		txdata[55] = 0x55;
		txdata[56] = 0x2d;
		txdata[57] = 0x16;
		break;
	case 1:
		txdata[55] = 0x40 ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[0] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[1] ^ 0x93;
		break;
	case 2:
		txdata[55] = m_txusrtxt.toLocal8Bit().data()[2] ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[3] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[4] ^ 0x93;
		break;
	case 3:
		txdata[55] = 0x41 ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[5] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[6] ^ 0x93;
		break;
	case 4:
		txdata[55] = m_txusrtxt.toLocal8Bit().data()[7] ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[8] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[9] ^ 0x93;
		break;
	case 5:
		txdata[55] = 0x42 ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[10] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[11] ^ 0x93;
		break;
	case 6:
		txdata[55] = m_txusrtxt.toLocal8Bit().data()[12] ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[13] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[14] ^ 0x93;
		break;
	case 7:
		txdata[55] = 0x43 ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[15] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[16] ^ 0x93;
		break;
	case 8:
		txdata[55] = m_txusrtxt.toLocal8Bit().data()[17] ^ 0x70;
		txdata[56] = m_txusrtxt.toLocal8Bit().data()[18] ^ 0x4f;
		txdata[57] = m_txusrtxt.toLocal8Bit().data()[19] ^ 0x93;
		break;
	default:
		txdata[55] = 0x16;
		txdata[56] = 0x29;
		txdata[57] = 0xf5;
		break;
	}

	txdata[58] = m_txcnt & 0xff;
	txdata[59] = (m_txcnt >> 8) & 0xff;
	txdata[60] = (m_txcnt >> 16) & 0xff;
	txdata[61] = 0x01;

	m_modeinfo.src = m_txmycall;
	m_modeinfo.dst = m_txurcall;
	m_modeinfo.gw = m_txrptr1;
	m_modeinfo.gw2 = m_txrptr2;
	m_modeinfo.streamid = txstreamid;
	m_modeinfo.frame_number = m_txcnt;

	if(m_tx){
		m_txcnt++;
	}
	else{
		uint8_t last_frame[9] = {0xdc, 0x8e, 0x0a, 0x40, 0xad, 0xed, 0xad, 0x39, 0x6e};
		txdata[45] = (txdata[45] | 0x40);
		txdata.replace(46, 9, (char *)last_frame);
		m_txcnt = 0;
		txstreamid = 0;
		m_modeinfo.streamid = 0;
		m_txtimer->stop();

		if((m_ttsid == 0) && (m_modeinfo.stream_state == TRANSMITTING) ){
			m_audio->stop_capture();
		}
		m_ttscnt = 0;
	}

	m_udp->writeDatagram(txdata, m_address, m_modeinfo.port);
	emit update_output_level(m_audio->level());
	update(m_modeinfo);

#ifdef DEBUG
	fprintf(stderr, "SEND:%d: ", txdata.size());
	for(int i = 0; i < txdata.size(); ++i){
		fprintf(stderr, "%02x ", (unsigned char)txdata.data()[i]);
	}
	fprintf(stderr, "\n");
	fflush(stderr);
#endif
}
#ifdef AMBEHW_SUPPORTED
void DCSCodec::get_ambe()
{
	uint8_t ambe[9];

	if(m_ambedev->get_ambe(ambe)){
		for(int i = 0; i < 9; ++i){
			m_txcodecq.append(ambe[i]);
		}
	}
}
#endif
void DCSCodec::process_rx_data()
{
	int nbAudioSamples = 0;
	int16_t *audioSamples;
	int16_t audio[160];
	uint8_t ambe[9];

	if(m_rxwatchdog++ > 100){
		qDebug() << "DCS RX stream timeout ";
		m_rxwatchdog = 0;
		m_modeinfo.stream_state = STREAM_LOST;
		m_modeinfo.ts = QDateTime::currentMSecsSinceEpoch();
		emit update(m_modeinfo);
		m_modeinfo.streamid = 0;
	}

	if(m_rxmodemq.size() > 2){
		QByteArray out;
		int s = m_rxmodemq[1];
		if((m_rxmodemq[0] == 0xe0) && (m_rxmodemq.size() >= s)){
			for(int i = 0; i < s; ++i){
				out.append(m_rxmodemq.dequeue());
			}
			m_modem->write(out);
		}
	}

	if((!m_tx) && (m_rxcodecq.size() > 8) ){
		for(int i = 0; i < 9; ++i){
			ambe[i] = m_rxcodecq.dequeue();
		}
		if(m_hwrx){
#ifdef AMBEHW_SUPPORTED
			m_ambedev->decode(ambe);

			if(m_ambedev->get_audio(audio)){
				m_audio->write(audio, 160);
				emit update_output_level(m_audio->level());
			}
#endif
		}
		else{
			m_mbedec->process_dstar(ambe);
			audioSamples = m_mbedec->getAudio(nbAudioSamples);
			m_audio->write(audioSamples, nbAudioSamples);
			m_mbedec->resetAudio();
			emit update_output_level(m_audio->level());
		}
	}
	else if ( (m_modeinfo.stream_state == STREAM_END) || (m_modeinfo.stream_state == STREAM_LOST) ){
		m_rxtimer->stop();
		m_audio->stop_playback();
		m_rxwatchdog = 0;
		m_modeinfo.streamid = 0;
		m_rxcodecq.clear();
		qDebug() << "DCS playback stopped";
		return;
	}
}
