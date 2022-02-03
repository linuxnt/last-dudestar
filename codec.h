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

#ifndef CODEC_H
#define CODEC_H

#include <QObject>
#include <QtNetwork>
#ifdef USE_FLITE
#include <flite/flite.h>
#endif
#include "audioengine.h"
#ifdef AMBEHW_SUPPORTED
#include "serialambe.h"
#include "serialmodem.h"
#endif
#include "mbedec.h"
#include "mbeenc.h"

class Codec : public QObject
{
	Q_OBJECT
public:
	Codec(QString callsign, char module, QString hostname, QString host, int port, bool ipv6, QString vocoder, QString modem, QString audioin, QString audioout);
	~Codec();
	void set_modem_flags(bool rxInvert, bool txInvert, bool pttInvert, bool useCOSAsLockout, bool duplex) { m_rxInvert = rxInvert; m_txInvert = txInvert; m_pttInvert = pttInvert; m_useCOSAsLockout = useCOSAsLockout; m_duplex = duplex; }
	void set_modem_params(uint32_t rxfreq, uint32_t txfreq, uint32_t txDelay, float rxLevel, float rfLevel, uint32_t ysfTXHang, float cwIdTXLevel, float dstarTXLevel, float dmrTXLevel, float ysfTXLevel, float p25TXLevel, float nxdnTXLevel, float pocsagTXLevel)
	{
		m_rxfreq = rxfreq;
		m_txfreq = txfreq;
		m_txDelay = txDelay;
		m_rxLevel = rxLevel;
		m_rfLevel = rfLevel;
		m_ysfTXHang = ysfTXHang;
		m_cwIdTXLevel = cwIdTXLevel;
		m_dstarTXLevel = dstarTXLevel;
		m_dmrTXLevel = dmrTXLevel;
		m_ysfTXLevel = ysfTXLevel;
		m_p25TXLevel = p25TXLevel;
		m_nxdnTXLevel = nxdnTXLevel;
		m_pocsagTXLevel = pocsagTXLevel;
	}
	bool get_hwrx() { return m_hwrx; }
	bool get_hwtx() { return m_hwtx; }
	void set_hostname(std::string);
	void set_callsign(std::string);
	void set_input_src(uint8_t s, QString t) { m_ttsid = s; m_ttstext = t; }
	struct MODEINFO {
		qint64 ts;
		int status;
		int stream_state;
		QString callsign;
		QString gw;
		QString gw2;
		QString src;
		QString dst;
		QString usertxt;
		QString netmsg;
		uint32_t gwid;
		uint32_t srcid;
		uint32_t dstid;
		QString host;
		int port;
		bool path;
		char type;
		uint16_t frame_number;
		uint8_t frame_total;
		int count;
		uint32_t streamid;
		bool mode;
	} m_modeinfo;
	enum{
		DISCONNECTED,
		CLOSED,
		CONNECTING,
		DMR_AUTH,
		DMR_CONF,
		DMR_OPTS,
		CONNECTED_RW,
		CONNECTED_RO
	};
	enum{
		STREAM_NEW,
		STREAMING,
		STREAM_END,
		STREAM_LOST,
		STREAM_IDLE,
		TRANSMITTING,
		TRANSMITTING_MODEM,
		STREAM_UNKNOWN
	};
signals:
	void update(Codec::MODEINFO);
	void update_output_level(unsigned short);
protected slots:
	virtual void send_disconnect(){}
	virtual void hostname_lookup(QHostInfo){}
	void send_connect();
	void input_src_changed(int id, QString t) { m_ttsid = id; m_ttstext = t; }
	void start_tx();
	void stop_tx();
	void toggle_tx(bool);
	void deleteLater();
	void in_audio_vol_changed(qreal);
	void out_audio_vol_changed(qreal);
protected:
	QUdpSocket *m_udp = nullptr;
	QHostAddress m_address;
	char m_module;
	QString m_hostname;
	bool m_tx;
	uint16_t m_txcnt;
	uint16_t m_ttscnt;
	uint8_t m_ttsid;
	QString m_ttstext;
#ifdef USE_FLITE
	cst_voice *voice_slt;
	cst_voice *voice_kal;
	cst_voice *voice_awb;
	cst_wave *tts_audio;
#endif
	QTimer *m_ping_timer;
	QTimer *m_txtimer;
	QTimer *m_rxtimer;
	AudioEngine *m_audio;
	QString m_audioin;
	QString m_audioout;
	uint32_t m_rxwatchdog;
	uint8_t m_rxtimerint;
	uint8_t m_txtimerint;
	QQueue<uint8_t> m_rxcodecq;
	QQueue<uint8_t> m_txcodecq;
	QQueue<uint8_t> m_rxmodemq;
	MBEDecoder *m_mbedec;
	MBEEncoder *m_mbeenc;
	QString m_vocoder;
	QString m_modemport;
	SerialModem *m_modem;
#ifdef AMBEHW_SUPPORTED
	SerialAMBE *m_ambedev;
#endif
	bool m_hwrx;
	bool m_hwtx;
	bool m_ipv6;

	uint32_t m_rxfreq;
	uint32_t m_txfreq;
	uint32_t m_dmrColorCode;
	bool m_ysfLoDev;
	uint32_t m_ysfTXHang;
	uint32_t m_p25TXHang;
	uint32_t m_nxdnTXHang;
	bool m_duplex;
	bool m_rxInvert;
	bool m_txInvert;
	bool m_pttInvert;
	uint32_t m_txDelay;
	uint32_t m_dmrDelay;
	float m_rxLevel;
	float m_rfLevel;
	float m_cwIdTXLevel;
	float m_dstarTXLevel;
	float m_dmrTXLevel;
	float m_ysfTXLevel;
	float m_p25TXLevel;
	float m_nxdnTXLevel;
	float m_pocsagTXLevel;
	float m_fmTXLevel;
	bool m_debug;
	bool m_useCOSAsLockout;
	bool m_dstarEnabled;
	bool m_dmrEnabled;
	bool m_ysfEnabled;
	bool m_p25Enabled;
	bool m_nxdnEnabled;
	bool m_pocsagEnabled;
	bool m_fmEnabled;
	int m_rxDCOffset;
	int m_txDCOffset;
};

#endif // CODEC_H
