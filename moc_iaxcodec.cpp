/****************************************************************************
** Meta object code from reading C++ file 'iaxcodec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "iaxcodec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iaxcodec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IAXCodec_t {
    QByteArrayData data[36];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IAXCodec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IAXCodec_t qt_meta_stringdata_IAXCodec = {
    {
QT_MOC_LITERAL(0, 0, 8), // "IAXCodec"
QT_MOC_LITERAL(1, 9, 6), // "update"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 19), // "update_output_level"
QT_MOC_LITERAL(4, 37, 11), // "deleteLater"
QT_MOC_LITERAL(5, 49, 11), // "process_udp"
QT_MOC_LITERAL(6, 61, 12), // "send_connect"
QT_MOC_LITERAL(7, 74, 15), // "send_disconnect"
QT_MOC_LITERAL(8, 90, 15), // "hostname_lookup"
QT_MOC_LITERAL(9, 106, 9), // "QHostInfo"
QT_MOC_LITERAL(10, 116, 1), // "i"
QT_MOC_LITERAL(11, 118, 17), // "send_registration"
QT_MOC_LITERAL(12, 136, 8), // "uint16_t"
QT_MOC_LITERAL(13, 145, 5), // "dcall"
QT_MOC_LITERAL(14, 151, 9), // "send_call"
QT_MOC_LITERAL(15, 161, 14), // "send_call_auth"
QT_MOC_LITERAL(16, 176, 8), // "send_ack"
QT_MOC_LITERAL(17, 185, 7), // "uint8_t"
QT_MOC_LITERAL(18, 193, 17), // "send_lag_response"
QT_MOC_LITERAL(19, 211, 9), // "send_ping"
QT_MOC_LITERAL(20, 221, 9), // "send_pong"
QT_MOC_LITERAL(21, 231, 9), // "toggle_tx"
QT_MOC_LITERAL(22, 241, 8), // "start_tx"
QT_MOC_LITERAL(23, 250, 7), // "stop_tx"
QT_MOC_LITERAL(24, 258, 8), // "transmit"
QT_MOC_LITERAL(25, 267, 15), // "process_rx_data"
QT_MOC_LITERAL(26, 283, 16), // "send_voice_frame"
QT_MOC_LITERAL(27, 300, 8), // "int16_t*"
QT_MOC_LITERAL(28, 309, 9), // "send_dtmf"
QT_MOC_LITERAL(29, 319, 14), // "send_radio_key"
QT_MOC_LITERAL(30, 334, 17), // "input_src_changed"
QT_MOC_LITERAL(31, 352, 2), // "id"
QT_MOC_LITERAL(32, 355, 1), // "t"
QT_MOC_LITERAL(33, 357, 20), // "in_audio_vol_changed"
QT_MOC_LITERAL(34, 378, 21), // "out_audio_vol_changed"
QT_MOC_LITERAL(35, 400, 20) // "decoder_gain_changed"

    },
    "IAXCodec\0update\0\0update_output_level\0"
    "deleteLater\0process_udp\0send_connect\0"
    "send_disconnect\0hostname_lookup\0"
    "QHostInfo\0i\0send_registration\0uint16_t\0"
    "dcall\0send_call\0send_call_auth\0send_ack\0"
    "uint8_t\0send_lag_response\0send_ping\0"
    "send_pong\0toggle_tx\0start_tx\0stop_tx\0"
    "transmit\0process_rx_data\0send_voice_frame\0"
    "int16_t*\0send_dtmf\0send_radio_key\0"
    "input_src_changed\0id\0t\0in_audio_vol_changed\0"
    "out_audio_vol_changed\0decoder_gain_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IAXCodec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,
       3,    1,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  153,    2, 0x08 /* Private */,
       5,    0,  154,    2, 0x08 /* Private */,
       6,    0,  155,    2, 0x08 /* Private */,
       7,    0,  156,    2, 0x08 /* Private */,
       8,    1,  157,    2, 0x08 /* Private */,
      11,    1,  160,    2, 0x08 /* Private */,
      11,    0,  163,    2, 0x28 /* Private | MethodCloned */,
      14,    0,  164,    2, 0x08 /* Private */,
      15,    0,  165,    2, 0x08 /* Private */,
      16,    4,  166,    2, 0x08 /* Private */,
      18,    0,  175,    2, 0x08 /* Private */,
      19,    0,  176,    2, 0x08 /* Private */,
      20,    0,  177,    2, 0x08 /* Private */,
      21,    1,  178,    2, 0x08 /* Private */,
      22,    0,  181,    2, 0x08 /* Private */,
      23,    0,  182,    2, 0x08 /* Private */,
      24,    0,  183,    2, 0x08 /* Private */,
      25,    0,  184,    2, 0x08 /* Private */,
      26,    1,  185,    2, 0x08 /* Private */,
      28,    1,  188,    2, 0x08 /* Private */,
      29,    1,  191,    2, 0x08 /* Private */,
      30,    2,  194,    2, 0x08 /* Private */,
      33,    1,  199,    2, 0x08 /* Private */,
      34,    1,  202,    2, 0x08 /* Private */,
      35,    1,  205,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 17, 0x80000000 | 17,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   31,   32,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,

       0        // eod
};

void IAXCodec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IAXCodec *_t = static_cast<IAXCodec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->update_output_level((*reinterpret_cast< unsigned short(*)>(_a[1]))); break;
        case 2: _t->deleteLater(); break;
        case 3: _t->process_udp(); break;
        case 4: _t->send_connect(); break;
        case 5: _t->send_disconnect(); break;
        case 6: _t->hostname_lookup((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 7: _t->send_registration((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 8: _t->send_registration(); break;
        case 9: _t->send_call(); break;
        case 10: _t->send_call_auth(); break;
        case 11: _t->send_ack((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4]))); break;
        case 12: _t->send_lag_response(); break;
        case 13: _t->send_ping(); break;
        case 14: _t->send_pong(); break;
        case 15: _t->toggle_tx((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->start_tx(); break;
        case 17: _t->stop_tx(); break;
        case 18: _t->transmit(); break;
        case 19: _t->process_rx_data(); break;
        case 20: _t->send_voice_frame((*reinterpret_cast< int16_t*(*)>(_a[1]))); break;
        case 21: _t->send_dtmf((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 22: _t->send_radio_key((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->input_src_changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->in_audio_vol_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 25: _t->out_audio_vol_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 26: _t->decoder_gain_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IAXCodec::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IAXCodec::update)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IAXCodec::*)(unsigned short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IAXCodec::update_output_level)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IAXCodec::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IAXCodec.data,
      qt_meta_data_IAXCodec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IAXCodec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IAXCodec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IAXCodec.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IAXCodec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void IAXCodec::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void IAXCodec::update_output_level(unsigned short _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
