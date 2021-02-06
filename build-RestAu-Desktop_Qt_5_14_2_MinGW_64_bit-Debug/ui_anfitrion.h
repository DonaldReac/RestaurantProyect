/********************************************************************************
** Form generated from reading UI file 'anfitrion.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANFITRION_H
#define UI_ANFITRION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
        label->setGeometry(QRect(10, 20, 151, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        label->setScaledContents(true);
        salida = new QPushButton(Menu);
        salida->setObjectName(QString::fromUtf8("salida"));
        salida->setGeometry(QRect(0, 410, 151, 51));
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
        stackedWidget_2->setGeometry(QRect(161, 0, 591, 481));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #DFE3E5;\n"
"border-right: 1px solid;\n"
"\n"
"}"));
        Inicio_Anfitrion = new QWidget();
        Inicio_Anfitrion->setObjectName(QString::fromUtf8("Inicio_Anfitrion"));
        label_2 = new QLabel(Inicio_Anfitrion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 230, 411, 261));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/platillos-png.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Inicio_Anfitrion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(2, 0, 571, 61));
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
        label_4->setGeometry(QRect(400, 120, 171, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("augie"));
        font3.setPointSize(14);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: #FF0000;"));
        label_5 = new QLabel(Inicio_Anfitrion);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 170, 171, 51));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: #008000;"));
        stackedWidget_2->addWidget(Inicio_Anfitrion);
        Mesas_Disponibles = new QWidget();
        Mesas_Disponibles->setObjectName(QString::fromUtf8("Mesas_Disponibles"));
        stackedWidget_2->addWidget(Mesas_Disponibles);

        retranslateUi(Anfitrion);

        QMetaObject::connectSlotsByName(Anfitrion);
    } // setupUi

    void retranslateUi(QWidget *Anfitrion)
    {
        Anfitrion->setWindowTitle(QCoreApplication::translate("Anfitrion", "Form", nullptr));
        label->setText(QString());
        salida->setText(QString());
        Disponibilidad_Mesas->setText(QCoreApplication::translate("Anfitrion", "Disponibilidad", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Anfitrion", "Bienvenido Anfitri\303\263n", nullptr));
        Mesa_1->setText(QCoreApplication::translate("Anfitrion", "1", nullptr));
        Mesa_2->setText(QCoreApplication::translate("Anfitrion", "2", nullptr));
        Mesa_3->setText(QCoreApplication::translate("Anfitrion", "3", nullptr));
        Mesa_6->setText(QCoreApplication::translate("Anfitrion", "6", nullptr));
        Mesa_5->setText(QCoreApplication::translate("Anfitrion", "5", nullptr));
        Mesa_4->setText(QCoreApplication::translate("Anfitrion", "4", nullptr));
        Mesa_8->setText(QCoreApplication::translate("Anfitrion", "8", nullptr));
        Mesa_7->setText(QCoreApplication::translate("Anfitrion", "7", nullptr));
        label_4->setText(QCoreApplication::translate("Anfitrion", "NO DISPONIBLE", nullptr));
        label_5->setText(QCoreApplication::translate("Anfitrion", "DISPONIBLE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Anfitrion: public Ui_Anfitrion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANFITRION_H
