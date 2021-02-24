/****************************************************************************
** Meta object code from reading C++ file 'gerente.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RestAu/gerente.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gerente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gerente_t {
    QByteArrayData data[13];
    char stringdata0[232];
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
QT_MOC_LITERAL(12, 227, 4) // "arg2"

    },
    "gerente\0on_lineEdit_textChanged\0\0arg1\0"
    "on_pushButton_clicked\0on_Buscar_clicked\0"
    "on_Editar_clicked\0on_Agregar_clicked\0"
    "on_agregarusuario_clicked\0"
    "on_Guardarcambios_clicked\0"
    "on_vercontra_stateChanged\0"
    "on_lineEdit_cursorPositionChanged\0"
    "arg2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gerente[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    2,   71,    2, 0x08 /* Private */,

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
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gerente::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
