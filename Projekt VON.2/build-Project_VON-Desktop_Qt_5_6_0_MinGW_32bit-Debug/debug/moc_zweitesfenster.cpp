/****************************************************************************
** Meta object code from reading C++ file 'zweitesfenster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project_VON/zweitesfenster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zweitesfenster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZweitesFenster_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZweitesFenster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZweitesFenster_t qt_meta_stringdata_ZweitesFenster = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ZweitesFenster"
QT_MOC_LITERAL(1, 15, 7), // "clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "schwarz"
QT_MOC_LITERAL(4, 32, 5), // "beige"
QT_MOC_LITERAL(5, 38, 5), // "weiss"
QT_MOC_LITERAL(6, 44, 4), // "pink"
QT_MOC_LITERAL(7, 49, 18), // "vollbildModusAktiv"
QT_MOC_LITERAL(8, 68, 20) // "vollbildModusInaktiv"

    },
    "ZweitesFenster\0clicked\0\0schwarz\0beige\0"
    "weiss\0pink\0vollbildModusAktiv\0"
    "vollbildModusInaktiv"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZweitesFenster[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ZweitesFenster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZweitesFenster *_t = static_cast<ZweitesFenster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->schwarz(); break;
        case 2: _t->beige(); break;
        case 3: _t->weiss(); break;
        case 4: _t->pink(); break;
        case 5: _t->vollbildModusAktiv(); break;
        case 6: _t->vollbildModusInaktiv(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZweitesFenster::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZweitesFenster::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ZweitesFenster::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ZweitesFenster.data,
      qt_meta_data_ZweitesFenster,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZweitesFenster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZweitesFenster::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZweitesFenster.stringdata0))
        return static_cast<void*>(const_cast< ZweitesFenster*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ZweitesFenster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void ZweitesFenster::clicked()const
{
    QMetaObject::activate(const_cast< ZweitesFenster *>(this), &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
