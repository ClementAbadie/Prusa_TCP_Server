/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Prusa_TCP_Client/Prusa_TCP_Client/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[490];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "closed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 39), // "on_PushButton_Connect_to_Serv..."
QT_MOC_LITERAL(4, 59, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(5, 84, 11), // "onConnected"
QT_MOC_LITERAL(6, 96, 14), // "onDisconnected"
QT_MOC_LITERAL(7, 111, 21), // "onTextMessageReceived"
QT_MOC_LITERAL(8, 133, 7), // "message"
QT_MOC_LITERAL(9, 141, 9), // "readyRead"
QT_MOC_LITERAL(10, 151, 11), // "tcp_timeout"
QT_MOC_LITERAL(11, 163, 19), // "on_Prusa_ON_clicked"
QT_MOC_LITERAL(12, 183, 20), // "on_Prusa_OFF_clicked"
QT_MOC_LITERAL(13, 204, 22), // "on_Server_Stop_clicked"
QT_MOC_LITERAL(14, 227, 25), // "on_Server_ReStart_clicked"
QT_MOC_LITERAL(15, 253, 29), // "request_to_server_temperature"
QT_MOC_LITERAL(16, 283, 26), // "on_actionOptions_triggered"
QT_MOC_LITERAL(17, 310, 20), // "web_Open_WebCam_View"
QT_MOC_LITERAL(18, 331, 20), // "web_Open_Server_View"
QT_MOC_LITERAL(19, 352, 26), // "on_Server_Web_Open_clicked"
QT_MOC_LITERAL(20, 379, 26), // "on_Server_Rep_Host_clicked"
QT_MOC_LITERAL(21, 406, 26), // "on_Web_WebCam_View_clicked"
QT_MOC_LITERAL(22, 433, 29), // "on_Web_WebCam_Restart_clicked"
QT_MOC_LITERAL(23, 463, 26) // "on_Web_WebCam_Stop_clicked"

    },
    "MainWindow\0closed\0\0"
    "on_PushButton_Connect_to_Server_clicked\0"
    "on_actionAbout_triggered\0onConnected\0"
    "onDisconnected\0onTextMessageReceived\0"
    "message\0readyRead\0tcp_timeout\0"
    "on_Prusa_ON_clicked\0on_Prusa_OFF_clicked\0"
    "on_Server_Stop_clicked\0on_Server_ReStart_clicked\0"
    "request_to_server_temperature\0"
    "on_actionOptions_triggered\0"
    "web_Open_WebCam_View\0web_Open_Server_View\0"
    "on_Server_Web_Open_clicked\0"
    "on_Server_Rep_Host_clicked\0"
    "on_Web_WebCam_View_clicked\0"
    "on_Web_WebCam_Restart_clicked\0"
    "on_Web_WebCam_Stop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  120,    2, 0x08 /* Private */,
       4,    0,  121,    2, 0x08 /* Private */,
       5,    0,  122,    2, 0x08 /* Private */,
       6,    0,  123,    2, 0x08 /* Private */,
       7,    1,  124,    2, 0x08 /* Private */,
       9,    0,  127,    2, 0x08 /* Private */,
      10,    0,  128,    2, 0x08 /* Private */,
      11,    0,  129,    2, 0x08 /* Private */,
      12,    0,  130,    2, 0x08 /* Private */,
      13,    0,  131,    2, 0x08 /* Private */,
      14,    0,  132,    2, 0x08 /* Private */,
      15,    0,  133,    2, 0x08 /* Private */,
      16,    0,  134,    2, 0x08 /* Private */,
      17,    0,  135,    2, 0x08 /* Private */,
      18,    0,  136,    2, 0x08 /* Private */,
      19,    0,  137,    2, 0x08 /* Private */,
      20,    0,  138,    2, 0x08 /* Private */,
      21,    0,  139,    2, 0x08 /* Private */,
      22,    0,  140,    2, 0x08 /* Private */,
      23,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_PushButton_Connect_to_Server_clicked(); break;
        case 2: _t->on_actionAbout_triggered(); break;
        case 3: _t->onConnected(); break;
        case 4: _t->onDisconnected(); break;
        case 5: _t->onTextMessageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->readyRead(); break;
        case 7: _t->tcp_timeout(); break;
        case 8: _t->on_Prusa_ON_clicked(); break;
        case 9: _t->on_Prusa_OFF_clicked(); break;
        case 10: _t->on_Server_Stop_clicked(); break;
        case 11: _t->on_Server_ReStart_clicked(); break;
        case 12: _t->request_to_server_temperature(); break;
        case 13: _t->on_actionOptions_triggered(); break;
        case 14: _t->web_Open_WebCam_View(); break;
        case 15: _t->web_Open_Server_View(); break;
        case 16: _t->on_Server_Web_Open_clicked(); break;
        case 17: _t->on_Server_Rep_Host_clicked(); break;
        case 18: _t->on_Web_WebCam_View_clicked(); break;
        case 19: _t->on_Web_WebCam_Restart_clicked(); break;
        case 20: _t->on_Web_WebCam_Stop_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
