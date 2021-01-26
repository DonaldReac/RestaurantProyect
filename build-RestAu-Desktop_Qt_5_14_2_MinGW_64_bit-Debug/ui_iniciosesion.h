/********************************************************************************
** Form generated from reading UI file 'iniciosesion.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIOSESION_H
#define UI_INICIOSESION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InicioSesion
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *CodigoID;
    QPushButton *pushButton;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_5;
    QWidget *widget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InicioSesion)
    {
        if (InicioSesion->objectName().isEmpty())
            InicioSesion->setObjectName(QString::fromUtf8("InicioSesion"));
        InicioSesion->resize(1024, 482);
        centralwidget = new QWidget(InicioSesion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 531, 423));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #4D505D\n"
"}\n"
"\n"
"QLabel{\n"
"	font:12pt  \"Franklin Gothic Book\";\n"
"	color: white;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color:white;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"	border: 2px solid rgb(77,188,198)\n"
"}\n"
"\n"
"QRadioButton{\n"
"	border: none;\n"
"	color: white;\n"
"	font: 11pt \"Franklin Gothic Book\";\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 111, 51));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 210, 41, 91));
        label_2->setStyleSheet(QString::fromUtf8("Qlabel_2{\n"
"		font: 30pt \"Sunny Winter\";\n"
"		color: white;\n"
"}"));
        CodigoID = new QLineEdit(widget);
        CodigoID->setObjectName(QString::fromUtf8("CodigoID"));
        CodigoID->setGeometry(QRect(170, 240, 241, 41));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 380, 141, 23));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	border: none;\n"
"	font: 11pt \"Franklin Gothic Book\";\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	border: 2px solid rgb(77, 188, 198);\n"
"}"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 100, 47, 13));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 120, 101, 101));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/Iconos/Waiter_Male_Light.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton->setIcon(icon);
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 160, 151, 17));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/Iconos/Waiter_Male_Dark.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_2->setIcon(icon1);
        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(280, 160, 111, 17));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/Iconos/iconfinder_142-man-cook-2_3099395.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_3->setIcon(icon2);
        radioButton_4 = new QRadioButton(widget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(400, 160, 101, 17));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/Iconos/iconfinder_person_3_1376034.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_4->setIcon(icon3);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 120, 101, 31));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(550, 20, 451, 411));
        widget_2->setAutoFillBackground(false);
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/img/Iconos/logo.jpeg);"));
        InicioSesion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InicioSesion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        InicioSesion->setMenuBar(menubar);
        statusbar = new QStatusBar(InicioSesion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InicioSesion->setStatusBar(statusbar);

        retranslateUi(InicioSesion);

        QMetaObject::connectSlotsByName(InicioSesion);
    } // setupUi

    void retranslateUi(QMainWindow *InicioSesion)
    {
        InicioSesion->setWindowTitle(QCoreApplication::translate("InicioSesion", "InicioSesion", nullptr));
        label->setText(QCoreApplication::translate("InicioSesion", "Inicio de sesion", nullptr));
        label_2->setText(QCoreApplication::translate("InicioSesion", "ID:", nullptr));
        pushButton->setText(QCoreApplication::translate("InicioSesion", "Ingresar", nullptr));
        label_4->setText(QString());
        radioButton->setText(QCoreApplication::translate("InicioSesion", "Mesero", nullptr));
        radioButton_2->setText(QCoreApplication::translate("InicioSesion", "Administracion", nullptr));
        radioButton_3->setText(QCoreApplication::translate("InicioSesion", "Cocinero", nullptr));
        radioButton_4->setText(QCoreApplication::translate("InicioSesion", "Gerente", nullptr));
        label_5->setText(QCoreApplication::translate("InicioSesion", "\302\277Quien eres?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InicioSesion: public Ui_InicioSesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIOSESION_H
