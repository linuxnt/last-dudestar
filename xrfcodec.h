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

#ifndef XRFCODEC_H
#define XRFCODEC_H

#include "codec.h"

class XRFCodec : public Codec
{
	Q_OBJECT
public:
	XRFCodec(QString callsign, QString hostname, char module, QString host, int port, bool ipv6, QString vocoder, QString modem, QString audioin, QString audioout);
	~XRFCodec();
	unsigned char * get_frame(unsigned char *ambe);
private:
	QString m_txmycall;
	QString m_txurcall;
	QString m_txrptr1;
	QString m_txrptr2;
	QString m_txusrtxt;
	uint8_t packet_size;
private slots:
	void toggle_tx(bool);
	void start_tx();
	void format_callsign(QString &);
	void process_udp();
	void process_rx_data();
	void process_modem_data(QByteArray d);
#ifdef AMBEHW_SUPPORTED
	void get_ambe();
#endif
	void send_ping();
	void send_disconnect();
	void transmit();
	void hostname_lookup(QHostInfo i);
	void input_src_changed(int id, QString t) { m_ttsid = id; m_ttstext = t; }
	void mycall_changed(QString mc) { m_txmycall = mc; }
	void urcall_changed(QString uc) { m_txurcall = uc; }
	void rptr1_changed(QString r1) { m_txrptr1 = r1; }
	void rptr2_changed(QString r2) { m_txrptr2 = r2; }
	void usrtxt_changed(QString t) { m_txusrtxt = t; }
	void swrx_state_changed(int s) {m_hwrx = !s; }
	void swtx_state_changed(int s) {m_hwtx = !s; }
	void send_frame(uint8_t *);
	void decoder_gain_changed(qreal);
};

#endif // XRFCODEC_H
