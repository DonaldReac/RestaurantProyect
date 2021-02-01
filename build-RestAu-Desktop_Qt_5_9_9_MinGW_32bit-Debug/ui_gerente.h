/********************************************************************************
** Form generated from reading UI file 'gerente.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERENTE_H
#define UI_GERENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

    void setupUi(QDialog *gerente)
    {
        if (gerente->objectName().isEmpty())
            gerente->setObjectName(QStringLiteral("gerente"));
        gerente->resize(726, 463);
        stackedWidget = new QStackedWidget(gerente);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, -10, 161, 481));
        stackedWidget->setStyleSheet(QLatin1String("QWidget{\n"
"background-color: #C0C4CF;\n"
"border-right: 1px solid;\n"
"\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QLatin1String("QPushButton\n"
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
        Buscar->setObjectName(QStringLiteral("Buscar"));
        Buscar->setGeometry(QRect(0, 160, 151, 51));
        Buscar->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/Iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Buscar->setIcon(icon);
        Buscar->setIconSize(QSize(35, 35));
        Agregar = new QPushButton(page);
        Agregar->setObjectName(QStringLiteral("Agregar"));
        Agregar->setGeometry(QRect(0, 240, 151, 51));
        Agregar->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/Iconos/anadir.png"), QSize(), QIcon::Normal, QIcon::Off);
        Agregar->setIcon(icon1);
        Agregar->setIconSize(QSize(35, 35));
        Inventario = new QPushButton(page);
        Inventario->setObjectName(QStringLiteral("Inventario"));
        Inventario->setGeometry(QRect(0, 310, 151, 51));
        Inventario->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Iconos/inventario.png"), QSize(), QIcon::Normal, QIcon::Off);
        Inventario->setIcon(icon2);
        Inventario->setIconSize(QSize(35, 35));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 422, 151, 51));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        icon3.addFile(QStringLiteral(":/img/Iconos/salida.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(30, 30));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 151, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/logosinfondo1.png")));
        label->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(gerente);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(139, -11, 591, 481));
        stackedWidget_2->setLayoutDirection(Qt::RightToLeft);
        stackedWidget_2->setStyleSheet(QStringLiteral("background-color: #faf4ee;"));
        BuscarUsuario = new QWidget();
        BuscarUsuario->setObjectName(QStringLiteral("BuscarUsuario"));
        BuscarUsuario->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 40, 181, 31));
        QFont font;
        font.setFamily(QStringLiteral("Caviar Dreams"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255,0);"));
        lineEdit = new QLineEdit(BuscarUsuario);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 80, 391, 31));
        lineEdit->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(BuscarUsuario);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 340, 381, 211));
        label_4->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255,0);"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/hot-cakes-con-miel-y-frutos-rojos.png")));
        label_4->setScaledContents(true);
        label_4->setWordWrap(false);
        Editar = new QPushButton(BuscarUsuario);
        Editar->setObjectName(QStringLiteral("Editar"));
        Editar->setGeometry(QRect(480, 60, 81, 51));
        Editar->setFocusPolicy(Qt::NoFocus);
        Editar->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(255, 255, 255, 10);}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(223, 138, 19);\n"
"}\n"
"\n"
"QPushButton:focus:pressed{ background-color:white ;\n"
"color: black; }"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/Iconos/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        Editar->setIcon(icon4);
        Editar->setIconSize(QSize(35, 35));
        tableusuario = new QTableWidget(BuscarUsuario);
        if (tableusuario->columnCount() < 6)
            tableusuario->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QStringLiteral("Id"));
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
        tableusuario->setObjectName(QStringLiteral("tableusuario"));
        tableusuario->setEnabled(true);
        tableusuario->setGeometry(QRect(30, 140, 541, 291));
        tableusuario->setMinimumSize(QSize(541, 0));
        tableusuario->setMouseTracking(true);
        tableusuario->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableusuario->setAcceptDrops(true);
        tableusuario->setLayoutDirection(Qt::LeftToRight);
        tableusuario->setStyleSheet(QStringLiteral("background-color: white;"));
        tableusuario->setFrameShape(QFrame::StyledPanel);
        tableusuario->horizontalHeader()->setHighlightSections(true);
        stackedWidget_2->addWidget(BuscarUsuario);
        label_4->raise();
        label_2->raise();
        lineEdit->raise();
        Editar->raise();
        tableusuario->raise();
        EditarUsuario = new QWidget();
        EditarUsuario->setObjectName(QStringLiteral("EditarUsuario"));
        EditarUsuario->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(210, 40, 181, 31));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255,0);"));
        label_13 = new QLabel(EditarUsuario);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(60, 80, 491, 371));
        label_13->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid; \n"
"border-radius: 10px;"));
        label_14 = new QLabel(EditarUsuario);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(110, 110, 71, 16));
        label_14->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_15 = new QLabel(EditarUsuario);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(110, 160, 131, 16));
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_16 = new QLabel(EditarUsuario);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(110, 210, 131, 16));
        label_16->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_17 = new QLabel(EditarUsuario);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(110, 260, 47, 13));
        label_17->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        puestou = new QComboBox(EditarUsuario);
        puestou->setObjectName(QStringLiteral("puestou"));
        puestou->setGeometry(QRect(240, 400, 101, 31));
        puestou->setLayoutDirection(Qt::LeftToRight);
        puestou->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"font:10pt  \"CaviarDreams_Italic\";\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_18 = new QLabel(EditarUsuario);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(100, 410, 61, 16));
        label_18->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        nomusuario = new QLineEdit(EditarUsuario);
        nomusuario->setObjectName(QStringLiteral("nomusuario"));
        nomusuario->setGeometry(QRect(250, 99, 221, 31));
        nomusuario->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        apepaterno = new QLineEdit(EditarUsuario);
        apepaterno->setObjectName(QStringLiteral("apepaterno"));
        apepaterno->setGeometry(QRect(250, 150, 221, 31));
        apepaterno->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        apematerno = new QLineEdit(EditarUsuario);
        apematerno->setObjectName(QStringLiteral("apematerno"));
        apematerno->setGeometry(QRect(250, 200, 221, 31));
        apematerno->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        edadusuario = new QLineEdit(EditarUsuario);
        edadusuario->setObjectName(QStringLiteral("edadusuario"));
        edadusuario->setGeometry(QRect(250, 250, 221, 31));
        edadusuario->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        Guardarcambios = new QPushButton(EditarUsuario);
        Guardarcambios->setObjectName(QStringLiteral("Guardarcambios"));
        Guardarcambios->setGeometry(QRect(380, 400, 142, 31));
        Guardarcambios->setStyleSheet(QLatin1String("QPushButton{;\n"
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
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(100, 300, 141, 31));
        label_19->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_20 = new QLabel(EditarUsuario);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(100, 360, 171, 16));
        label_20->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        contrasenia1 = new QLineEdit(EditarUsuario);
        contrasenia1->setObjectName(QStringLiteral("contrasenia1"));
        contrasenia1->setGeometry(QRect(250, 300, 221, 31));
        contrasenia1->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        contrasenia1->setEchoMode(QLineEdit::Password);
        contrasenia2 = new QLineEdit(EditarUsuario);
        contrasenia2->setObjectName(QStringLiteral("contrasenia2"));
        contrasenia2->setGeometry(QRect(270, 350, 201, 31));
        contrasenia2->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        contrasenia2->setEchoMode(QLineEdit::Password);
        vercontra = new QCheckBox(EditarUsuario);
        vercontra->setObjectName(QStringLiteral("vercontra"));
        vercontra->setGeometry(QRect(480, 300, 61, 41));
        vercontra->setLayoutDirection(Qt::LeftToRight);
        vercontra->setStyleSheet(QStringLiteral("  padding: 0 8px;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/Iconos/ojo.png"), QSize(), QIcon::Normal, QIcon::Off);
        vercontra->setIcon(icon5);
        label_21 = new QLabel(EditarUsuario);
        label_21->setObjectName(QStringLiteral("label_21"));
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
        AgregarUsuario->setObjectName(QStringLiteral("AgregarUsuario"));
        AgregarUsuario->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 40, 181, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255,0);"));
        label_10 = new QLabel(AgregarUsuario);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 290, 251, 221));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/img/Iconos/pan.png")));
        label_10->setScaledContents(true);
        label_3 = new QLabel(AgregarUsuario);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 521, 331));
        label_3->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid; \n"
"border-radius: 10px;"));
        edad = new QLineEdit(AgregarUsuario);
        edad->setObjectName(QStringLiteral("edad"));
        edad->setGeometry(QRect(230, 260, 281, 31));
        edad->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        agregarusuario = new QPushButton(AgregarUsuario);
        agregarusuario->setObjectName(QStringLiteral("agregarusuario"));
        agregarusuario->setGeometry(QRect(240, 360, 142, 31));
        agregarusuario->setStyleSheet(QLatin1String("QPushButton{;\n"
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
        nombreusuario->setObjectName(QStringLiteral("nombreusuario"));
        nombreusuario->setGeometry(QRect(230, 110, 281, 31));
        nombreusuario->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_8 = new QLabel(AgregarUsuario);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 260, 51, 21));
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        puestousuario = new QComboBox(AgregarUsuario);
        puestousuario->setObjectName(QStringLiteral("puestousuario"));
        puestousuario->setGeometry(QRect(230, 310, 141, 31));
        puestousuario->setLayoutDirection(Qt::LeftToRight);
        puestousuario->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"font:10pt  \"CaviarDreams_Italic\";\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_9 = new QLabel(AgregarUsuario);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 310, 61, 21));
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        apellidop = new QLineEdit(AgregarUsuario);
        apellidop->setObjectName(QStringLiteral("apellidop"));
        apellidop->setGeometry(QRect(230, 159, 281, 31));
        apellidop->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_6 = new QLabel(AgregarUsuario);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 160, 131, 21));
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        apellidom = new QLineEdit(AgregarUsuario);
        apellidom->setObjectName(QStringLiteral("apellidom"));
        apellidom->setGeometry(QRect(230, 210, 281, 31));
        apellidom->setStyleSheet(QLatin1String("border: 1px solid; \n"
"border-radius: 10px;\n"
"background-color: #faf4ee;\n"
"color:black;"));
        label_7 = new QLabel(AgregarUsuario);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 111, 91, 21));
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"font:13pt  \"CaviarDreams_BoldItalic\";\n"
"}"));
        label_11 = new QLabel(AgregarUsuario);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(90, 210, 131, 21));
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
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
        stackedWidget_2->raise();
        stackedWidget->raise();

        retranslateUi(gerente);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gerente);
    } // setupUi

    void retranslateUi(QDialog *gerente)
    {
        gerente->setWindowTitle(QApplication::translate("gerente", "Dialog", Q_NULLPTR));
        Buscar->setText(QApplication::translate("gerente", "Buscar", Q_NULLPTR));
        Agregar->setText(QApplication::translate("gerente", "Agregar", Q_NULLPTR));
        Inventario->setText(QApplication::translate("gerente", "Inventario", Q_NULLPTR));
        pushButton->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("gerente", "Buscar Usuarios", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("gerente", "ID DE EMPLEADO", Q_NULLPTR));
        label_4->setText(QString());
        Editar->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableusuario->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("gerente", "Nombre", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableusuario->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("gerente", "Apellido paterno", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableusuario->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("gerente", "Apellido materno", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableusuario->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("gerente", "Puesto", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableusuario->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("gerente", "Edad", Q_NULLPTR));
        label_12->setText(QApplication::translate("gerente", "Editar Usuario", Q_NULLPTR));
        label_13->setText(QString());
        label_14->setText(QApplication::translate("gerente", "Nombre:", Q_NULLPTR));
        label_15->setText(QApplication::translate("gerente", "Apellido paterno:", Q_NULLPTR));
        label_16->setText(QApplication::translate("gerente", "Apellido materno:", Q_NULLPTR));
        label_17->setText(QApplication::translate("gerente", "Edad:", Q_NULLPTR));
        puestou->clear();
        puestou->insertItems(0, QStringList()
         << QApplication::translate("gerente", "Cocinero", Q_NULLPTR)
         << QApplication::translate("gerente", "Mesero", Q_NULLPTR)
         << QApplication::translate("gerente", "Anfitrion", Q_NULLPTR)
         << QApplication::translate("gerente", "Gerente", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("gerente", "Puesto:", Q_NULLPTR));
        Guardarcambios->setText(QApplication::translate("gerente", "Guardar", Q_NULLPTR));
        label_19->setText(QApplication::translate("gerente", "Contrase\303\261a nueva:", Q_NULLPTR));
        label_20->setText(QApplication::translate("gerente", "Confirmar contrase\303\261a:", Q_NULLPTR));
        vercontra->setText(QString());
        label_21->setText(QString());
        label_5->setText(QApplication::translate("gerente", "Agregar Usuario", Q_NULLPTR));
        label_10->setText(QString());
        label_3->setText(QString());
        agregarusuario->setText(QApplication::translate("gerente", "Agregar", Q_NULLPTR));
        label_8->setText(QApplication::translate("gerente", "Edad:", Q_NULLPTR));
        puestousuario->clear();
        puestousuario->insertItems(0, QStringList()
         << QApplication::translate("gerente", "Cocinero", Q_NULLPTR)
         << QApplication::translate("gerente", "Gerente", Q_NULLPTR)
         << QApplication::translate("gerente", "Anfitrion", Q_NULLPTR)
         << QApplication::translate("gerente", "Mesero", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("gerente", "Puesto:", Q_NULLPTR));
        label_6->setText(QApplication::translate("gerente", "Apellido paterno:", Q_NULLPTR));
        label_7->setText(QApplication::translate("gerente", "Nombre:", Q_NULLPTR));
        label_11->setText(QApplication::translate("gerente", "Apellido materno:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gerente: public Ui_gerente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENTE_H
