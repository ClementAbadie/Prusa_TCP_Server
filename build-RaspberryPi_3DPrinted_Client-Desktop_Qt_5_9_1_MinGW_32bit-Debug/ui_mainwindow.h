/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOptions;
    QAction *actionAbout;
    QWidget *centralWidget;
    QComboBox *comboBox_Server_IP;
    QPushButton *PushButton_Connect_to_Server;
    QComboBox *comboBox_Server_Port;
    QLabel *Server_IP_PORT_separator;
    QLabel *server_label;
    QLabel *prusa_label;
    QPushButton *Server_Stop;
    QPushButton *Prusa_OFF;
    QPushButton *Prusa_ON;
    QLabel *Server_tmp;
    QPushButton *Server_ReStart;
    QPushButton *Server_Web_Open;
    QPushButton *Server_Rep_Host;
    QPushButton *Web_WebCam_View;
    QLabel *server_label_2;
    QPushButton *Web_WebCam_Restart;
    QPushButton *Web_WebCam_Stop;
    QMenuBar *menuBar;
    QMenu *Options;
    QMenu *menuAide;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(314, 250);
        MainWindow->setMinimumSize(QSize(314, 250));
        MainWindow->setMaximumSize(QSize(314, 250));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox_Server_IP = new QComboBox(centralWidget);
        comboBox_Server_IP->setObjectName(QStringLiteral("comboBox_Server_IP"));
        comboBox_Server_IP->setGeometry(QRect(10, 10, 131, 22));
        comboBox_Server_IP->setEditable(true);
        PushButton_Connect_to_Server = new QPushButton(centralWidget);
        PushButton_Connect_to_Server->setObjectName(QStringLiteral("PushButton_Connect_to_Server"));
        PushButton_Connect_to_Server->setGeometry(QRect(220, 10, 75, 23));
        PushButton_Connect_to_Server->setCheckable(false);
        PushButton_Connect_to_Server->setChecked(false);
        PushButton_Connect_to_Server->setAutoDefault(true);
        PushButton_Connect_to_Server->setFlat(false);
        comboBox_Server_Port = new QComboBox(centralWidget);
        comboBox_Server_Port->setObjectName(QStringLiteral("comboBox_Server_Port"));
        comboBox_Server_Port->setGeometry(QRect(150, 10, 61, 22));
        comboBox_Server_Port->setEditable(true);
        Server_IP_PORT_separator = new QLabel(centralWidget);
        Server_IP_PORT_separator->setObjectName(QStringLiteral("Server_IP_PORT_separator"));
        Server_IP_PORT_separator->setGeometry(QRect(140, 10, 16, 21));
        server_label = new QLabel(centralWidget);
        server_label->setObjectName(QStringLiteral("server_label"));
        server_label->setGeometry(QRect(10, 90, 61, 31));
        server_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        prusa_label = new QLabel(centralWidget);
        prusa_label->setObjectName(QStringLiteral("prusa_label"));
        prusa_label->setGeometry(QRect(10, 50, 61, 31));
        prusa_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Server_Stop = new QPushButton(centralWidget);
        Server_Stop->setObjectName(QStringLiteral("Server_Stop"));
        Server_Stop->setEnabled(false);
        Server_Stop->setGeometry(QRect(210, 90, 41, 31));
        Prusa_OFF = new QPushButton(centralWidget);
        Prusa_OFF->setObjectName(QStringLiteral("Prusa_OFF"));
        Prusa_OFF->setEnabled(false);
        Prusa_OFF->setGeometry(QRect(170, 50, 81, 31));
        Prusa_ON = new QPushButton(centralWidget);
        Prusa_ON->setObjectName(QStringLiteral("Prusa_ON"));
        Prusa_ON->setEnabled(false);
        Prusa_ON->setGeometry(QRect(80, 50, 81, 31));
        Server_tmp = new QLabel(centralWidget);
        Server_tmp->setObjectName(QStringLiteral("Server_tmp"));
        Server_tmp->setGeometry(QRect(260, 90, 41, 31));
        Server_ReStart = new QPushButton(centralWidget);
        Server_ReStart->setObjectName(QStringLiteral("Server_ReStart"));
        Server_ReStart->setEnabled(false);
        Server_ReStart->setGeometry(QRect(140, 90, 61, 31));
        Server_Web_Open = new QPushButton(centralWidget);
        Server_Web_Open->setObjectName(QStringLiteral("Server_Web_Open"));
        Server_Web_Open->setEnabled(true);
        Server_Web_Open->setGeometry(QRect(80, 90, 51, 31));
        Server_Rep_Host = new QPushButton(centralWidget);
        Server_Rep_Host->setObjectName(QStringLiteral("Server_Rep_Host"));
        Server_Rep_Host->setEnabled(true);
        Server_Rep_Host->setGeometry(QRect(80, 170, 171, 31));
        Web_WebCam_View = new QPushButton(centralWidget);
        Web_WebCam_View->setObjectName(QStringLiteral("Web_WebCam_View"));
        Web_WebCam_View->setEnabled(true);
        Web_WebCam_View->setGeometry(QRect(80, 130, 51, 31));
        server_label_2 = new QLabel(centralWidget);
        server_label_2->setObjectName(QStringLiteral("server_label_2"));
        server_label_2->setGeometry(QRect(10, 130, 61, 31));
        server_label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Web_WebCam_Restart = new QPushButton(centralWidget);
        Web_WebCam_Restart->setObjectName(QStringLiteral("Web_WebCam_Restart"));
        Web_WebCam_Restart->setEnabled(false);
        Web_WebCam_Restart->setGeometry(QRect(140, 130, 61, 31));
        Web_WebCam_Stop = new QPushButton(centralWidget);
        Web_WebCam_Stop->setObjectName(QStringLiteral("Web_WebCam_Stop"));
        Web_WebCam_Stop->setEnabled(false);
        Web_WebCam_Stop->setGeometry(QRect(210, 130, 41, 31));
        MainWindow->setCentralWidget(centralWidget);
        comboBox_Server_IP->raise();
        PushButton_Connect_to_Server->raise();
        comboBox_Server_Port->raise();
        Server_IP_PORT_separator->raise();
        server_label->raise();
        prusa_label->raise();
        Server_Stop->raise();
        Prusa_OFF->raise();
        Prusa_ON->raise();
        Server_ReStart->raise();
        Server_Web_Open->raise();
        Server_Rep_Host->raise();
        Web_WebCam_View->raise();
        server_label_2->raise();
        Web_WebCam_Restart->raise();
        Web_WebCam_Stop->raise();
        Server_tmp->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 314, 20));
        Options = new QMenu(menuBar);
        Options->setObjectName(QStringLiteral("Options"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(Options->menuAction());
        menuBar->addAction(menuAide->menuAction());
        Options->addAction(actionOptions);
        menuAide->addAction(actionAbout);

        retranslateUi(MainWindow);

        PushButton_Connect_to_Server->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Raspberry Pi - 3D Printer - Client", Q_NULLPTR));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", Q_NULLPTR));
        comboBox_Server_IP->setCurrentText(QApplication::translate("MainWindow", "prusabadie.ddns.net", Q_NULLPTR));
        PushButton_Connect_to_Server->setText(QApplication::translate("MainWindow", "Connection", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        PushButton_Connect_to_Server->setShortcut(QApplication::translate("MainWindow", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        comboBox_Server_Port->setCurrentText(QApplication::translate("MainWindow", "51717", Q_NULLPTR));
        Server_IP_PORT_separator->setText(QApplication::translate("MainWindow", " :", Q_NULLPTR));
        server_label->setText(QApplication::translate("MainWindow", "Server :", Q_NULLPTR));
        prusa_label->setText(QApplication::translate("MainWindow", "3D Printer :", Q_NULLPTR));
        Server_Stop->setText(QApplication::translate("MainWindow", "STOP", Q_NULLPTR));
        Prusa_OFF->setText(QApplication::translate("MainWindow", "Turn OFF", Q_NULLPTR));
        Prusa_ON->setText(QApplication::translate("MainWindow", "Turn ON", Q_NULLPTR));
        Server_tmp->setText(QString());
        Server_ReStart->setText(QApplication::translate("MainWindow", "REBOOT", Q_NULLPTR));
        Server_Web_Open->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        Server_Rep_Host->setText(QApplication::translate("MainWindow", "Open Repetier Host", Q_NULLPTR));
        Web_WebCam_View->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        server_label_2->setText(QApplication::translate("MainWindow", "WebCam :", Q_NULLPTR));
        Web_WebCam_Restart->setText(QApplication::translate("MainWindow", "(Re)Start", Q_NULLPTR));
        Web_WebCam_Stop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        Options->setTitle(QApplication::translate("MainWindow", "Server", Q_NULLPTR));
        menuAide->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
