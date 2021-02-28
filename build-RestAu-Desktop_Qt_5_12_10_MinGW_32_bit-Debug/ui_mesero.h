/********************************************************************************
** Form generated from reading UI file 'mesero.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QListWidget *listamenu;
    QListWidget *listapedido;
    QListWidget *bebidas;
    QListWidget *postres;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *CrearPedido;
    QLabel *label_7;
    QSpinBox *total;
    QLineEdit *mesa;
    QLabel *label_8;

    void setupUi(QDialog *mesero)
    {
        if (mesero->objectName().isEmpty())
            mesero->setObjectName(QString::fromUtf8("mesero"));
        mesero->resize(831, 481);
        widget = new QWidget(mesero);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 151, 481));
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
        stackedWidget->setGeometry(QRect(150, 0, 681, 491));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: #faf4ee;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 30, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(18);
        font.setItalic(true);
        label_2->setFont(font);
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 80, 621, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        TablaPlatillos = new QTableWidget(page);
        TablaPlatillos->setObjectName(QString::fromUtf8("TablaPlatillos"));
        TablaPlatillos->setGeometry(QRect(20, 130, 641, 341));
        TablaPlatillos->setStyleSheet(QString::fromUtf8("background-color: white;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        listamenu = new QListWidget(page_2);
        listamenu->setObjectName(QString::fromUtf8("listamenu"));
        listamenu->setGeometry(QRect(20, 30, 251, 121));
        listamenu->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        listapedido = new QListWidget(page_2);
        listapedido->setObjectName(QString::fromUtf8("listapedido"));
        listapedido->setGeometry(QRect(380, 100, 256, 291));
        listapedido->setStyleSheet(QString::fromUtf8("background-color:white;"));
        bebidas = new QListWidget(page_2);
        bebidas->setObjectName(QString::fromUtf8("bebidas"));
        bebidas->setGeometry(QRect(20, 190, 256, 121));
        bebidas->setStyleSheet(QString::fromUtf8("background-color:white;"));
        postres = new QListWidget(page_2);
        postres->setObjectName(QString::fromUtf8("postres"));
        postres->setGeometry(QRect(20, 350, 256, 121));
        postres->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 10, 81, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Caviar Dreams"));
        font1.setPointSize(12);
        font1.setItalic(true);
        label_3->setFont(font1);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 160, 71, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 320, 61, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 65, 61, 31));
        label_6->setFont(font1);
        CrearPedido = new QPushButton(page_2);
        CrearPedido->setObjectName(QString::fromUtf8("CrearPedido"));
        CrearPedido->setGeometry(QRect(560, 410, 111, 51));
        CrearPedido->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        icon3.addFile(QString::fromUtf8(":/img/Iconos/iconfinder_My_order_6457548.png"), QSize(), QIcon::Normal, QIcon::Off);
        CrearPedido->setIcon(icon3);
        CrearPedido->setIconSize(QSize(30, 30));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 420, 91, 31));
        label_7->setFont(font1);
        total = new QSpinBox(page_2);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(440, 420, 81, 31));
        total->setMaximum(9999);
        mesa = new QLineEdit(page_2);
        mesa->setObjectName(QString::fromUtf8("mesa"));
        mesa->setGeometry(QRect(500, 30, 113, 21));
        mesa->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(410, 30, 81, 20));
        label_8->setFont(font1);
        stackedWidget->addWidget(page_2);

        retranslateUi(mesero);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(mesero);
    } // setupUi

    void retranslateUi(QDialog *mesero)
    {
        mesero->setWindowTitle(QApplication::translate("mesero", "Dialog", nullptr));
        label->setText(QString());
        Salir->setText(QString());
        Buscar->setText(QApplication::translate("mesero", "Buscar", nullptr));
        NuevoPedido->setText(QApplication::translate("mesero", "Agregar", nullptr));
        label_2->setText(QApplication::translate("mesero", "Buscar Platillos", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("mesero", "ID PLATILLO", nullptr));
        label_3->setText(QApplication::translate("mesero", "Desayunos", nullptr));
        label_4->setText(QApplication::translate("mesero", "Bebidas", nullptr));
        label_5->setText(QApplication::translate("mesero", "Postres", nullptr));
        label_6->setText(QApplication::translate("mesero", "Orden", nullptr));
        CrearPedido->setText(QApplication::translate("mesero", "Crear Pedido", nullptr));
        label_7->setText(QApplication::translate("mesero", "Importe: ", nullptr));
        label_8->setText(QApplication::translate("mesero", "No. Mesa:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mesero: public Ui_mesero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESERO_H
