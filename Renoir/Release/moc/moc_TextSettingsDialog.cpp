/****************************************************************************
** Meta object code from reading C++ file 'TextSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TextSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_renoir__TextSettingsDialog_t {
    QByteArrayData data[16];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_renoir__TextSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_renoir__TextSettingsDialog_t qt_meta_stringdata_renoir__TextSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "renoir::TextSettingsDialog"
QT_MOC_LITERAL(1, 27, 12), // "sendTextData"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "QFont&"
QT_MOC_LITERAL(4, 48, 4), // "font"
QT_MOC_LITERAL(5, 53, 8), // "QString&"
QT_MOC_LITERAL(6, 62, 3), // "txt"
QT_MOC_LITERAL(7, 66, 7), // "QColor&"
QT_MOC_LITERAL(8, 74, 4), // "fill"
QT_MOC_LITERAL(9, 79, 12), // "outlineColor"
QT_MOC_LITERAL(10, 92, 11), // "outlineSize"
QT_MOC_LITERAL(11, 104, 8), // "QPointF&"
QT_MOC_LITERAL(12, 113, 3), // "pos"
QT_MOC_LITERAL(13, 117, 16), // "on_color_clicked"
QT_MOC_LITERAL(14, 134, 18), // "on_outline_clicked"
QT_MOC_LITERAL(15, 153, 19) // "on_okButton_clicked"

    },
    "renoir::TextSettingsDialog\0sendTextData\0"
    "\0QFont&\0font\0QString&\0txt\0QColor&\0"
    "fill\0outlineColor\0outlineSize\0QPointF&\0"
    "pos\0on_color_clicked\0on_outline_clicked\0"
    "on_okButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_renoir__TextSettingsDialog[] = {

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
       1,    6,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   47,    2, 0x08 /* Private */,
      14,    0,   48,    2, 0x08 /* Private */,
      15,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 7, QMetaType::UInt, 0x80000000 | 11,    4,    6,    8,    9,   10,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void renoir::TextSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendTextData((*reinterpret_cast< QFont(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< QColor(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6]))); break;
        case 1: _t->on_color_clicked(); break;
        case 2: _t->on_outline_clicked(); break;
        case 3: _t->on_okButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextSettingsDialog::*)(QFont & , QString & , QColor & , QColor & , unsigned int , QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextSettingsDialog::sendTextData)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject renoir::TextSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_renoir__TextSettingsDialog.data,
    qt_meta_data_renoir__TextSettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *renoir::TextSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *renoir::TextSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_renoir__TextSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int renoir::TextSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void renoir::TextSettingsDialog::sendTextData(QFont & _t1, QString & _t2, QColor & _t3, QColor & _t4, unsigned int _t5, QPointF & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
