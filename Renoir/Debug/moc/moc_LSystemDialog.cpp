/****************************************************************************
** Meta object code from reading C++ file 'LSystemDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LSystemDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LSystemDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_renoir__LSystemDialog_t {
    QByteArrayData data[11];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_renoir__LSystemDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_renoir__LSystemDialog_t qt_meta_stringdata_renoir__LSystemDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "renoir::LSystemDialog"
QT_MOC_LITERAL(1, 22, 11), // "sendLSystem"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(4, 56, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(5, 80, 22), // "on_colorButton_clicked"
QT_MOC_LITERAL(6, 103, 19), // "on_bgButton_clicked"
QT_MOC_LITERAL(7, 123, 27), // "on_transparentCheck_clicked"
QT_MOC_LITERAL(8, 151, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(9, 173, 1), // "i"
QT_MOC_LITERAL(10, 175, 19) // "on_okButton_clicked"

    },
    "renoir::LSystemDialog\0sendLSystem\0\0"
    "on_addButton_clicked\0on_removeButton_clicked\0"
    "on_colorButton_clicked\0on_bgButton_clicked\0"
    "on_transparentCheck_clicked\0"
    "on_comboBox_activated\0i\0on_okButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_renoir__LSystemDialog[] = {

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
       3,    0,   57,    2, 0x08 /* Private */,
       4,    0,   58,    2, 0x08 /* Private */,
       5,    0,   59,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void renoir::LSystemDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LSystemDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLSystem((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->on_removeButton_clicked(); break;
        case 3: _t->on_colorButton_clicked(); break;
        case 4: _t->on_bgButton_clicked(); break;
        case 5: _t->on_transparentCheck_clicked(); break;
        case 6: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_okButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LSystemDialog::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LSystemDialog::sendLSystem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject renoir::LSystemDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_renoir__LSystemDialog.data,
    qt_meta_data_renoir__LSystemDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *renoir::LSystemDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *renoir::LSystemDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_renoir__LSystemDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int renoir::LSystemDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void renoir::LSystemDialog::sendLSystem(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
