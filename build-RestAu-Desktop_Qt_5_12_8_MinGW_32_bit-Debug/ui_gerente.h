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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
    QPushButton *Agregar;
    QPushButton *Inventario;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *BuscarUsuario;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *Editar;
    QTableWidget *tableusuario;
    QWidget *EditarUsuario;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QComboBox *puestou;
    QLabel *label_18;
    QLineEdit *nomusuario;
    QLineEdit *apepaterno;
    QLineEdit *apematerno;
    QLineEdit *edadusuario;
    QPushButton *Guardarcambios;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *contrasenia1;
    QLineEdit *contrasenia2;
    QCheckBox *vercontra;
    QLabel *label_21;
    QWidget *AgregarUsuario;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_3;
    QLineEdit *edad;
    QPushButton *agregarusuario;
    QLineEdit *nombreusuario;
    QLabel *label_8;
    QComboBox *puestousuario;
    QLabel *label_9;
    QLineEdit *apellidop;
    QLabel *label_6;
    QLineEdit *apellidom;
    QLabel *label_7;
    QLabel *label_11;
    QWidget *Inventario_2;
    QLabel *label_22;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableWidget *inventario_Tabla;
    QLabel *label_23;
    QPushButton *pushButton_5;

    void setupUi(QDialog *gerente)
    {
        if (gerente->objectName().isEmpty())
            gerente->setObjectName(QString::fromUtf8("gerente"));
        gerente->resize(726, 463);
        stackedWidget = new QStackedWidget(gerente);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, -10, 151, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #C0C4CF;\n"
"border-right: 1px solid;\n"
"\n"
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
        Buscar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Buscar->setIcon(icon);
        Buscar->setIconSize(QSize(35, 35));
        Agregar = new QPushButton(page);
        Agregar->setObjectName(QString::fromUtf8("Agregar"));
        Agregar->setGeometry(QRect(0, 240, 151, 51));
        Agregar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Iconos/anadir.png"), QSize(), QIcon::Normal, QIcon::Off);
        Agregar->setIcon(icon1);
        Agregar->setIconSize(QSize(35, 35));
        Inventario = new QPushButton(page);
        Inventario->setObjectName(QString::fromUtf8("Inventario"));
        Inventario->setGeometry(QRect(0, 310, 151, 51));
        Inventario->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Iconos/inventario.png"), QSize(), QIcon::Normal, QIcon::Off);
        Inventario->setIcon(icon2);
        Inventario->setIconSize(QSize(35, 35));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 422, 151, 51));
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/Iconos/salida.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(30, 30));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        label->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(gerente);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(139, -11, 591, 481));
        stackedWidget_2->setLayoutDirection(Qt::RightToLeft);
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: #faf4ee;"));
        BuscarUsuario = new QWidget();
        BuscarUsuario->setObjectName(QString::fromUtf8("BuscarUsuario"));
        BuscarUsuario->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	background-color: #faf4ee;\n"
"}\n"
""));
        label_2 = new QLabel(BuscarUsuario);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 40, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        lineEdit = new QLineEdit(BuscarUsuario);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 80, 391, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(BuscarUsuario);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 340, 381, 211));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/hot-cakes-con-miel-y-frutos-rojos.png")));
        label_4->setScaledContents(true);
        label_4->setWordWrap(false);
        Editar = new QPushButton(BuscarUsuario);
        Editar->setObjectName(QString::fromUtf8("Editar"));
        Editar->setGeometry(QRect(490, 70, 61, 41));
        Editar->setFocusPolicy(Qt::NoFocus);
        Editar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(255, 255, 255, 10);}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(223, 138, 19);\n"
"}\n"
"\n"
"QPushButton:focus:pressed{ background-color:white ;\n"
"color: black; }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/Iconos/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        Editar->setIcon(icon4);
        Editar->setIconSize(QSize(35, 35));
        tableusuario = new QTableWidget(BuscarUsuario);
        if (tableusuario->columnCount() < 6)
            tableusuario->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QString::fromUtf8("Id"));
        tableusuario->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableusuario->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableusuario->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableusuario->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableusuario->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableusuario->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableusuario->setObjectName(QString::fromUtf8("tableusuario"));
        tableusuario->setEnabled(true);
        tableusuario->setGeometry(QRect(30, 140, 541, 291));
        tableusuario->setMinimumSize(QSize(541, 0));
        tableusuario->setMouseTracking(true);
        tableusuario->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableusuario->setAcceptDrops(true);
        tableusuario->setLayoutDirection(Qt::LeftToRight);
        tableusuario->setStyleSheet(QString::fromUtf8("background-color: white;"));
        tableusuario->setFrameShape(QFrame::StyledPanel);
        tableusuario->horizontalHeader()->setHighlightSections(true);
        stackedWidget_2->addWidget(BuscarUsuario);
        label_4->raise();
        label_2->raise();
        lineEdit->raise();
        Editar->raise();
        tableusuario->raise();
        EditarUsuario = new QWidget();
        EditarUsuario->setObjectName(QString::fromUtf8("EditarUsuario"));
        EditarUsuario->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border:0px solid gray;\n"
"  padding: 0 8px;\n"
"	background-color: rgb(159, 126, 101);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(223, 138, 19);	\n"
"}\n"
"#page_4\n"
"{\n"
"	background-color: #faf4ee;\n"
"}"));
        label_12 = new QLabel(EditarUsuario);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(210, 40, 181, 31));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        label_13 = new QLabel(EditarUsuario);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 80, 491, 371));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid; \n"
"border-radius: 10px;"));
        label_14 = new QLabel(EditarUsuario);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(110, 110, 71, 16));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_15 = new QLabel(EditarUsuario);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(110, 160, 131, 16));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_16 = new QLabel(EditarUsuario);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(110, 210, 131, 16));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_17 = new QLabel(EditarUsuario);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(110, 260, 47, 13));
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        puestou = new QComboBox(EditarUsuario);
        puestou->addItem(QString());
        puestou->addItem(QString());
        puestou->addItem(QString());
        puestou->addItem(QString());
        puestou->setObjectName(QString::fromUtf8("puestou"));
        puestou->setGeometry(QRect(240, 400, 101, 31));
        puestou->setLayoutDirection(Qt::LeftToRight);
        puestou->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"font:10pt  \"CaviarDreams_Italic\";\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_18 = new QLabel(EditarUsuario);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(100, 410, 61, 16));
        label_18->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        nomusuario = new QLineEdit(EditarUsuario);
        nomusuario->setObjectName(QString::fromUtf8("nomusuario"));
        nomusuario->setGeometry(QRect(250, 99, 221, 31));
        nomusuario->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        apepaterno = new QLineEdit(EditarUsuario);
        apepaterno->setObjectName(QString::fromUtf8("apepaterno"));
        apepaterno->setGeometry(QRect(250, 150, 221, 31));
        apepaterno->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        apematerno = new QLineEdit(EditarUsuario);
        apematerno->setObjectName(QString::fromUtf8("apematerno"));
        apematerno->setGeometry(QRect(250, 200, 221, 31));
        apematerno->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        edadusuario = new QLineEdit(EditarUsuario);
        edadusuario->setObjectName(QString::fromUtf8("edadusuario"));
        edadusuario->setGeometry(QRect(250, 250, 221, 31));
        edadusuario->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        Guardarcambios = new QPushButton(EditarUsuario);
        Guardarcambios->setObjectName(QString::fromUtf8("Guardarcambios"));
        Guardarcambios->setGeometry(QRect(380, 400, 142, 31));
        Guardarcambios->setStyleSheet(QString::fromUtf8("QPushButton{;\n"
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
"color: black; }"));
        label_19 = new QLabel(EditarUsuario);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(100, 300, 141, 31));
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_20 = new QLabel(EditarUsuario);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(100, 360, 171, 16));
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        contrasenia1 = new QLineEdit(EditarUsuario);
        contrasenia1->setObjectName(QString::fromUtf8("contrasenia1"));
        contrasenia1->setGeometry(QRect(250, 300, 221, 31));
        contrasenia1->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        contrasenia1->setEchoMode(QLineEdit::Password);
        contrasenia2 = new QLineEdit(EditarUsuario);
        contrasenia2->setObjectName(QString::fromUtf8("contrasenia2"));
        contrasenia2->setGeometry(QRect(270, 350, 201, 31));
        contrasenia2->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        contrasenia2->setEchoMode(QLineEdit::Password);
        vercontra = new QCheckBox(EditarUsuario);
        vercontra->setObjectName(QString::fromUtf8("vercontra"));
        vercontra->setGeometry(QRect(480, 300, 61, 41));
        vercontra->setLayoutDirection(Qt::LeftToRight);
        vercontra->setStyleSheet(QString::fromUtf8("  padding: 0 8px;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/Iconos/ojo.png"), QSize(), QIcon::Normal, QIcon::Off);
        vercontra->setIcon(icon5);
        label_21 = new QLabel(EditarUsuario);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(320, 10, 271, 111));
        label_21->setFocusPolicy(Qt::NoFocus);
        label_21->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_21->setLayoutDirection(Qt::RightToLeft);
        label_21->setFrameShape(QFrame::NoFrame);
        label_21->setFrameShadow(QFrame::Plain);
        label_21->setTextFormat(Qt::AutoText);
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/tostadas-francesas-canela.png")));
        label_21->setScaledContents(true);
        label_21->setWordWrap(false);
        stackedWidget_2->addWidget(EditarUsuario);
        label_21->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        puestou->raise();
        label_18->raise();
        nomusuario->raise();
        apepaterno->raise();
        apematerno->raise();
        edadusuario->raise();
        Guardarcambios->raise();
        label_19->raise();
        label_20->raise();
        contrasenia1->raise();
        contrasenia2->raise();
        vercontra->raise();
        AgregarUsuario = new QWidget();
        AgregarUsuario->setObjectName(QString::fromUtf8("AgregarUsuario"));
        AgregarUsuario->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border:0px solid gray;\n"
"  padding: 0 8px;\n"
"	background-color: rgb(159, 126, 101);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(223, 138, 19);	\n"
"}\n"
"#page_5\n"
"{\n"
"	background-color: #faf4ee;\n"
"}"));
        label_5 = new QLabel(AgregarUsuario);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 40, 181, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        label_10 = new QLabel(AgregarUsuario);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(360, 290, 251, 221));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/pan.png")));
        label_10->setScaledContents(true);
        label_3 = new QLabel(AgregarUsuario);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 521, 331));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid; \n"
"border-radius: 10px;"));
        edad = new QLineEdit(AgregarUsuario);
        edad->setObjectName(QString::fromUtf8("edad"));
        edad->setGeometry(QRect(230, 260, 281, 31));
        edad->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        agregarusuario = new QPushButton(AgregarUsuario);
        agregarusuario->setObjectName(QString::fromUtf8("agregarusuario"));
        agregarusuario->setGeometry(QRect(240, 360, 142, 31));
        agregarusuario->setStyleSheet(QString::fromUtf8("QPushButton{;\n"
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
        nombreusuario = new QLineEdit(AgregarUsuario);
        nombreusuario->setObjectName(QString::fromUtf8("nombreusuario"));
        nombreusuario->setGeometry(QRect(230, 110, 281, 31));
        nombreusuario->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_8 = new QLabel(AgregarUsuario);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 260, 51, 21));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        puestousuario = new QComboBox(AgregarUsuario);
        puestousuario->addItem(QString());
        puestousuario->addItem(QString());
        puestousuario->addItem(QString());
        puestousuario->addItem(QString());
        puestousuario->setObjectName(QString::fromUtf8("puestousuario"));
        puestousuario->setGeometry(QRect(230, 310, 141, 31));
        puestousuario->setLayoutDirection(Qt::LeftToRight);
        puestousuario->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"font:10pt  \"CaviarDreams_Italic\";\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_9 = new QLabel(AgregarUsuario);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 310, 61, 21));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        apellidop = new QLineEdit(AgregarUsuario);
        apellidop->setObjectName(QString::fromUtf8("apellidop"));
        apellidop->setGeometry(QRect(230, 159, 281, 31));
        apellidop->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_6 = new QLabel(AgregarUsuario);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 160, 131, 21));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        apellidom = new QLineEdit(AgregarUsuario);
        apellidom->setObjectName(QString::fromUtf8("apellidom"));
        apellidom->setGeometry(QRect(230, 210, 281, 31));
        apellidom->setStyleSheet(QString::fromUtf8("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_7 = new QLabel(AgregarUsuario);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 111, 91, 21));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_11 = new QLabel(AgregarUsuario);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(90, 210, 131, 21));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        stackedWidget_2->addWidget(AgregarUsuario);
        label_10->raise();
        label_5->raise();
        label_3->raise();
        edad->raise();
        agregarusuario->raise();
        nombreusuario->raise();
        label_8->raise();
        puestousuario->raise();
        label_9->raise();
        apellidop->raise();
        label_6->raise();
        apellidom->raise();
        label_7->raise();
        label_11->raise();
        Inventario_2 = new QWidget();
        Inventario_2->setObjectName(QString::fromUtf8("Inventario_2"));
        Inventario_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Caviar Dreams\";\n"
"	color: rgb(0, 59, 92);\n"
"	backgound-color: none;\n"
"	border-left: none;\n"
"	border-right: none;\n"
"	border-top: none;\n"
"	border-bottom: 3px solid rgb(164, 76, 40);\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: #a44c28;\n"
"	color:white;\n"
"border-bottom: 3px solid rgb(255, 255, 255);\n"
"}"));
        label_22 = new QLabel(Inventario_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(410, 20, 161, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Caviar Dreams"));
        font1.setPointSize(26);
        font1.setItalic(true);
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("\n"
"	border-bottom: 3px solid rgb(164, 76, 40);\n"
"\n"
""));
        pushButton_2 = new QPushButton(Inventario_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 100, 111, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Caviar Dreams"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(Inventario_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 100, 75, 23));
        pushButton_4 = new QPushButton(Inventario_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 100, 75, 23));
        inventario_Tabla = new QTableWidget(Inventario_2);
        inventario_Tabla->setObjectName(QString::fromUtf8("inventario_Tabla"));
        inventario_Tabla->setGeometry(QRect(50, 140, 491, 251));
        inventario_Tabla->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_23 = new QLabel(Inventario_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(-20, 340, 201, 141));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Caviar Dreams"));
        font3.setPointSize(16);
        font3.setItalic(true);
        label_23->setFont(font3);
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/tostadas-francesas-canela.png")));
        label_23->setScaledContents(true);
        label_23->setWordWrap(false);
        pushButton_5 = new QPushButton(Inventario_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 410, 201, 23));
        stackedWidget_2->addWidget(Inventario_2);
        label_23->raise();
        label_22->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        inventario_Tabla->raise();
        pushButton_5->raise();
        stackedWidget_2->raise();
        stackedWidget->raise();

        retranslateUi(gerente);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gerente);
    } // setupUi

    void retranslateUi(QDialog *gerente)
    {
        gerente->setWindowTitle(QApplication::translate("gerente", "Dialog", nullptr));
        Buscar->setText(QApplication::translate("gerente", "Buscar", nullptr));
        Agregar->setText(QApplication::translate("gerente", "Agregar", nullptr));
        Inventario->setText(QApplication::translate("gerente", "Inventario", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("gerente", "Buscar Usuarios", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("gerente", "ID DE EMPLEADO", nullptr));
        label_4->setText(QString());
        Editar->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableusuario->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("gerente", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableusuario->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("gerente", "Apellido paterno", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableusuario->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("gerente", "Apellido materno", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableusuario->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("gerente", "Puesto", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableusuario->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("gerente", "Edad", nullptr));
        label_12->setText(QApplication::translate("gerente", "Editar Usuario", nullptr));
        label_13->setText(QString());
        label_14->setText(QApplication::translate("gerente", "Nombre:", nullptr));
        label_15->setText(QApplication::translate("gerente", "Apellido paterno:", nullptr));
        label_16->setText(QApplication::translate("gerente", "Apellido materno:", nullptr));
        label_17->setText(QApplication::translate("gerente", "Edad:", nullptr));
        puestou->setItemText(0, QApplication::translate("gerente", "Cocinero", nullptr));
        puestou->setItemText(1, QApplication::translate("gerente", "Mesero", nullptr));
        puestou->setItemText(2, QApplication::translate("gerente", "Anfitrion", nullptr));
        puestou->setItemText(3, QApplication::translate("gerente", "Gerente", nullptr));

        label_18->setText(QApplication::translate("gerente", "Puesto:", nullptr));
        Guardarcambios->setText(QApplication::translate("gerente", "Guardar", nullptr));
        label_19->setText(QApplication::translate("gerente", "Contrase\303\261a nueva:", nullptr));
        label_20->setText(QApplication::translate("gerente", "Confirmar contrase\303\261a:", nullptr));
        vercontra->setText(QString());
        label_21->setText(QString());
        label_5->setText(QApplication::translate("gerente", "Agregar Usuario", nullptr));
        label_10->setText(QString());
        label_3->setText(QString());
        agregarusuario->setText(QApplication::translate("gerente", "Agregar", nullptr));
        label_8->setText(QApplication::translate("gerente", "Edad:", nullptr));
        puestousuario->setItemText(0, QApplication::translate("gerente", "Cocinero", nullptr));
        puestousuario->setItemText(1, QApplication::translate("gerente", "Gerente", nullptr));
        puestousuario->setItemText(2, QApplication::translate("gerente", "Anfitrion", nullptr));
        puestousuario->setItemText(3, QApplication::translate("gerente", "Mesero", nullptr));

        label_9->setText(QApplication::translate("gerente", "Puesto:", nullptr));
        label_6->setText(QApplication::translate("gerente", "Apellido paterno:", nullptr));
        label_7->setText(QApplication::translate("gerente", "Nombre:", nullptr));
        label_11->setText(QApplication::translate("gerente", "Apellido materno:", nullptr));
        label_22->setText(QApplication::translate("gerente", "Inventario ", nullptr));
        pushButton_2->setText(QApplication::translate("gerente", "Desayunos ", nullptr));
        pushButton_3->setText(QApplication::translate("gerente", "Bebidas", nullptr));
        pushButton_4->setText(QApplication::translate("gerente", "Postres", nullptr));
        label_23->setText(QString());
        pushButton_5->setText(QApplication::translate("gerente", "Imprimir Inventario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gerente: public Ui_gerente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENTE_H
