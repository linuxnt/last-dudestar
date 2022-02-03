/****************************************************************************
** Meta object code from reading C++ file 'dudestar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dudestar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dudestar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DudeStar_t {
    QByteArrayData data[66];
    char stringdata0[1057];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DudeStar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DudeStar_t qt_meta_stringdata_DudeStar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DudeStar"
QT_MOC_LITERAL(1, 9, 20), // "input_source_changed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "dmr_tgid_changed"
QT_MOC_LITERAL(4, 48, 12), // "rate_changed"
QT_MOC_LITERAL(5, 61, 21), // "out_audio_vol_changed"
QT_MOC_LITERAL(6, 83, 20), // "in_audio_vol_changed"
QT_MOC_LITERAL(7, 104, 18), // "codec_gain_changed"
QT_MOC_LITERAL(8, 123, 9), // "send_dtmf"
QT_MOC_LITERAL(9, 133, 10), // "tx_clicked"
QT_MOC_LITERAL(10, 144, 10), // "tx_pressed"
QT_MOC_LITERAL(11, 155, 11), // "tx_released"
QT_MOC_LITERAL(12, 167, 13), // "save_settings"
QT_MOC_LITERAL(13, 181, 15), // "process_connect"
QT_MOC_LITERAL(14, 197, 19), // "process_mode_change"
QT_MOC_LITERAL(15, 217, 1), // "m"
QT_MOC_LITERAL(16, 219, 19), // "process_host_change"
QT_MOC_LITERAL(17, 239, 18), // "swrx_state_changed"
QT_MOC_LITERAL(18, 258, 18), // "swtx_state_changed"
QT_MOC_LITERAL(19, 277, 8), // "click_tx"
QT_MOC_LITERAL(20, 286, 8), // "press_tx"
QT_MOC_LITERAL(21, 295, 10), // "release_tx"
QT_MOC_LITERAL(22, 306, 11), // "tts_changed"
QT_MOC_LITERAL(23, 318, 16), // "tts_text_changed"
QT_MOC_LITERAL(24, 335, 17), // "tgid_text_changed"
QT_MOC_LITERAL(25, 353, 17), // "discover_vocoders"
QT_MOC_LITERAL(26, 371, 15), // "discover_modems"
QT_MOC_LITERAL(27, 387, 15), // "update_ref_data"
QT_MOC_LITERAL(28, 403, 15), // "Codec::MODEINFO"
QT_MOC_LITERAL(29, 419, 15), // "update_dcs_data"
QT_MOC_LITERAL(30, 435, 15), // "update_xrf_data"
QT_MOC_LITERAL(31, 451, 15), // "update_ysf_data"
QT_MOC_LITERAL(32, 467, 15), // "update_dmr_data"
QT_MOC_LITERAL(33, 483, 15), // "update_p25_data"
QT_MOC_LITERAL(34, 499, 16), // "update_nxdn_data"
QT_MOC_LITERAL(35, 516, 15), // "update_m17_data"
QT_MOC_LITERAL(36, 532, 15), // "update_iax_data"
QT_MOC_LITERAL(37, 548, 16), // "m17_rate_changed"
QT_MOC_LITERAL(38, 565, 25), // "process_codecgain_changed"
QT_MOC_LITERAL(39, 591, 19), // "process_mute_button"
QT_MOC_LITERAL(40, 611, 22), // "process_volume_changed"
QT_MOC_LITERAL(41, 634, 24), // "process_mic_gain_changed"
QT_MOC_LITERAL(42, 659, 23), // "process_mic_mute_button"
QT_MOC_LITERAL(43, 683, 17), // "process_ref_hosts"
QT_MOC_LITERAL(44, 701, 17), // "process_dcs_hosts"
QT_MOC_LITERAL(45, 719, 17), // "process_xrf_hosts"
QT_MOC_LITERAL(46, 737, 17), // "process_ysf_hosts"
QT_MOC_LITERAL(47, 755, 17), // "process_fcs_rooms"
QT_MOC_LITERAL(48, 773, 17), // "process_dmr_hosts"
QT_MOC_LITERAL(49, 791, 17), // "process_p25_hosts"
QT_MOC_LITERAL(50, 809, 18), // "process_nxdn_hosts"
QT_MOC_LITERAL(51, 828, 17), // "process_m17_hosts"
QT_MOC_LITERAL(52, 846, 16), // "check_host_files"
QT_MOC_LITERAL(53, 863, 17), // "update_host_files"
QT_MOC_LITERAL(54, 881, 15), // "process_dmr_ids"
QT_MOC_LITERAL(55, 897, 14), // "update_dmr_ids"
QT_MOC_LITERAL(56, 912, 16), // "process_nxdn_ids"
QT_MOC_LITERAL(57, 929, 15), // "update_nxdn_ids"
QT_MOC_LITERAL(58, 945, 16), // "process_settings"
QT_MOC_LITERAL(59, 962, 19), // "update_custom_hosts"
QT_MOC_LITERAL(60, 982, 13), // "download_file"
QT_MOC_LITERAL(61, 996, 15), // "file_downloaded"
QT_MOC_LITERAL(62, 1012, 9), // "update_ui"
QT_MOC_LITERAL(63, 1022, 19), // "update_output_level"
QT_MOC_LITERAL(64, 1042, 1), // "l"
QT_MOC_LITERAL(65, 1044, 12) // "process_dtmf"

    },
    "DudeStar\0input_source_changed\0\0"
    "dmr_tgid_changed\0rate_changed\0"
    "out_audio_vol_changed\0in_audio_vol_changed\0"
    "codec_gain_changed\0send_dtmf\0tx_clicked\0"
    "tx_pressed\0tx_released\0save_settings\0"
    "process_connect\0process_mode_change\0"
    "m\0process_host_change\0swrx_state_changed\0"
    "swtx_state_changed\0click_tx\0press_tx\0"
    "release_tx\0tts_changed\0tts_text_changed\0"
    "tgid_text_changed\0discover_vocoders\0"
    "discover_modems\0update_ref_data\0"
    "Codec::MODEINFO\0update_dcs_data\0"
    "update_xrf_data\0update_ysf_data\0"
    "update_dmr_data\0update_p25_data\0"
    "update_nxdn_data\0update_m17_data\0"
    "update_iax_data\0m17_rate_changed\0"
    "process_codecgain_changed\0process_mute_button\0"
    "process_volume_changed\0process_mic_gain_changed\0"
    "process_mic_mute_button\0process_ref_hosts\0"
    "process_dcs_hosts\0process_xrf_hosts\0"
    "process_ysf_hosts\0process_fcs_rooms\0"
    "process_dmr_hosts\0process_p25_hosts\0"
    "process_nxdn_hosts\0process_m17_hosts\0"
    "check_host_files\0update_host_files\0"
    "process_dmr_ids\0update_dmr_ids\0"
    "process_nxdn_ids\0update_nxdn_ids\0"
    "process_settings\0update_custom_hosts\0"
    "download_file\0file_downloaded\0update_ui\0"
    "update_output_level\0l\0process_dtmf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DudeStar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  319,    2, 0x06 /* Public */,
       3,    1,  324,    2, 0x06 /* Public */,
       4,    1,  327,    2, 0x06 /* Public */,
       5,    1,  330,    2, 0x06 /* Public */,
       6,    1,  333,    2, 0x06 /* Public */,
       7,    1,  336,    2, 0x06 /* Public */,
       8,    1,  339,    2, 0x06 /* Public */,
       9,    1,  342,    2, 0x06 /* Public */,
      10,    0,  345,    2, 0x06 /* Public */,
      11,    0,  346,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  347,    2, 0x08 /* Private */,
      13,    0,  348,    2, 0x08 /* Private */,
      14,    1,  349,    2, 0x08 /* Private */,
      16,    1,  352,    2, 0x08 /* Private */,
      17,    1,  355,    2, 0x08 /* Private */,
      18,    1,  358,    2, 0x08 /* Private */,
      19,    0,  361,    2, 0x08 /* Private */,
      20,    0,  362,    2, 0x08 /* Private */,
      21,    0,  363,    2, 0x08 /* Private */,
      22,    1,  364,    2, 0x08 /* Private */,
      23,    1,  367,    2, 0x08 /* Private */,
      24,    1,  370,    2, 0x08 /* Private */,
      25,    0,  373,    2, 0x08 /* Private */,
      26,    0,  374,    2, 0x08 /* Private */,
      27,    1,  375,    2, 0x08 /* Private */,
      29,    1,  378,    2, 0x08 /* Private */,
      30,    1,  381,    2, 0x08 /* Private */,
      31,    1,  384,    2, 0x08 /* Private */,
      32,    1,  387,    2, 0x08 /* Private */,
      33,    1,  390,    2, 0x08 /* Private */,
      34,    1,  393,    2, 0x08 /* Private */,
      35,    1,  396,    2, 0x08 /* Private */,
      36,    0,  399,    2, 0x08 /* Private */,
      37,    1,  400,    2, 0x08 /* Private */,
      38,    1,  403,    2, 0x08 /* Private */,
      39,    0,  406,    2, 0x08 /* Private */,
      40,    1,  407,    2, 0x08 /* Private */,
      41,    1,  410,    2, 0x08 /* Private */,
      42,    0,  413,    2, 0x08 /* Private */,
      43,    0,  414,    2, 0x08 /* Private */,
      44,    0,  415,    2, 0x08 /* Private */,
      45,    0,  416,    2, 0x08 /* Private */,
      46,    0,  417,    2, 0x08 /* Private */,
      47,    0,  418,    2, 0x08 /* Private */,
      48,    0,  419,    2, 0x08 /* Private */,
      49,    0,  420,    2, 0x08 /* Private */,
      50,    0,  421,    2, 0x08 /* Private */,
      51,    0,  422,    2, 0x08 /* Private */,
      52,    0,  423,    2, 0x08 /* Private */,
      53,    0,  424,    2, 0x08 /* Private */,
      54,    0,  425,    2, 0x08 /* Private */,
      55,    0,  426,    2, 0x08 /* Private */,
      56,    0,  427,    2, 0x08 /* Private */,
      57,    0,  428,    2, 0x08 /* Private */,
      58,    0,  429,    2, 0x08 /* Private */,
      59,    0,  430,    2, 0x08 /* Private */,
      60,    1,  431,    2, 0x08 /* Private */,
      61,    1,  434,    2, 0x08 /* Private */,
      62,    0,  437,    2, 0x08 /* Private */,
      63,    1,  438,    2, 0x08 /* Private */,
      65,    0,  441,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort,   64,
    QMetaType::Void,

       0        // eod
};

void DudeStar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DudeStar *_t = static_cast<DudeStar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->input_source_changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->dmr_tgid_changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->rate_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->out_audio_vol_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->in_audio_vol_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->codec_gain_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->send_dtmf((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->tx_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->tx_pressed(); break;
        case 9: _t->tx_released(); break;
        case 10: _t->save_settings(); break;
        case 11: _t->process_connect(); break;
        case 12: _t->process_mode_change((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->process_host_change((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->swrx_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->swtx_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->click_tx(); break;
        case 17: _t->press_tx(); break;
        case 18: _t->release_tx(); break;
        case 19: _t->tts_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->tts_text_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->tgid_text_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->discover_vocoders(); break;
        case 23: _t->discover_modems(); break;
        case 24: _t->update_ref_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 25: _t->update_dcs_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 26: _t->update_xrf_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 27: _t->update_ysf_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 28: _t->update_dmr_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 29: _t->update_p25_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 30: _t->update_nxdn_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 31: _t->update_m17_data((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 32: _t->update_iax_data(); break;
        case 33: _t->m17_rate_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->process_codecgain_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->process_mute_button(); break;
        case 36: _t->process_volume_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->process_mic_gain_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->process_mic_mute_button(); break;
        case 39: _t->process_ref_hosts(); break;
        case 40: _t->process_dcs_hosts(); break;
        case 41: _t->process_xrf_hosts(); break;
        case 42: _t->process_ysf_hosts(); break;
        case 43: _t->process_fcs_rooms(); break;
        case 44: _t->process_dmr_hosts(); break;
        case 45: _t->process_p25_hosts(); break;
        case 46: _t->process_nxdn_hosts(); break;
        case 47: _t->process_m17_hosts(); break;
        case 48: _t->check_host_files(); break;
        case 49: _t->update_host_files(); break;
        case 50: _t->process_dmr_ids(); break;
        case 51: _t->update_dmr_ids(); break;
        case 52: _t->process_nxdn_ids(); break;
        case 53: _t->update_nxdn_ids(); break;
        case 54: _t->process_settings(); break;
        case 55: _t->update_custom_hosts(); break;
        case 56: _t->download_file((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 57: _t->file_downloaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 58: _t->update_ui(); break;
        case 59: _t->update_output_level((*reinterpret_cast< unsigned short(*)>(_a[1]))); break;
        case 60: _t->process_dtmf(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DudeStar::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::input_source_changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::dmr_tgid_changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::rate_changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::out_audio_vol_changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::in_audio_vol_changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::codec_gain_changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::send_dtmf)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::tx_clicked)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::tx_pressed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DudeStar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DudeStar::tx_released)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DudeStar::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DudeStar.data,
      qt_meta_data_DudeStar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DudeStar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DudeStar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DudeStar.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DudeStar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void DudeStar::input_source_changed(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DudeStar::dmr_tgid_changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DudeStar::rate_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DudeStar::out_audio_vol_changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DudeStar::in_audio_vol_changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DudeStar::codec_gain_changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DudeStar::send_dtmf(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DudeStar::tx_clicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DudeStar::tx_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DudeStar::tx_released()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
