/****************************************************************************
** Meta object code from reading C++ file 'serialmodem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serialmodem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialmodem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialModem_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialModem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialModem_t qt_meta_stringdata_SerialModem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SerialModem"
QT_MOC_LITERAL(1, 12, 10), // "data_ready"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "modem_data_ready"
QT_MOC_LITERAL(4, 41, 14), // "process_serial"
QT_MOC_LITERAL(5, 56, 13), // "process_modem"
QT_MOC_LITERAL(6, 70, 8), // "set_freq"
QT_MOC_LITERAL(7, 79, 10), // "set_config"
QT_MOC_LITERAL(8, 90, 8), // "set_mode"
QT_MOC_LITERAL(9, 99, 7) // "uint8_t"

    },
    "SerialModem\0data_ready\0\0modem_data_ready\0"
    "process_serial\0process_modem\0set_freq\0"
    "set_config\0set_mode\0uint8_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialModem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   53,    2, 0x08 /* Private */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void SerialModem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialModem *_t = static_cast<SerialModem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data_ready(); break;
        case 1: _t->modem_data_ready((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->process_serial(); break;
        case 3: _t->process_modem(); break;
        case 4: _t->set_freq(); break;
        case 5: _t->set_config(); break;
        case 6: _t->set_mode((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialModem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialModem::data_ready)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialModem::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialModem::modem_data_ready)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialModem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SerialModem.data,
      qt_meta_data_SerialModem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialModem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialModem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialModem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialModem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SerialModem::data_ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialModem::modem_data_ready(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
