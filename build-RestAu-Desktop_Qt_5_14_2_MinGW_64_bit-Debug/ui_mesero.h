/********************************************************************************
** Form generated from reading UI file 'mesero.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESERO_H
#define UI_MESERO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mesero
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *Salir;
    QPushButton *Buscar;
    QPushButton *NuevoPedido;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTableWidget *TablaPlatillos;
    QWidget *page_2;

    void setupUi(QDialog *mesero)
    {
        if (mesero->objectName().isEmpty())
            mesero->setObjectName(QString::fromUtf8("mesero"));
        mesero->resize(718, 450);
        widget = new QWidget(mesero);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 151, 451));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #C0C4CF;\n"
"border-right: 1px solid;\n"
"\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo.png")));
        label->setScaledContents(true);
        Salir = new QPushButton(widget);
        Salir->setObjectName(QString::fromUtf8("Salir"));
        Salir->setGeometry(QRect(0, 380, 151, 51));
        Salir->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        Salir->setIcon(icon);
        Salir->setIconSize(QSize(30, 30));
        Salir->setCheckable(false);
        Salir->setAutoDefault(true);
        Buscar = new QPushButton(widget);
        Buscar->setObjectName(QString::fromUtf8("Buscar"));
        Buscar->setGeometry(QRect(10, 90, 131, 61));
        Buscar->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        icon1.addFile(QString::fromUtf8(":/img/Iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Buscar->setIcon(icon1);
        Buscar->setIconSize(QSize(30, 30));
        NuevoPedido = new QPushButton(widget);
        NuevoPedido->setObjectName(QString::fromUtf8("NuevoPedido"));
        NuevoPedido->setGeometry(QRect(10, 180, 131, 61));
        NuevoPedido->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Iconos/anadir.png"), QSize(), QIcon::Normal, QIcon::Off);
        NuevoPedido->setIcon(icon2);
        NuevoPedido->setIconSize(QSize(30, 30));
        stackedWidget = new QStackedWidget(mesero);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(150, 0, 561, 451));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: #faf4ee;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 30, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(18);
        font.setItalic(true);
        label_2->setFont(font);
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 80, 521, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        TablaPlatillos = new QTableWidget(page);
        TablaPlatillos->setObjectName(QString::fromUtf8("TablaPlatillos"));
        TablaPlatillos->setGeometry(QRect(10, 140, 551, 291));
        TablaPlatillos->setStyleSheet(QString::fromUtf8("background-color: white;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(mesero);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mesero);
    } // setupUi

    void retranslateUi(QDialog *mesero)
    {
        mesero->setWindowTitle(QCoreApplication::translate("mesero", "Dialog", nullptr));
        label->setText(QString());
        Salir->setText(QString());
        Buscar->setText(QCoreApplication::translate("mesero", "Buscar", nullptr));
        NuevoPedido->setText(QCoreApplication::translate("mesero", "Agregar", nullptr));
        label_2->setText(QCoreApplication::translate("mesero", "Buscar Platillos", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("mesero", "ID PLATILLO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mesero: public Ui_mesero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESERO_H
