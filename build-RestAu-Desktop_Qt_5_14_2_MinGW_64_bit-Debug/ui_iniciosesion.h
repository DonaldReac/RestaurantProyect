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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *page;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *Contrasena;
    QLabel *label_5;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *CodigoID;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *Mesero;
    QRadioButton *Anfitrion;
    QRadioButton *Cocinero;
    QRadioButton *Gerente;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InicioSesion)
    {
        if (InicioSesion->objectName().isEmpty())
            InicioSesion->setObjectName(QString::fromUtf8("InicioSesion"));
        InicioSesion->resize(554, 482);
        centralwidget = new QWidget(InicioSesion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 12, 531, 441));
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
"\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 100, 47, 13));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 491, 381));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #C0C4CF;\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 250, 101, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 180, 21, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        Contrasena = new QLineEdit(page);
        Contrasena->setObjectName(QString::fromUtf8("Contrasena"));
        Contrasena->setGeometry(QRect(150, 270, 241, 31));
        Contrasena->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"border: 1px solid #0B253A;;\n"
"    border-radius:10px;\n"
"    padding: 0 8px;"));
        Contrasena->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 90, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"color:#0B253A;\n"
"}"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, -10, 111, 51));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 330, 126, 31));
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
        CodigoID = new QLineEdit(page);
        CodigoID->setObjectName(QString::fromUtf8("CodigoID"));
        CodigoID->setGeometry(QRect(150, 210, 241, 31));
        CodigoID->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"font:12pt  \"CaviarDreams_BoldItalic\";\n"
"border: 1px solid #0B253A;;\n"
"    border-radius:10px;\n"
"    padding: 0 8px;"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 10, 331, 71));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 443, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Mesero = new QRadioButton(layoutWidget);
        Mesero->setObjectName(QString::fromUtf8("Mesero"));
        Mesero->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/Iconos/Waiter_Male_Light.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/img/Iconos/Waiter_Male_Light.png"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/img/Iconos/Waiter_Male_Light.png"), QSize(), QIcon::Selected, QIcon::Off);
        Mesero->setIcon(icon);
        Mesero->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(Mesero);

        Anfitrion = new QRadioButton(layoutWidget);
        Anfitrion->setObjectName(QString::fromUtf8("Anfitrion"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/Iconos/Waiter_Male_Dark.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/img/Iconos/Waiter_Male_Dark.png"), QSize(), QIcon::Active, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/img/Iconos/Waiter_Male_Dark.png"), QSize(), QIcon::Selected, QIcon::On);
        Anfitrion->setIcon(icon1);
        Anfitrion->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(Anfitrion);

        Cocinero = new QRadioButton(layoutWidget);
        Cocinero->setObjectName(QString::fromUtf8("Cocinero"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/Iconos/iconfinder_142-man-cook-2_3099395.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/img/Iconos/iconfinder_142-man-cook-2_3099395.png"), QSize(), QIcon::Active, QIcon::On);
        icon2.addFile(QString::fromUtf8(":/img/Iconos/iconfinder_142-man-cook-2_3099395.png"), QSize(), QIcon::Selected, QIcon::On);
        Cocinero->setIcon(icon2);
        Cocinero->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(Cocinero);

        Gerente = new QRadioButton(layoutWidget);
        Gerente->setObjectName(QString::fromUtf8("Gerente"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/Iconos/iconfinder_person_3_1376034.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/img/Iconos/iconfinder_person_3_1376034.png"), QSize(), QIcon::Active, QIcon::On);
        icon3.addFile(QString::fromUtf8(":/img/Iconos/iconfinder_person_3_1376034.png"), QSize(), QIcon::Selected, QIcon::On);
        Gerente->setIcon(icon3);
        Gerente->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(Gerente);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        InicioSesion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InicioSesion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 554, 21));
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
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("InicioSesion", " Contrase\303\261a: ", nullptr));
        label_2->setText(QCoreApplication::translate("InicioSesion", "ID:", nullptr));
        label_5->setText(QCoreApplication::translate("InicioSesion", "\302\277Quien eres?", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("InicioSesion", "Ingresar", nullptr));
        label_6->setText(QString());
        Mesero->setText(QCoreApplication::translate("InicioSesion", "Mesero", nullptr));
        Anfitrion->setText(QCoreApplication::translate("InicioSesion", "Anfitrion", nullptr));
        Cocinero->setText(QCoreApplication::translate("InicioSesion", "Cocinero", nullptr));
        Gerente->setText(QCoreApplication::translate("InicioSesion", "Gerente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InicioSesion: public Ui_InicioSesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIOSESION_H
