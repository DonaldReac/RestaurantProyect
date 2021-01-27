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
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QTableWidget *TablaUsuarios;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *page_4;

    void setupUi(QDialog *gerente)
    {
        if (gerente->objectName().isEmpty())
            gerente->setObjectName(QString::fromUtf8("gerente"));
        gerente->resize(726, 463);
        stackedWidget = new QStackedWidget(gerente);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 231, 471));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 80, 93);\n"
"\n"
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
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 171, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logo.jpeg")));
        label->setScaledContents(true);
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 160, 231, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(35, 35));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 210, 231, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Iconos/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(35, 35));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 260, 231, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/Iconos/anadir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(35, 35));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 310, 231, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/Iconos/inventario.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(35, 35));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 420, 231, 41));
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
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(gerente);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(229, -11, 501, 471));
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
"	background-color: rgb(223, 138, 19);\n"
"	\n"
"}"));
        TablaUsuarios = new QTableWidget(page_3);
        TablaUsuarios->setObjectName(QString::fromUtf8("TablaUsuarios"));
        TablaUsuarios->setGeometry(QRect(10, 100, 481, 251));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 20, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_2->setFont(font);
        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 60, 411, 31));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 31, 31));
        label_3->setFont(font);
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 280, 311, 261));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/hot-cakes-tradicionales.png")));
        label_4->setScaledContents(true);
        label_4->setWordWrap(false);
        stackedWidget_2->addWidget(page_3);
        label_4->raise();
        TablaUsuarios->raise();
        label_2->raise();
        lineEdit->raise();
        label_3->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_2->addWidget(page_4);

        retranslateUi(gerente);

        QMetaObject::connectSlotsByName(gerente);
    } // setupUi

    void retranslateUi(QDialog *gerente)
    {
        gerente->setWindowTitle(QApplication::translate("gerente", "Dialog", nullptr));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("gerente", "Buscar", nullptr));
        pushButton_3->setText(QApplication::translate("gerente", "Editar", nullptr));
        pushButton_4->setText(QApplication::translate("gerente", "Agregar", nullptr));
        pushButton_5->setText(QApplication::translate("gerente", "Inventario", nullptr));
        pushButton->setText(QString());
        label_2->setText(QApplication::translate("gerente", "Buscar Usuarios", nullptr));
        label_3->setText(QApplication::translate("gerente", "ID: ", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gerente: public Ui_gerente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENTE_H
