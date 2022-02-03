/****************************************************************************
** Meta object code from reading C++ file 'dmrcodec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dmrcodec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmrcodec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DMRCodec_t {
    QByteArrayData data[24];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DMRCodec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DMRCodec_t qt_meta_stringdata_DMRCodec = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DMRCodec"
QT_MOC_LITERAL(1, 9, 11), // "process_udp"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "process_rx_data"
QT_MOC_LITERAL(4, 38, 18), // "process_modem_data"
QT_MOC_LITERAL(5, 57, 8), // "get_ambe"
QT_MOC_LITERAL(6, 66, 9), // "send_ping"
QT_MOC_LITERAL(7, 76, 15), // "send_disconnect"
QT_MOC_LITERAL(8, 92, 8), // "transmit"
QT_MOC_LITERAL(9, 101, 15), // "hostname_lookup"
QT_MOC_LITERAL(10, 117, 9), // "QHostInfo"
QT_MOC_LITERAL(11, 127, 1), // "i"
QT_MOC_LITERAL(12, 129, 16), // "dmr_tgid_changed"
QT_MOC_LITERAL(13, 146, 2), // "id"
QT_MOC_LITERAL(14, 149, 14), // "dmr_cc_changed"
QT_MOC_LITERAL(15, 164, 2), // "cc"
QT_MOC_LITERAL(16, 167, 16), // "dmr_slot_changed"
QT_MOC_LITERAL(17, 184, 1), // "s"
QT_MOC_LITERAL(18, 186, 19), // "dmrpc_state_changed"
QT_MOC_LITERAL(19, 206, 2), // "pc"
QT_MOC_LITERAL(20, 209, 18), // "swrx_state_changed"
QT_MOC_LITERAL(21, 228, 18), // "swtx_state_changed"
QT_MOC_LITERAL(22, 247, 10), // "send_frame"
QT_MOC_LITERAL(23, 258, 20) // "decoder_gain_changed"

    },
    "DMRCodec\0process_udp\0\0process_rx_data\0"
    "process_modem_data\0get_ambe\0send_ping\0"
    "send_disconnect\0transmit\0hostname_lookup\0"
    "QHostInfo\0i\0dmr_tgid_changed\0id\0"
    "dmr_cc_changed\0cc\0dmr_slot_changed\0s\0"
    "dmrpc_state_changed\0pc\0swrx_state_changed\0"
    "swtx_state_changed\0send_frame\0"
    "decoder_gain_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DMRCodec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    1,   96,    2, 0x08 /* Private */,
       5,    0,   99,    2, 0x08 /* Private */,
       6,    0,  100,    2, 0x08 /* Private */,
       7,    0,  101,    2, 0x08 /* Private */,
       8,    0,  102,    2, 0x08 /* Private */,
       9,    1,  103,    2, 0x08 /* Private */,
      12,    1,  106,    2, 0x08 /* Private */,
      14,    1,  109,    2, 0x08 /* Private */,
      16,    1,  112,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,
      20,    1,  118,    2, 0x08 /* Private */,
      21,    1,  121,    2, 0x08 /* Private */,
      22,    0,  124,    2, 0x08 /* Private */,
      23,    1,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,

       0        // eod
};

void DMRCodec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DMRCodec *_t = static_cast<DMRCodec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->process_udp(); break;
        case 1: _t->process_rx_data(); break;
        case 2: _t->process_modem_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->get_ambe(); break;
        case 4: _t->send_ping(); break;
        case 5: _t->send_disconnect(); break;
        case 6: _t->transmit(); break;
        case 7: _t->hostname_lookup((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 8: _t->dmr_tgid_changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->dmr_cc_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->dmr_slot_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->dmrpc_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->swrx_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->swtx_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->send_frame(); break;
        case 15: _t->decoder_gain_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DMRCodec::staticMetaObject = {
    { &Codec::staticMetaObject, qt_meta_stringdata_DMRCodec.data,
      qt_meta_data_DMRCodec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DMRCodec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DMRCodec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DMRCodec.stringdata0))
        return static_cast<void*>(this);
    return Codec::qt_metacast(_clname);
}

int DMRCodec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Codec::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
