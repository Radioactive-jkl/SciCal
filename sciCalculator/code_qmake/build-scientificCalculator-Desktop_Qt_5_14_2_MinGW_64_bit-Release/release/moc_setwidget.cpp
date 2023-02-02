/****************************************************************************
** Meta object code from reading C++ file 'setwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../scical/scientificCalculator/setwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_setwidget_t {
    QByteArrayData data[12];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_setwidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_setwidget_t qt_meta_stringdata_setwidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "setwidget"
QT_MOC_LITERAL(1, 10, 12), // "sendToWidget"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "co"
QT_MOC_LITERAL(4, 27, 21), // "on_roundButon_clicked"
QT_MOC_LITERAL(5, 49, 20), // "on_cutButton_clicked"
QT_MOC_LITERAL(6, 70, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(7, 94, 3), // "arg"
QT_MOC_LITERAL(8, 98, 23), // "on_commitButton_clicked"
QT_MOC_LITERAL(9, 122, 28), // "on_checkBox_per_stateChanged"
QT_MOC_LITERAL(10, 151, 28), // "on_checkBox_top_stateChanged"
QT_MOC_LITERAL(11, 180, 23) // "on_exportButton_clicked"

    },
    "setwidget\0sendToWidget\0\0co\0"
    "on_roundButon_clicked\0on_cutButton_clicked\0"
    "on_spinBox_valueChanged\0arg\0"
    "on_commitButton_clicked\0"
    "on_checkBox_per_stateChanged\0"
    "on_checkBox_top_stateChanged\0"
    "on_exportButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_setwidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void setwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<setwidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendToWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_roundButon_clicked(); break;
        case 2: _t->on_cutButton_clicked(); break;
        case 3: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_commitButton_clicked(); break;
        case 5: _t->on_checkBox_per_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBox_top_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_exportButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (setwidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&setwidget::sendToWidget)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject setwidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_setwidget.data,
    qt_meta_data_setwidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *setwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *setwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_setwidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int setwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void setwidget::sendToWidget(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
