/****************************************************************************
** Meta object code from reading C++ file 'codec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "codec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'codec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Codec_t {
    QByteArrayData data[18];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Codec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Codec_t qt_meta_stringdata_Codec = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Codec"
QT_MOC_LITERAL(1, 6, 6), // "update"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 15), // "Codec::MODEINFO"
QT_MOC_LITERAL(4, 30, 19), // "update_output_level"
QT_MOC_LITERAL(5, 50, 15), // "send_disconnect"
QT_MOC_LITERAL(6, 66, 15), // "hostname_lookup"
QT_MOC_LITERAL(7, 82, 9), // "QHostInfo"
QT_MOC_LITERAL(8, 92, 12), // "send_connect"
QT_MOC_LITERAL(9, 105, 17), // "input_src_changed"
QT_MOC_LITERAL(10, 123, 2), // "id"
QT_MOC_LITERAL(11, 126, 1), // "t"
QT_MOC_LITERAL(12, 128, 8), // "start_tx"
QT_MOC_LITERAL(13, 137, 7), // "stop_tx"
QT_MOC_LITERAL(14, 145, 9), // "toggle_tx"
QT_MOC_LITERAL(15, 155, 11), // "deleteLater"
QT_MOC_LITERAL(16, 167, 20), // "in_audio_vol_changed"
QT_MOC_LITERAL(17, 188, 21) // "out_audio_vol_changed"

    },
    "Codec\0update\0\0Codec::MODEINFO\0"
    "update_output_level\0send_disconnect\0"
    "hostname_lookup\0QHostInfo\0send_connect\0"
    "input_src_changed\0id\0t\0start_tx\0stop_tx\0"
    "toggle_tx\0deleteLater\0in_audio_vol_changed\0"
    "out_audio_vol_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Codec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   80,    2, 0x09 /* Protected */,
       6,    1,   81,    2, 0x09 /* Protected */,
       8,    0,   84,    2, 0x09 /* Protected */,
       9,    2,   85,    2, 0x09 /* Protected */,
      12,    0,   90,    2, 0x09 /* Protected */,
      13,    0,   91,    2, 0x09 /* Protected */,
      14,    1,   92,    2, 0x09 /* Protected */,
      15,    0,   95,    2, 0x09 /* Protected */,
      16,    1,   96,    2, 0x09 /* Protected */,
      17,    1,   99,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::UShort,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,

       0        // eod
};

void Codec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Codec *_t = static_cast<Codec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< Codec::MODEINFO(*)>(_a[1]))); break;
        case 1: _t->update_output_level((*reinterpret_cast< unsigned short(*)>(_a[1]))); break;
        case 2: _t->send_disconnect(); break;
        case 3: _t->hostname_lookup((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 4: _t->send_connect(); break;
        case 5: _t->input_src_changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->start_tx(); break;
        case 7: _t->stop_tx(); break;
        case 8: _t->toggle_tx((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->deleteLater(); break;
        case 10: _t->in_audio_vol_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->out_audio_vol_changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            using _t = void (Codec::*)(Codec::MODEINFO );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Codec::update)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Codec::*)(unsigned short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Codec::update_output_level)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Codec::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Codec.data,
      qt_meta_data_Codec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Codec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Codec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Codec.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Codec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Codec::update(Codec::MODEINFO _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Codec::update_output_level(unsigned short _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
