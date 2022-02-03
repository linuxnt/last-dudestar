/****************************************************************************
** Meta object code from reading C++ file 'nxdncodec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "nxdncodec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nxdncodec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NXDNCodec_t {
    QByteArrayData data[16];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NXDNCodec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NXDNCodec_t qt_meta_stringdata_NXDNCodec = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NXDNCodec"
QT_MOC_LITERAL(1, 10, 11), // "process_udp"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "process_rx_data"
QT_MOC_LITERAL(4, 39, 8), // "get_ambe"
QT_MOC_LITERAL(5, 48, 9), // "send_ping"
QT_MOC_LITERAL(6, 58, 15), // "send_disconnect"
QT_MOC_LITERAL(7, 74, 8), // "transmit"
QT_MOC_LITERAL(8, 83, 15), // "hostname_lookup"
QT_MOC_LITERAL(9, 99, 9), // "QHostInfo"
QT_MOC_LITERAL(10, 109, 1), // "i"
QT_MOC_LITERAL(11, 111, 18), // "swrx_state_changed"
QT_MOC_LITERAL(12, 130, 1), // "s"
QT_MOC_LITERAL(13, 132, 18), // "swtx_state_changed"
QT_MOC_LITERAL(14, 151, 10), // "send_frame"
QT_MOC_LITERAL(15, 162, 20) // "decoder_gain_changed"

    },
    "NXDNCodec\0process_udp\0\0process_rx_data\0"
    "get_ambe\0send_ping\0send_disconnect\0"
    "transmit\0hostname_lookup\0QHostInfo\0i\0"
    "swrx_state_changed\0s\0swtx_state_changed\0"
    "send_frame\0decoder_gain_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NXDNCodec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,

       0        // eod
};

void NXDNCodec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NXDNCodec *_t = static_cast<NXDNCodec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->process_udp(); break;
        case 1: _t->process_rx_data(); break;
        case 2: _t->get_ambe(); break;
        case 3: _t->send_ping(); break;
        case 4: _t->send_disconnect(); break;
        case 5: _t->transmit(); break;
        case 6: _t->hostname_lookup((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 7: _t->swrx_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->swtx_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->send_frame(); break;
        case 10: _t->decoder_gain_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
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

QT_INIT_METAOBJECT const QMetaObject NXDNCodec::staticMetaObject = {
    { &Codec::staticMetaObject, qt_meta_stringdata_NXDNCodec.data,
      qt_meta_data_NXDNCodec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NXDNCodec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NXDNCodec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NXDNCodec.stringdata0))
        return static_cast<void*>(this);
    return Codec::qt_metacast(_clname);
}

int NXDNCodec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Codec::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
