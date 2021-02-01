/********************************************************************************
** Form generated from reading UI file 'anfitrion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANFITRION_H
#define UI_ANFITRION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            Anfitrion->setObjectName(QStringLiteral("Anfitrion"));
        Anfitrion->resize(726, 463);
        stackedWidget = new QStackedWidget(Anfitrion);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 161, 481));
        stackedWidget->setStyleSheet(QLatin1String("QWidget{\n"
"background-color: #C0C4CF;\n"
"border-right: 1px solid;\n"
"\n"
"}\n"
""));
        Menu = new QWidget();
        Menu->setObjectName(QStringLiteral("Menu"));
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 151, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        label->setScaledContents(true);
        salida = new QPushButton(Menu);
        salida->setObjectName(QStringLiteral("salida"));
        salida->setGeometry(QRect(0, 410, 151, 51));
        salida->setStyleSheet(QLatin1String("QPushButton\n"
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
        icon.addFile(QStringLiteral(":/img/Iconos/salida.png"), QSize(), QIcon::Normal, QIcon::Off);
        salida->setIcon(icon);
        salida->setIconSize(QSize(30, 30));
        Disponibilidad_Mesas = new QPushButton(Menu);
        Disponibilidad_Mesas->setObjectName(QStringLiteral("Disponibilidad_Mesas"));
        Disponibilidad_Mesas->setGeometry(QRect(0, 140, 151, 51));
        QFont font;
        font.setPointSize(10);
        Disponibilidad_Mesas->setFont(font);
        Disponibilidad_Mesas->setStyleSheet(QLatin1String("QPushButton\n"
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
        icon1.addFile(QStringLiteral(":/img/Iconos/reserva-de-mesa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Disponibilidad_Mesas->setIcon(icon1);
        Disponibilidad_Mesas->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(Menu);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(Anfitrion);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(161, 0, 591, 481));
        stackedWidget_2->setStyleSheet(QLatin1String("QWidget{\n"
"background-color: #DFE3E5;\n"
"border-right: 1px solid;\n"
"\n"
"}"));
        Inicio_Anfitrion = new QWidget();
        Inicio_Anfitrion->setObjectName(QStringLiteral("Inicio_Anfitrion"));
        label_2 = new QLabel(Inicio_Anfitrion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 230, 411, 261));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/platillos-png.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Inicio_Anfitrion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(2, 0, 571, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("SuckerPunch"));
        font1.setPointSize(40);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:#8E5329;"));
        label_3->setTextFormat(Qt::AutoText);
        Mesa_1 = new QPushButton(Inicio_Anfitrion);
        Mesa_1->setObjectName(QStringLiteral("Mesa_1"));
        Mesa_1->setGeometry(QRect(10, 130, 81, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("CreativeBlock BB"));
        font2.setPointSize(24);
        Mesa_1->setFont(font2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Iconos/mesa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Mesa_1->setIcon(icon2);
        Mesa_1->setIconSize(QSize(50, 50));
        Mesa_2 = new QPushButton(Inicio_Anfitrion);
        Mesa_2->setObjectName(QStringLiteral("Mesa_2"));
        Mesa_2->setGeometry(QRect(10, 210, 81, 61));
        Mesa_2->setFont(font2);
        Mesa_2->setIcon(icon2);
        Mesa_2->setIconSize(QSize(50, 50));
        Mesa_3 = new QPushButton(Inicio_Anfitrion);
        Mesa_3->setObjectName(QStringLiteral("Mesa_3"));
        Mesa_3->setGeometry(QRect(10, 290, 81, 61));
        Mesa_3->setFont(font2);
        Mesa_3->setIcon(icon2);
        Mesa_3->setIconSize(QSize(50, 50));
        Mesa_6 = new QPushButton(Inicio_Anfitrion);
        Mesa_6->setObjectName(QStringLiteral("Mesa_6"));
        Mesa_6->setGeometry(QRect(160, 210, 81, 61));
        Mesa_6->setFont(font2);
        Mesa_6->setIcon(icon2);
        Mesa_6->setIconSize(QSize(50, 50));
        Mesa_5 = new QPushButton(Inicio_Anfitrion);
        Mesa_5->setObjectName(QStringLiteral("Mesa_5"));
        Mesa_5->setGeometry(QRect(160, 130, 81, 61));
        Mesa_5->setFont(font2);
        Mesa_5->setIcon(icon2);
        Mesa_5->setIconSize(QSize(50, 50));
        Mesa_4 = new QPushButton(Inicio_Anfitrion);
        Mesa_4->setObjectName(QStringLiteral("Mesa_4"));
        Mesa_4->setGeometry(QRect(10, 370, 81, 61));
        Mesa_4->setFont(font2);
        Mesa_4->setIcon(icon2);
        Mesa_4->setIconSize(QSize(50, 50));
        Mesa_8 = new QPushButton(Inicio_Anfitrion);
        Mesa_8->setObjectName(QStringLiteral("Mesa_8"));
        Mesa_8->setGeometry(QRect(160, 370, 81, 61));
        Mesa_8->setFont(font2);
        Mesa_8->setIcon(icon2);
        Mesa_8->setIconSize(QSize(50, 50));
        Mesa_7 = new QPushButton(Inicio_Anfitrion);
        Mesa_7->setObjectName(QStringLiteral("Mesa_7"));
        Mesa_7->setGeometry(QRect(160, 290, 81, 61));
        Mesa_7->setFont(font2);
        Mesa_7->setIcon(icon2);
        Mesa_7->setIconSize(QSize(50, 50));
        label_4 = new QLabel(Inicio_Anfitrion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 120, 171, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("augie"));
        font3.setPointSize(14);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color: #FF0000;"));
        label_5 = new QLabel(Inicio_Anfitrion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 170, 171, 51));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color: #008000;"));
        stackedWidget_2->addWidget(Inicio_Anfitrion);
        Mesas_Disponibles = new QWidget();
        Mesas_Disponibles->setObjectName(QStringLiteral("Mesas_Disponibles"));
        stackedWidget_2->addWidget(Mesas_Disponibles);

        retranslateUi(Anfitrion);

        QMetaObject::connectSlotsByName(Anfitrion);
    } // setupUi

    void retranslateUi(QWidget *Anfitrion)
    {
        Anfitrion->setWindowTitle(QApplication::translate("Anfitrion", "Form", Q_NULLPTR));
        label->setText(QString());
        salida->setText(QString());
        Disponibilidad_Mesas->setText(QApplication::translate("Anfitrion", "Disponibilidad", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Anfitrion", "Bienvenido Anfitri\303\263n", Q_NULLPTR));
        Mesa_1->setText(QApplication::translate("Anfitrion", "1", Q_NULLPTR));
        Mesa_2->setText(QApplication::translate("Anfitrion", "2", Q_NULLPTR));
        Mesa_3->setText(QApplication::translate("Anfitrion", "3", Q_NULLPTR));
        Mesa_6->setText(QApplication::translate("Anfitrion", "6", Q_NULLPTR));
        Mesa_5->setText(QApplication::translate("Anfitrion", "5", Q_NULLPTR));
        Mesa_4->setText(QApplication::translate("Anfitrion", "4", Q_NULLPTR));
        Mesa_8->setText(QApplication::translate("Anfitrion", "8", Q_NULLPTR));
        Mesa_7->setText(QApplication::translate("Anfitrion", "7", Q_NULLPTR));
        label_4->setText(QApplication::translate("Anfitrion", "NO DISPONIBLE", Q_NULLPTR));
        label_5->setText(QApplication::translate("Anfitrion", "DISPONIBLE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Anfitrion: public Ui_Anfitrion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANFITRION_H
