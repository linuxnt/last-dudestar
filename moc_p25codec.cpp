/****************************************************************************
** Meta object code from reading C++ file 'p25codec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "p25codec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'p25codec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_P25Codec_t {
    QByteArrayData data[16];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_P25Codec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_P25Codec_t qt_meta_stringdata_P25Codec = {
    {
QT_MOC_LITERAL(0, 0, 8), // "P25Codec"
QT_MOC_LITERAL(1, 9, 11), // "process_udp"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "process_modem_data"
QT_MOC_LITERAL(4, 41, 15), // "process_rx_data"
QT_MOC_LITERAL(5, 57, 9), // "send_ping"
QT_MOC_LITERAL(6, 67, 15), // "send_disconnect"
QT_MOC_LITERAL(7, 83, 8), // "transmit"
QT_MOC_LITERAL(8, 92, 15), // "hostname_lookup"
QT_MOC_LITERAL(9, 108, 9), // "QHostInfo"
QT_MOC_LITERAL(10, 118, 1), // "i"
QT_MOC_LITERAL(11, 120, 16), // "dmr_tgid_changed"
QT_MOC_LITERAL(12, 137, 2), // "id"
QT_MOC_LITERAL(13, 140, 17), // "input_src_changed"
QT_MOC_LITERAL(14, 158, 1), // "t"
QT_MOC_LITERAL(15, 160, 20) // "decoder_gain_changed"

    },
    "P25Codec\0process_udp\0\0process_modem_data\0"
    "process_rx_data\0send_ping\0send_disconnect\0"
    "transmit\0hostname_lookup\0QHostInfo\0i\0"
    "dmr_tgid_changed\0id\0input_src_changed\0"
    "t\0decoder_gain_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_P25Codec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       4,    0,   68,    2, 0x08 /* Private */,
       5,    0,   69,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
      13,    2,   78,    2, 0x08 /* Private */,
      15,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   14,
    QMetaType::Void, QMetaType::QReal,    2,

       0        // eod
};

void P25Codec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        P25Codec *_t = static_cast<P25Codec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->process_udp(); break;
        case 1: _t->process_modem_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->process_rx_data(); break;
        case 3: _t->send_ping(); break;
        case 4: _t->send_disconnect(); break;
        case 5: _t->transmit(); break;
        case 6: _t->hostname_lookup((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 7: _t->dmr_tgid_changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->input_src_changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->decoder_gain_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
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
    }
}

QT_INIT_METAOBJECT const QMetaObject P25Codec::staticMetaObject = {
    { &Codec::staticMetaObject, qt_meta_stringdata_P25Codec.data,
      qt_meta_data_P25Codec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *P25Codec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *P25Codec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_P25Codec.stringdata0))
        return static_cast<void*>(this);
    return Codec::qt_metacast(_clname);
}

int P25Codec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Codec::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
