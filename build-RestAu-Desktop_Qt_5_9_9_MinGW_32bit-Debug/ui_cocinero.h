/********************************************************************************
** Form generated from reading UI file 'cocinero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COCINERO_H
#define UI_COCINERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cocinero
{
public:
    QStackedWidget *stackedWidget;
    QWidget *Menu;
    QLabel *label;
    QPushButton *salida;
    QPushButton *Ordenes_Mesas;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *ordenes;
    QPushButton *Mesa_1;
    QPushButton *Mesa_5;
    QPushButton *Mesa_4;
    QPushButton *Mesa_3;
    QPushButton *Mesa_2;
    QPushButton *Mesa_8;
    QPushButton *Mesa_7;
    QPushButton *Mesa_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QListWidget *ordenMesa;
    QPushButton *Ordenes_Mesas_2;
    QPushButton *Ordenes_Mesas_3;
    QWidget *page_3;

    void setupUi(QWidget *cocinero)
    {
        if (cocinero->objectName().isEmpty())
            cocinero->setObjectName(QStringLiteral("cocinero"));
        cocinero->resize(723, 463);
        stackedWidget = new QStackedWidget(cocinero);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 151, 481));
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
        label->setGeometry(QRect(0, 20, 151, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        label->setScaledContents(true);
        salida = new QPushButton(Menu);
        salida->setObjectName(QStringLiteral("salida"));
        salida->setGeometry(QRect(0, 410, 151, 61));
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
        Ordenes_Mesas = new QPushButton(Menu);
        Ordenes_Mesas->setObjectName(QStringLiteral("Ordenes_Mesas"));
        Ordenes_Mesas->setGeometry(QRect(0, 140, 151, 51));
        QFont font;
        font.setPointSize(10);
        Ordenes_Mesas->setFont(font);
        Ordenes_Mesas->setStyleSheet(QLatin1String("QPushButton\n"
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
        icon1.addFile(QStringLiteral(":/img/Iconos/plato.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ordenes_Mesas->setIcon(icon1);
        Ordenes_Mesas->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(Menu);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(cocinero);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(151, 0, 601, 481));
        ordenes = new QWidget();
        ordenes->setObjectName(QStringLiteral("ordenes"));
        Mesa_1 = new QPushButton(ordenes);
        Mesa_1->setObjectName(QStringLiteral("Mesa_1"));
        Mesa_1->setGeometry(QRect(10, 130, 81, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("CreativeBlock BB"));
        font1.setPointSize(24);
        Mesa_1->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Iconos/mesa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Mesa_1->setIcon(icon2);
        Mesa_1->setIconSize(QSize(50, 50));
        Mesa_5 = new QPushButton(ordenes);
        Mesa_5->setObjectName(QStringLiteral("Mesa_5"));
        Mesa_5->setGeometry(QRect(160, 130, 81, 61));
        Mesa_5->setFont(font1);
        Mesa_5->setIcon(icon2);
        Mesa_5->setIconSize(QSize(50, 50));
        Mesa_4 = new QPushButton(ordenes);
        Mesa_4->setObjectName(QStringLiteral("Mesa_4"));
        Mesa_4->setGeometry(QRect(10, 370, 81, 61));
        Mesa_4->setFont(font1);
        Mesa_4->setIcon(icon2);
        Mesa_4->setIconSize(QSize(50, 50));
        Mesa_3 = new QPushButton(ordenes);
        Mesa_3->setObjectName(QStringLiteral("Mesa_3"));
        Mesa_3->setGeometry(QRect(10, 290, 81, 61));
        Mesa_3->setFont(font1);
        Mesa_3->setIcon(icon2);
        Mesa_3->setIconSize(QSize(50, 50));
        Mesa_2 = new QPushButton(ordenes);
        Mesa_2->setObjectName(QStringLiteral("Mesa_2"));
        Mesa_2->setGeometry(QRect(10, 210, 81, 61));
        Mesa_2->setFont(font1);
        Mesa_2->setIcon(icon2);
        Mesa_2->setIconSize(QSize(50, 50));
        Mesa_8 = new QPushButton(ordenes);
        Mesa_8->setObjectName(QStringLiteral("Mesa_8"));
        Mesa_8->setGeometry(QRect(160, 370, 81, 61));
        Mesa_8->setFont(font1);
        Mesa_8->setIcon(icon2);
        Mesa_8->setIconSize(QSize(50, 50));
        Mesa_7 = new QPushButton(ordenes);
        Mesa_7->setObjectName(QStringLiteral("Mesa_7"));
        Mesa_7->setGeometry(QRect(160, 290, 81, 61));
        Mesa_7->setFont(font1);
        Mesa_7->setIcon(icon2);
        Mesa_7->setIconSize(QSize(50, 50));
        Mesa_6 = new QPushButton(ordenes);
        Mesa_6->setObjectName(QStringLiteral("Mesa_6"));
        Mesa_6->setGeometry(QRect(160, 210, 81, 61));
        Mesa_6->setFont(font1);
        Mesa_6->setIcon(icon2);
        Mesa_6->setIconSize(QSize(50, 50));
        label_3 = new QLabel(ordenes);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 581, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("SuckerPunch"));
        font2.setPointSize(40);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color:#8E5329;"));
        label_3->setTextFormat(Qt::AutoText);
        label_4 = new QLabel(ordenes);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 90, 91, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Restaurant"));
        font3.setPointSize(36);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color: #FFFFFF;"));
        label_2 = new QLabel(ordenes);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 90, 251, 361));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/menu.jpg")));
        label_2->setScaledContents(true);
        ordenMesa = new QListWidget(ordenes);
        ordenMesa->setObjectName(QStringLiteral("ordenMesa"));
        ordenMesa->setGeometry(QRect(340, 130, 200, 260));
        Ordenes_Mesas_2 = new QPushButton(ordenes);
        Ordenes_Mesas_2->setObjectName(QStringLiteral("Ordenes_Mesas_2"));
        Ordenes_Mesas_2->setGeometry(QRect(340, 340, 91, 51));
        Ordenes_Mesas_2->setFont(font);
        Ordenes_Mesas_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/Iconos/proceso.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ordenes_Mesas_2->setIcon(icon3);
        Ordenes_Mesas_2->setIconSize(QSize(30, 30));
        Ordenes_Mesas_3 = new QPushButton(ordenes);
        Ordenes_Mesas_3->setObjectName(QStringLiteral("Ordenes_Mesas_3"));
        Ordenes_Mesas_3->setGeometry(QRect(450, 340, 91, 51));
        Ordenes_Mesas_3->setFont(font);
        Ordenes_Mesas_3->setStyleSheet(QLatin1String("QPushButton\n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/Iconos/terminado.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ordenes_Mesas_3->setIcon(icon4);
        Ordenes_Mesas_3->setIconSize(QSize(30, 30));
        stackedWidget_2->addWidget(ordenes);
        Mesa_1->raise();
        Mesa_5->raise();
        Mesa_4->raise();
        Mesa_3->raise();
        Mesa_2->raise();
        Mesa_8->raise();
        Mesa_7->raise();
        Mesa_6->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        ordenMesa->raise();
        Ordenes_Mesas_2->raise();
        Ordenes_Mesas_3->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget_2->addWidget(page_3);

        retranslateUi(cocinero);

        QMetaObject::connectSlotsByName(cocinero);
    } // setupUi

    void retranslateUi(QWidget *cocinero)
    {
        cocinero->setWindowTitle(QApplication::translate("cocinero", "Form", Q_NULLPTR));
        label->setText(QString());
        salida->setText(QString());
        Ordenes_Mesas->setText(QApplication::translate("cocinero", "Ordenes", Q_NULLPTR));
        Mesa_1->setText(QApplication::translate("cocinero", "1", Q_NULLPTR));
        Mesa_5->setText(QApplication::translate("cocinero", "5", Q_NULLPTR));
        Mesa_4->setText(QApplication::translate("cocinero", "4", Q_NULLPTR));
        Mesa_3->setText(QApplication::translate("cocinero", "3", Q_NULLPTR));
        Mesa_2->setText(QApplication::translate("cocinero", "2", Q_NULLPTR));
        Mesa_8->setText(QApplication::translate("cocinero", "8", Q_NULLPTR));
        Mesa_7->setText(QApplication::translate("cocinero", "7", Q_NULLPTR));
        Mesa_6->setText(QApplication::translate("cocinero", "6", Q_NULLPTR));
        label_3->setText(QApplication::translate("cocinero", "Bienvenido a la cocina", Q_NULLPTR));
        label_4->setText(QApplication::translate("cocinero", "Orden", Q_NULLPTR));
        label_2->setText(QString());
        Ordenes_Mesas_2->setText(QString());
        Ordenes_Mesas_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cocinero: public Ui_cocinero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COCINERO_H
