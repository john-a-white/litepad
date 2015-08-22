/****************************************************************************
** Meta object code from reading C++ file 'findreplaceform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "findreplaceform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findreplaceform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FindReplaceForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x0a,
      33,   16,   16,   16, 0x0a,
      40,   16,   16,   16, 0x0a,
      51,   16,   16,   16, 0x0a,
      62,   16,   16,   16, 0x0a,
      72,   16,   16,   16, 0x0a,
      85,   16,   16,   16, 0x09,
     110,  105,   16,   16, 0x09,
     138,  134,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FindReplaceForm[] = {
    "FindReplaceForm\0\0down\0find(bool)\0"
    "find()\0findNext()\0findPrev()\0replace()\0"
    "replaceAll()\0textToFindChanged()\0text\0"
    "validateRegExp(QString)\0sel\0"
    "regexpSelected(bool)\0"
};

void FindReplaceForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindReplaceForm *_t = static_cast<FindReplaceForm *>(_o);
        switch (_id) {
        case 0: _t->find((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->find(); break;
        case 2: _t->findNext(); break;
        case 3: _t->findPrev(); break;
        case 4: _t->replace(); break;
        case 5: _t->replaceAll(); break;
        case 6: _t->textToFindChanged(); break;
        case 7: _t->validateRegExp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->regexpSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FindReplaceForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FindReplaceForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FindReplaceForm,
      qt_meta_data_FindReplaceForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindReplaceForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindReplaceForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindReplaceForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindReplaceForm))
        return static_cast<void*>(const_cast< FindReplaceForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int FindReplaceForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
