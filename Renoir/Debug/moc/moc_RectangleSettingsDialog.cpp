/****************************************************************************
** Meta object code from reading C++ file 'RectangleSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RectangleSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RectangleSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_renoir__RectangleSettingsDialog_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_renoir__RectangleSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_renoir__RectangleSettingsDialog_t qt_meta_stringdata_renoir__RectangleSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 31), // "renoir::RectangleSettingsDialog"
QT_MOC_LITERAL(1, 32, 17), // "sendRectangleData"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "QRectF&"
QT_MOC_LITERAL(4, 59, 4), // "rect"
QT_MOC_LITERAL(5, 64, 7), // "QColor&"
QT_MOC_LITERAL(6, 72, 4), // "fill"
QT_MOC_LITERAL(7, 77, 12), // "outlineColor"
QT_MOC_LITERAL(8, 90, 11), // "outlineSize"
QT_MOC_LITERAL(9, 102, 16), // "on_color_clicked"
QT_MOC_LITERAL(10, 119, 18), // "on_outline_clicked"
QT_MOC_LITERAL(11, 138, 19) // "on_okButton_clicked"

    },
    "renoir::RectangleSettingsDialog\0"
    "sendRectangleData\0\0QRectF&\0rect\0QColor&\0"
    "fill\0outlineColor\0outlineSize\0"
    "on_color_clicked\0on_outline_clicked\0"
    "on_okButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_renoir__RectangleSettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   43,    2, 0x08 /* Private */,
      10,    0,   44,    2, 0x08 /* Private */,
      11,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, QMetaType::UInt,    4,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void renoir::RectangleSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RectangleSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendRectangleData((*reinterpret_cast< QRectF(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 1: _t->on_color_clicked(); break;
        case 2: _t->on_outline_clicked(); break;
        case 3: _t->on_okButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RectangleSettingsDialog::*)(QRectF & , QColor & , QColor & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RectangleSettingsDialog::sendRectangleData)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject renoir::RectangleSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_renoir__RectangleSettingsDialog.data,
    qt_meta_data_renoir__RectangleSettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *renoir::RectangleSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *renoir::RectangleSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_renoir__RectangleSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int renoir::RectangleSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void renoir::RectangleSettingsDialog::sendRectangleData(QRectF & _t1, QColor & _t2, QColor & _t3, unsigned int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
