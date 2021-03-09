/****************************************************************************
** Meta object code from reading C++ file 'mesero.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RestAu/mesero.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mesero.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mesero_t {
    QByteArrayData data[12];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mesero_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mesero_t qt_meta_stringdata_mesero = {
    {
QT_MOC_LITERAL(0, 0, 6), // "mesero"
QT_MOC_LITERAL(1, 7, 14), // "onComboChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "text"
QT_MOC_LITERAL(4, 28, 16), // "on_Salir_clicked"
QT_MOC_LITERAL(5, 45, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(6, 69, 4), // "arg1"
QT_MOC_LITERAL(7, 74, 17), // "on_Buscar_clicked"
QT_MOC_LITERAL(8, 92, 22), // "on_NuevoPedido_clicked"
QT_MOC_LITERAL(9, 115, 22), // "on_CrearPedido_clicked"
QT_MOC_LITERAL(10, 138, 35), // "on_listapedido_itemSelectionC..."
QT_MOC_LITERAL(11, 174, 24) // "on_NuevoPedido_2_clicked"

    },
    "mesero\0onComboChanged\0\0text\0"
    "on_Salir_clicked\0on_lineEdit_textChanged\0"
    "arg1\0on_Buscar_clicked\0on_NuevoPedido_clicked\0"
    "on_CrearPedido_clicked\0"
    "on_listapedido_itemSelectionChanged\0"
    "on_NuevoPedido_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mesero[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mesero::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mesero *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onComboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_Salir_clicked(); break;
        case 2: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_Buscar_clicked(); break;
        case 4: _t->on_NuevoPedido_clicked(); break;
        case 5: _t->on_CrearPedido_clicked(); break;
        case 6: _t->on_listapedido_itemSelectionChanged(); break;
        case 7: _t->on_NuevoPedido_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mesero::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_mesero.data,
    qt_meta_data_mesero,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mesero::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mesero::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mesero.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mesero::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
