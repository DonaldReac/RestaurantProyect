/********************************************************************************
** Form generated from reading UI file 'iniciosesion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InicioSesion
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_4;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QRadioButton *radioButton_3;
    QLabel *label_3;
    QLineEdit *CodigoID;
    QLabel *label_5;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_4;
    QLineEdit *Contrasena;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *page_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InicioSesion)
    {
        if (InicioSesion->objectName().isEmpty())
            InicioSesion->setObjectName(QString::fromUtf8("InicioSesion"));
        InicioSesion->resize(609, 516);
        centralwidget = new QWidget(InicioSesion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 551, 441));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #0B253A\n"
"}\n"
"\n"
"QLabel{\n"
"	font:\"CaviarDreams_BoldItalic\";\n"
"	color:#0B253A;\n"
"\n"
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
"	color:#0B253A;\n"
"font:11pt  \"CaviarDreams_BoldItalic\";\n"
"}\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 100, 47, 13));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 30, 491, 381));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #C0C4CF\n"
"}\n"
""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        radioButton_3 = new QRadioButton(page_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(270, 140, 111, 17));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/Iconos/iconfinder_142-man-cook-2_3099395.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_3->setIcon(icon);
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 250, 101, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        CodigoID = new QLineEdit(page_3);
        CodigoID->setObjectName(QString::fromUtf8("CodigoID"));
        CodigoID->setGeometry(QRect(140, 210, 241, 31));
        CodigoID->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"border: 1px solid #0B253A;;\n"
"    border-radius:10px;\n"
"    padding: 0 8px;"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 100, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"color:#0B253A;\n"
"}"));
        radioButton_2 = new QRadioButton(page_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 140, 151, 17));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/Iconos/Waiter_Male_Dark.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_2->setIcon(icon1);
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 170, 21, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        radioButton = new QRadioButton(page_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 140, 101, 16));
        radioButton->setContextMenuPolicy(Qt::NoContextMenu);
        radioButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/Iconos/Waiter_Male_Light.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton->setIcon(icon2);
        radioButton_4 = new QRadioButton(page_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(390, 140, 101, 17));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/Iconos/iconfinder_person_3_1376034.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_4->setIcon(icon3);
        Contrasena = new QLineEdit(page_3);
        Contrasena->setObjectName(QString::fromUtf8("Contrasena"));
        Contrasena->setGeometry(QRect(140, 280, 241, 31));
        Contrasena->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"border: 1px solid #0B253A;;\n"
"    border-radius:10px;\n"
"    padding: 0 8px;"));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 330, 138, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{;\n"
"background-color: #0B253A;\n"
"    border-style: outset;\n"
"    border-radius: 15px;\n"
"    border-color: #0B253A;\n"
"    min-width: 6em;;\n"
"	font: 12pt \"Franklin Gothic Book\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	border: 2px solid rgb(77, 188, 198);\n"
"}\n"
"\n"
"QPushButton:focus:pressed{ background-color:white ;\n"
"color: black; }\n"
""));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 341, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo.png")));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);
        InicioSesion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InicioSesion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 609, 21));
        InicioSesion->setMenuBar(menubar);
        statusbar = new QStatusBar(InicioSesion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InicioSesion->setStatusBar(statusbar);

        retranslateUi(InicioSesion);

        QMetaObject::connectSlotsByName(InicioSesion);
    } // setupUi

    void retranslateUi(QMainWindow *InicioSesion)
    {
        InicioSesion->setWindowTitle(QApplication::translate("InicioSesion", "InicioSesion", nullptr));
        label_4->setText(QString());
        radioButton_3->setText(QApplication::translate("InicioSesion", "Cocinero", nullptr));
        label_3->setText(QApplication::translate("InicioSesion", " Contrase\303\261a: ", nullptr));
        label_5->setText(QApplication::translate("InicioSesion", "\302\277Quien eres?", nullptr));
        radioButton_2->setText(QApplication::translate("InicioSesion", "Administracion", nullptr));
        label_2->setText(QApplication::translate("InicioSesion", "ID:", nullptr));
        radioButton->setText(QApplication::translate("InicioSesion", "Mesero", nullptr));
        radioButton_4->setText(QApplication::translate("InicioSesion", "Gerente", nullptr));
        pushButton->setText(QApplication::translate("InicioSesion", "Ingresar", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InicioSesion: public Ui_InicioSesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIOSESION_H
