/****************************************************************************
** Meta object code from reading C++ file 'gerente.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RestAu/gerente.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gerente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gerente_t {
    QByteArrayData data[18];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gerente_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gerente_t qt_meta_stringdata_gerente = {
    {
QT_MOC_LITERAL(0, 0, 7), // "gerente"
QT_MOC_LITERAL(1, 8, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "arg1"
QT_MOC_LITERAL(4, 38, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 60, 17), // "on_Buscar_clicked"
QT_MOC_LITERAL(6, 78, 17), // "on_Editar_clicked"
QT_MOC_LITERAL(7, 96, 18), // "on_Agregar_clicked"
QT_MOC_LITERAL(8, 115, 25), // "on_agregarusuario_clicked"
QT_MOC_LITERAL(9, 141, 25), // "on_Guardarcambios_clicked"
QT_MOC_LITERAL(10, 167, 25), // "on_vercontra_stateChanged"
QT_MOC_LITERAL(11, 193, 33), // "on_lineEdit_cursorPositionCha..."
QT_MOC_LITERAL(12, 227, 4), // "arg2"
QT_MOC_LITERAL(13, 232, 21), // "on_Inventario_clicked"
QT_MOC_LITERAL(14, 254, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(15, 278, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(16, 302, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(17, 326, 23) // "on_pushButton_5_clicked"

    },
    "gerente\0on_lineEdit_textChanged\0\0arg1\0"
    "on_pushButton_clicked\0on_Buscar_clicked\0"
    "on_Editar_clicked\0on_Agregar_clicked\0"
    "on_agregarusuario_clicked\0"
    "on_Guardarcambios_clicked\0"
    "on_vercontra_stateChanged\0"
    "on_lineEdit_cursorPositionChanged\0"
    "arg2\0on_Inventario_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gerente[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    0,   87,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    2,   96,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gerente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gerente *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_Buscar_clicked(); break;
        case 3: _t->on_Editar_clicked(); break;
        case 4: _t->on_Agregar_clicked(); break;
        case 5: _t->on_agregarusuario_clicked(); break;
        case 6: _t->on_Guardarcambios_clicked(); break;
        case 7: _t->on_vercontra_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        //case 8: _t->on_lineEdit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_Inventario_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->on_pushButton_4_clicked(); break;
        case 13: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gerente::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_gerente.data,
    qt_meta_data_gerente,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gerente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gerente::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gerente.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gerente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
