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

#ifndef SERIALMODEM_H
#define SERIALMODEM_H

#include <QObject>
#include <QSerialPort>
#include <QQueue>
#include <QTimer>

class SerialModem : public QObject
{
	Q_OBJECT
public:
	SerialModem(QString);
	~SerialModem();
	void set_mode(QString);
	void set_modem_flags(bool, bool, bool, bool, bool);
	void set_modem_params(uint32_t, uint32_t, uint32_t, float, float, uint32_t, float, float, float, float, float, float, float);
	static QMap<QString, QString>  discover_devices();
	void connect_to_serial(QString);
	void write(QByteArray);
private slots:
	void process_serial();
	void process_modem();
	void set_freq();
	void set_config();
	void set_mode(uint8_t);
private:
	QSerialPort *m_serial;
	QTimer *m_modemtimer;
	uint8_t packet_size;
	QQueue<char> m_serialdata;
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
signals:
	void data_ready();
	void modem_data_ready(QByteArray);
};

#endif // SERIALMODEM_H
