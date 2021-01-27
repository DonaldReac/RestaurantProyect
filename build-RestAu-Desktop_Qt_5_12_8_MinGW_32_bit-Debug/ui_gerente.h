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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gerente
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *Buscar;
    QPushButton *Editar;
    QPushButton *Agregar;
    QPushButton *Inventario;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QTableWidget *TablaUsuarios;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QWidget *page_4;

    void setupUi(QDialog *gerente)
    {
        if (gerente->objectName().isEmpty())
            gerente->setObjectName(QString::fromUtf8("gerente"));
        gerente->resize(726, 463);
        stackedWidget = new QStackedWidget(gerente);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 151, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #C0C4CF;\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border:0px solid gray;\n"
"  padding: 0 8px;\n"
"  background: yellow;\n"
"background-color: rgba(216, 223, 233,05);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(223, 138, 19);\n"
"}"));
        Buscar = new QPushButton(page);
        Buscar->setObjectName(QString::fromUtf8("Buscar"));
        Buscar->setGeometry(QRect(0, 160, 151, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Buscar->setIcon(icon);
        Buscar->setIconSize(QSize(35, 35));
        Editar = new QPushButton(page);
        Editar->setObjectName(QString::fromUtf8("Editar"));
        Editar->setGeometry(QRect(0, 210, 151, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Iconos/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        Editar->setIcon(icon1);
        Editar->setIconSize(QSize(35, 35));
        Agregar = new QPushButton(page);
        Agregar->setObjectName(QString::fromUtf8("Agregar"));
        Agregar->setGeometry(QRect(0, 260, 151, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Iconos/anadir.png"), QSize(), QIcon::Normal, QIcon::Off);
        Agregar->setIcon(icon2);
        Agregar->setIconSize(QSize(35, 35));
        Inventario = new QPushButton(page);
        Inventario->setObjectName(QString::fromUtf8("Inventario"));
        Inventario->setGeometry(QRect(0, 310, 151, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/Iconos/inventario.png"), QSize(), QIcon::Normal, QIcon::Off);
        Inventario->setIcon(icon3);
        Inventario->setIconSize(QSize(35, 35));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 432, 151, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        icon4.addFile(QString::fromUtf8(":/img/Iconos/salida.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(30, 30));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 161, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        label->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(gerente);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(149, -11, 581, 481));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border:0px solid gray;\n"
"  padding: 0 8px;\n"
"	background-color: rgb(159, 126, 101);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(223, 138, 19);	\n"
"}\n"
"#page_3\n"
"{\n"
"	background-color: rgb(217, 190, 167);\n"
"}\n"
""));
        TablaUsuarios = new QTableWidget(page_3);
        if (TablaUsuarios->columnCount() < 6)
            TablaUsuarios->setColumnCount(6);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(0, 0, 0));
        __qtablewidgetitem->setForeground(brush);
        TablaUsuarios->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(0, 0, 0));
        __qtablewidgetitem1->setForeground(brush);
        TablaUsuarios->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(0, 0, 0));
        __qtablewidgetitem2->setForeground(brush);
        TablaUsuarios->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(0, 0, 0));
        __qtablewidgetitem3->setForeground(brush);
        TablaUsuarios->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(0, 0, 0));
        __qtablewidgetitem4->setForeground(brush);
        TablaUsuarios->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setBackground(QColor(0, 0, 0));
        __qtablewidgetitem5->setForeground(brush);
        TablaUsuarios->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        TablaUsuarios->setObjectName(QString::fromUtf8("TablaUsuarios"));
        TablaUsuarios->setGeometry(QRect(10, 100, 551, 231));
        TablaUsuarios->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 20, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 60, 461, 31));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 310, 331, 211));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/hot-cakes-con-miel-y-frutos-rojos.png")));
        label_4->setScaledContents(true);
        label_4->setWordWrap(false);
        stackedWidget_2->addWidget(page_3);
        label_4->raise();
        TablaUsuarios->raise();
        label_2->raise();
        lineEdit->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_2->addWidget(page_4);

        retranslateUi(gerente);

        QMetaObject::connectSlotsByName(gerente);
    } // setupUi

    void retranslateUi(QDialog *gerente)
    {
        gerente->setWindowTitle(QApplication::translate("gerente", "Dialog", nullptr));
        Buscar->setText(QApplication::translate("gerente", "Buscar", nullptr));
        Editar->setText(QApplication::translate("gerente", "Editar", nullptr));
        Agregar->setText(QApplication::translate("gerente", "Agregar", nullptr));
        Inventario->setText(QApplication::translate("gerente", "Inventario", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = TablaUsuarios->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("gerente", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TablaUsuarios->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("gerente", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TablaUsuarios->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("gerente", "Apellido Paterno", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TablaUsuarios->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("gerente", "Apellido Materno", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TablaUsuarios->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("gerente", "Puesto", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TablaUsuarios->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("gerente", "Edad", nullptr));
        label_2->setText(QApplication::translate("gerente", "Buscar Usuarios", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("gerente", "ID DE EMPLEADO", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gerente: public Ui_gerente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENTE_H
