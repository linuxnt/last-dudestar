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

#ifndef NXDNCODEC_H
#define NXDNCODEC_H

//#include <inttypes.h>
#include "codec.h"

class NXDNCodec : public Codec
{
	Q_OBJECT
public:
	NXDNCodec(QString callsign, uint16_t nxdnid, uint32_t gwid, QString host, int port, bool ipv6, QString vocoder, QString modem, QString audioin, QString audioout);
	~NXDNCodec();
	unsigned char * get_frame();
	unsigned char * get_eot(){m_eot = true; return get_frame();}
	void set_hwtx(bool hw){m_hwtx = hw;}
private slots:
	void process_udp();
	void process_rx_data();
#ifdef AMBEHW_SUPPORTED
	void get_ambe();
#endif
	void send_ping();
	void send_disconnect();
	void transmit();
	void hostname_lookup(QHostInfo i);
	void swrx_state_changed(int s) {m_hwrx = !s; }
	void swtx_state_changed(int s) {m_hwtx = !s; }
	void send_frame();
	void decoder_gain_changed(qreal);
private:
	uint16_t m_nxdnid;
	bool m_eot;
	uint8_t m_nxdnframe[55];
	uint8_t m_lich;
	uint8_t m_sacch[5];
	uint8_t m_layer3[22];
	uint8_t m_ambe[36];
	uint8_t packet_size;

	void encode_header();
	void encode_data();
	uint8_t get_lich_fct(uint8_t);
	void set_lich_rfct(uint8_t);
	void set_lich_fct(uint8_t);
	void set_lich_option(uint8_t);
	void set_lich_dir(uint8_t);
	void set_sacch_ran(uint8_t);
	void set_sacch_struct(uint8_t);
	void set_sacch_data(const uint8_t *);
	void set_layer3_msgtype(uint8_t);
	void set_layer3_srcid(uint16_t);
	void set_layer3_dstid(uint16_t);
	void set_layer3_grp(bool);
	void set_layer3_blks(uint8_t);
	void layer3_encode(uint8_t*, uint8_t, uint8_t);

	uint8_t get_lich();
	void get_sacch(uint8_t *);
	void encode_crc6(uint8_t *, uint8_t);
	void deinterleave_ambe(uint8_t *);
	void interleave(uint8_t *ambe);
};

#endif // NXDNCODEC_H
