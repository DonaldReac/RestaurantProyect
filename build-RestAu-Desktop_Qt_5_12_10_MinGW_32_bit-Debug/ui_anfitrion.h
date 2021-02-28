/********************************************************************************
** Form generated from reading UI file 'anfitrion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANFITRION_H
#define UI_ANFITRION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Anfitrion
{
public:
    QStackedWidget *stackedWidget;
    QWidget *Menu;
    QLabel *label;
    QPushButton *salida;
    QPushButton *Disponibilidad_Mesas;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *Inicio_Anfitrion;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Mesa_1;
    QPushButton *Mesa_2;
    QPushButton *Mesa_3;
    QPushButton *Mesa_6;
    QPushButton *Mesa_5;
    QPushButton *Mesa_4;
    QPushButton *Mesa_8;
    QPushButton *Mesa_7;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget;
    QLineEdit *lineEdit;
    QLabel *label_14;
    QLineEdit *lineEdit_2;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_3;
    QWidget *Mesas_Disponibles;

    void setupUi(QWidget *Anfitrion)
    {
        if (Anfitrion->objectName().isEmpty())
            Anfitrion->setObjectName(QString::fromUtf8("Anfitrion"));
        Anfitrion->resize(726, 463);
        stackedWidget = new QStackedWidget(Anfitrion);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 151, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #C0C4CF;\n"
"border-right: 1px solid;\n"
"\n"
"}\n"
""));
        Menu = new QWidget();
        Menu->setObjectName(QString::fromUtf8("Menu"));
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 151, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        label->setScaledContents(true);
        salida = new QPushButton(Menu);
        salida->setObjectName(QString::fromUtf8("salida"));
        salida->setGeometry(QRect(0, 410, 151, 61));
        salida->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border:0px solid gray;\n"
"  padding: 0 8px;\n"
"  background: yellow;\n"
"background-color: rgba(216, 223, 233,0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(223, 138, 19);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Iconos/salida.png"), QSize(), QIcon::Normal, QIcon::Off);
        salida->setIcon(icon);
        salida->setIconSize(QSize(30, 30));
        Disponibilidad_Mesas = new QPushButton(Menu);
        Disponibilidad_Mesas->setObjectName(QString::fromUtf8("Disponibilidad_Mesas"));
        Disponibilidad_Mesas->setGeometry(QRect(0, 140, 151, 51));
        QFont font;
        font.setPointSize(10);
        Disponibilidad_Mesas->setFont(font);
        Disponibilidad_Mesas->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border:0px solid gray;\n"
"  padding: 0 8px;\n"
"  background: yellow;\n"
"background-color: rgba(216, 223, 233,0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(223, 138, 19);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Iconos/reserva-de-mesa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Disponibilidad_Mesas->setIcon(icon1);
        Disponibilidad_Mesas->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(Menu);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(Anfitrion);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(151, 0, 601, 481));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #DFE3E5;\n"
"border-right: 1px solid;\n"
"\n"
"}"));
        Inicio_Anfitrion = new QWidget();
        Inicio_Anfitrion->setObjectName(QString::fromUtf8("Inicio_Anfitrion"));
        label_2 = new QLabel(Inicio_Anfitrion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 330, 251, 161));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/platillos-png.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Inicio_Anfitrion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(2, 0, 581, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SuckerPunch"));
        font1.setPointSize(40);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:#8E5329;"));
        label_3->setTextFormat(Qt::AutoText);
        Mesa_1 = new QPushButton(Inicio_Anfitrion);
        Mesa_1->setObjectName(QString::fromUtf8("Mesa_1"));
        Mesa_1->setGeometry(QRect(10, 130, 81, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("CreativeBlock BB"));
        font2.setPointSize(24);
        Mesa_1->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Iconos/mesa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Mesa_1->setIcon(icon2);
        Mesa_1->setIconSize(QSize(50, 50));
        Mesa_2 = new QPushButton(Inicio_Anfitrion);
        Mesa_2->setObjectName(QString::fromUtf8("Mesa_2"));
        Mesa_2->setGeometry(QRect(10, 210, 81, 61));
        Mesa_2->setFont(font2);
        Mesa_2->setIcon(icon2);
        Mesa_2->setIconSize(QSize(50, 50));
        Mesa_3 = new QPushButton(Inicio_Anfitrion);
        Mesa_3->setObjectName(QString::fromUtf8("Mesa_3"));
        Mesa_3->setGeometry(QRect(10, 290, 81, 61));
        Mesa_3->setFont(font2);
        Mesa_3->setIcon(icon2);
        Mesa_3->setIconSize(QSize(50, 50));
        Mesa_6 = new QPushButton(Inicio_Anfitrion);
        Mesa_6->setObjectName(QString::fromUtf8("Mesa_6"));
        Mesa_6->setGeometry(QRect(160, 210, 81, 61));
        Mesa_6->setFont(font2);
        Mesa_6->setIcon(icon2);
        Mesa_6->setIconSize(QSize(50, 50));
        Mesa_5 = new QPushButton(Inicio_Anfitrion);
        Mesa_5->setObjectName(QString::fromUtf8("Mesa_5"));
        Mesa_5->setGeometry(QRect(160, 130, 81, 61));
        Mesa_5->setFont(font2);
        Mesa_5->setIcon(icon2);
        Mesa_5->setIconSize(QSize(50, 50));
        Mesa_4 = new QPushButton(Inicio_Anfitrion);
        Mesa_4->setObjectName(QString::fromUtf8("Mesa_4"));
        Mesa_4->setGeometry(QRect(10, 370, 81, 61));
        Mesa_4->setFont(font2);
        Mesa_4->setIcon(icon2);
        Mesa_4->setIconSize(QSize(50, 50));
        Mesa_8 = new QPushButton(Inicio_Anfitrion);
        Mesa_8->setObjectName(QString::fromUtf8("Mesa_8"));
        Mesa_8->setGeometry(QRect(160, 370, 81, 61));
        Mesa_8->setFont(font2);
        Mesa_8->setIcon(icon2);
        Mesa_8->setIconSize(QSize(50, 50));
        Mesa_7 = new QPushButton(Inicio_Anfitrion);
        Mesa_7->setObjectName(QString::fromUtf8("Mesa_7"));
        Mesa_7->setGeometry(QRect(160, 290, 81, 61));
        Mesa_7->setFont(font2);
        Mesa_7->setIcon(icon2);
        Mesa_7->setIconSize(QSize(50, 50));
        label_4 = new QLabel(Inicio_Anfitrion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 120, 271, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("augie"));
        font3.setPointSize(14);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: #FF0000;"));
        label_5 = new QLabel(Inicio_Anfitrion);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 160, 241, 51));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: #008000;"));
        widget = new QWidget(Inicio_Anfitrion);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(290, 220, 261, 171));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"}"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 10, 171, 41));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 20, 31, 21));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"background-color: rgba(255, 255, 255,50);\n"
"border: none; \n"
"border-radius: 10px;\n"
"color:black;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 60, 171, 41));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 70, 61, 21));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"background-color: rgba(255, 255, 255,50);\n"
"border: none; \n"
"border-radius: 10px;\n"
"color:black;\n"
"}\n"
""));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 120, 61, 21));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"background-color: rgba(255, 255, 255,50);\n"
"border: none; \n"
"border-radius: 10px;\n"
"color:black;\n"
"}\n"
""));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 110, 171, 41));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(Inicio_Anfitrion);
        Mesas_Disponibles = new QWidget();
        Mesas_Disponibles->setObjectName(QString::fromUtf8("Mesas_Disponibles"));
        stackedWidget_2->addWidget(Mesas_Disponibles);

        retranslateUi(Anfitrion);

        QMetaObject::connectSlotsByName(Anfitrion);
    } // setupUi

    void retranslateUi(QWidget *Anfitrion)
    {
        Anfitrion->setWindowTitle(QApplication::translate("Anfitrion", "Form", nullptr));
        label->setText(QString());
        salida->setText(QString());
        Disponibilidad_Mesas->setText(QApplication::translate("Anfitrion", "Disponibilidad", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Anfitrion", "Bienvenido Anfitri\303\263n", nullptr));
        Mesa_1->setText(QApplication::translate("Anfitrion", "1", nullptr));
        Mesa_2->setText(QApplication::translate("Anfitrion", "2", nullptr));
        Mesa_3->setText(QApplication::translate("Anfitrion", "3", nullptr));
        Mesa_6->setText(QApplication::translate("Anfitrion", "6", nullptr));
        Mesa_5->setText(QApplication::translate("Anfitrion", "5", nullptr));
        Mesa_4->setText(QApplication::translate("Anfitrion", "4", nullptr));
        Mesa_8->setText(QApplication::translate("Anfitrion", "8", nullptr));
        Mesa_7->setText(QApplication::translate("Anfitrion", "7", nullptr));
        label_4->setText(QApplication::translate("Anfitrion", "NO DISPONIBLE", nullptr));
        label_5->setText(QApplication::translate("Anfitrion", "DISPONIBLE", nullptr));
        label_14->setText(QApplication::translate("Anfitrion", "ID:", nullptr));
        lineEdit_2->setText(QString());
        label_15->setText(QApplication::translate("Anfitrion", "Nombre:", nullptr));
        label_16->setText(QApplication::translate("Anfitrion", "Apellido:", nullptr));
        lineEdit_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Anfitrion: public Ui_Anfitrion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANFITRION_H
