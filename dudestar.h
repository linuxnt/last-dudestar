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

#ifndef DUDESTAR_H
#define DUDESTAR_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QLabel>
#include <QStandardItemModel>
#ifdef USE_FLITE
#include <flite/flite.h>
#endif
#include "httpmanager.h"
#include "levelmeter.h"
#include "mbedec.h"
#include "mbeenc.h"
#include "refcodec.h"
#include "dcscodec.h"
#include "xrfcodec.h"
#include "ysfcodec.h"
#include "dmrcodec.h"
#include "p25codec.h"
#include "nxdncodec.h"
#include "m17codec.h"
#include "iaxcodec.h"

namespace Ui {
class DudeStar;
}

class DudeStar : public QMainWindow
{
    Q_OBJECT

public:
    explicit DudeStar(QWidget *parent = nullptr);
    ~DudeStar();

signals:
	void input_source_changed(int, QString);
	void dmr_tgid_changed(unsigned int);
	void rate_changed(int);
	void out_audio_vol_changed(qreal);
	void in_audio_vol_changed(qreal);
	void codec_gain_changed(qreal);
	void send_dtmf(QByteArray);
	void tx_clicked(bool);
	void tx_pressed();
	void tx_released();
private:
    void init_gui();
    Ui::DudeStar *ui;
	QSettings *m_settings;
	QSettings *m_reflocalhosts;
	QSettings *m_dcslocalhosts;
	QSettings *m_xrflocalhosts;
	QSettings *m_dmrlocalhosts;
	QSettings *m_ysflocalhosts;
	QSettings *m_p25localhosts;
	QSettings *m_nxdnlocalhosts;
	QSettings *m_m17localhosts;
	QSettings *m_iaxlocalhosts;
	LevelMeter *m_levelmeter;
	QLabel *m_labeldb;
	QTimer *m_uitimer;
	QButtonGroup *m17rates;
	int connect_status;
	uint16_t usb_pid;
	uint16_t usb_vid;
	QLabel *status_txt;
	QString host;
	QString hostname;
	QString hosts_filename;
	bool m_update_host_files;
	int port;
	QHostAddress address;
	QString config_path;
    QString callsign;
	QString serial;
	QString dmr_password;
	QString saved_refhost;
	QString saved_dcshost;
	QString saved_xrfhost;
	QString saved_ysfhost;
	QString saved_fcshost;
	QString saved_dmrhost;
	QString saved_p25host;
	QString saved_nxdnhost;
	QString saved_m17host;
	QString saved_iaxhost;
    char module;
	uint32_t dmrid;
	uint32_t dmr_srcid;
	uint32_t dmr_destid;
	uint32_t m_dmrcc;
	uint32_t m_dmrslot;
	uint8_t m_dmrcalltype;
	QString m_protocol;
	uint64_t ping_cnt;
	QThread *m_modethread;
	REFCodec *m_ref;
	DCSCodec *m_dcs;
	XRFCodec *m_xrf;
	YSFCodec *m_ysf;
	DMRCodec *m_dmr;
	P25Codec *m_p25;
	NXDNCodec *m_nxdn;
	M17Codec *m_m17;
	IAXCodec *m_iax;
    QByteArray user_data;
	QString m_iaxuser;
	QString m_iaxpassword;
	QString m_iaxnode;
	QString m_iaxhost;
	int m_iaxport;
	bool muted;
	bool input_muted;
	bool m_tx;
	bool hwtx;
	bool hwrx;
	bool hw_ambe_present;
	QMap<uint32_t, QString> m_dmrids;
	QMap<uint16_t, QString> nxdnids;
    const unsigned char header[5] = {0x80,0x44,0x53,0x56,0x54}; //DVSI packet header
	QButtonGroup *tts_voices;
	uint16_t m_outlevel;
	uint64_t m_rxcnt;
private slots:
	void save_settings();
    void process_connect();
	void process_mode_change(const QString &m);
	void process_host_change(const QString &);
	void swrx_state_changed(int);
	void swtx_state_changed(int);
	void click_tx();
	void press_tx();
	void release_tx();
	void tts_changed(int);
	void tts_text_changed(QString);
	void tgid_text_changed(QString);
	void discover_vocoders();
	void discover_modems();
	void update_ref_data(Codec::MODEINFO);
	void update_dcs_data(Codec::MODEINFO);
	void update_xrf_data(Codec::MODEINFO);
	void update_ysf_data(Codec::MODEINFO);
	void update_dmr_data(Codec::MODEINFO);
	void update_p25_data(Codec::MODEINFO);
	void update_nxdn_data(Codec::MODEINFO);
	void update_m17_data(Codec::MODEINFO);
	void update_iax_data();
	void m17_rate_changed(int);
	void process_codecgain_changed(int);
	void process_mute_button();
	void process_volume_changed(int);
	void process_mic_gain_changed(int);
	void process_mic_mute_button();
	void process_ref_hosts();
	void process_dcs_hosts();
	void process_xrf_hosts();
	void process_ysf_hosts();
	void process_fcs_rooms();
	void process_dmr_hosts();
	void process_p25_hosts();
	void process_nxdn_hosts();
	void process_m17_hosts();
	void check_host_files();
	void update_host_files();
	void process_dmr_ids();
	void update_dmr_ids();
	void process_nxdn_ids();
	void update_nxdn_ids();
    void process_settings();
	void update_custom_hosts();
	void download_file(QString);
	void file_downloaded(QString);
	void update_ui();
	void update_output_level(unsigned short l){ m_outlevel = l;}
	void process_dtmf();
};

#endif // DUDESTAR_H
