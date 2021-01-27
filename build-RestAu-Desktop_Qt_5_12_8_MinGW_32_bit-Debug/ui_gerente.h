/********************************************************************************
** Form generated from reading UI file 'gerente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERENTE_H
#define UI_GERENTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gerente
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label;
    QPushButton *Buscar;
    QWidget *widget;
    QTableWidget *Usuarios;

    void setupUi(QDialog *Gerente)
    {
        if (Gerente->objectName().isEmpty())
            Gerente->setObjectName(QString::fromUtf8("Gerente"));
        Gerente->resize(636, 435);
        Gerente->setStyleSheet(QString::fromUtf8(".QStackedWidget\n"
"{\n"
"	background-color: rgb(77, 80, 93);\n"
"}"));
        stackedWidget = new QStackedWidget(Gerente);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 201, 441));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 80, 93);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-style: outset;\n"
"background-color: rgb(216, 223, 233);\n"
"color: rgb(0, 0, 0);\n"
"border-bottom : 1px solid yelow;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color: rgb(185, 115, 16);\n"
"}\n"
""));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 101, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/trabajando (1).png")));
        label->setScaledContents(true);
        Buscar = new QPushButton(page_2);
        Buscar->setObjectName(QString::fromUtf8("Buscar"));
        Buscar->setGeometry(QRect(0, 160, 201, 41));
        Buscar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Buscar->setIcon(icon);
        Buscar->setIconSize(QSize(35, 35));
        stackedWidget->addWidget(page_2);
        widget = new QWidget(Gerente);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, -1, 441, 441));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Usuarios = new QTableWidget(widget);
        Usuarios->setObjectName(QString::fromUtf8("Usuarios"));
        Usuarios->setGeometry(QRect(10, 120, 411, 192));

        retranslateUi(Gerente);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Gerente);
    } // setupUi

    void retranslateUi(QDialog *Gerente)
    {
        Gerente->setWindowTitle(QApplication::translate("Gerente", "Dialog", nullptr));
        label->setText(QString());
        Buscar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gerente: public Ui_Gerente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENTE_H
