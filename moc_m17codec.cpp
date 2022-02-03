/****************************************************************************
** Meta object code from reading C++ file 'm17codec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "m17codec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'm17codec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_M17Codec_t {
    QByteArrayData data[15];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_M17Codec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_M17Codec_t qt_meta_stringdata_M17Codec = {
    {
QT_MOC_LITERAL(0, 0, 8), // "M17Codec"
QT_MOC_LITERAL(1, 9, 11), // "process_udp"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "send_ping"
QT_MOC_LITERAL(4, 32, 15), // "send_disconnect"
QT_MOC_LITERAL(5, 48, 20), // "decoder_gain_changed"
QT_MOC_LITERAL(6, 69, 9), // "toggle_tx"
QT_MOC_LITERAL(7, 79, 8), // "start_tx"
QT_MOC_LITERAL(8, 88, 8), // "transmit"
QT_MOC_LITERAL(9, 97, 15), // "hostname_lookup"
QT_MOC_LITERAL(10, 113, 9), // "QHostInfo"
QT_MOC_LITERAL(11, 123, 1), // "i"
QT_MOC_LITERAL(12, 125, 12), // "rate_changed"
QT_MOC_LITERAL(13, 138, 1), // "r"
QT_MOC_LITERAL(14, 140, 15) // "process_rx_data"

    },
    "M17Codec\0process_udp\0\0send_ping\0"
    "send_disconnect\0decoder_gain_changed\0"
    "toggle_tx\0start_tx\0transmit\0hostname_lookup\0"
    "QHostInfo\0i\0rate_changed\0r\0process_rx_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_M17Codec[] = {

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
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       6,    1,   70,    2, 0x08 /* Private */,
       7,    0,   73,    2, 0x08 /* Private */,
       8,    0,   74,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void M17Codec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        M17Codec *_t = static_cast<M17Codec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->process_udp(); break;
        case 1: _t->send_ping(); break;
        case 2: _t->send_disconnect(); break;
        case 3: _t->decoder_gain_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->toggle_tx((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->start_tx(); break;
        case 6: _t->transmit(); break;
        case 7: _t->hostname_lookup((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 8: _t->rate_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->process_rx_data(); break;
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

QT_INIT_METAOBJECT const QMetaObject M17Codec::staticMetaObject = {
    { &Codec::staticMetaObject, qt_meta_stringdata_M17Codec.data,
      qt_meta_data_M17Codec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *M17Codec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *M17Codec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_M17Codec.stringdata0))
        return static_cast<void*>(this);
    return Codec::qt_metacast(_clname);
}

int M17Codec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
