#include "cocinero.h"
#include "ui_cocinero.h"
#include "iniciosesion.h"
#include "QStandardItemModel"
#include "QPrintDialog"
#include <QPrinter>
#include <string>
#include "string"
#include "QPrintDialog"
#include <QPdfWriter>
#include <QTextDocument>
#include <QDesktopServices>
#include <QPainter>

cocinero::cocinero(int id,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cocinero)
{
    this->id=id;
    this->id.toUInt();
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    ui->ordenMesa->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ordenMesa->setDragEnabled(true);
    ui->ordenMesa->setDragDropMode(QAbstractItemView::DragDrop);
    ui->ordenMesa->viewport()->setAcceptDrops(false);
    ui->ordenMesa->setDropIndicatorShown(true);
}

cocinero::~cocinero()
{
    delete ui;
}

void cocinero::on_Ordenes_Mesas_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void cocinero::on_salida_clicked()
{
    close();
    InicioSesion *regresa= new InicioSesion();
    regresa->show();
}


void cocinero::on_Mesa_1_clicked()
{
    conexion.open();
    QSqlQuery Orden;
    ui->ordenMesa->clear();
    QString mesa ="Mesa 1: \n";
    QListWidgetItem * menu = new QListWidgetItem;
    menu->setText(mesa);
    ui->ordenMesa->addItem(mesa);

    Orden.prepare("select nombre from comida inner join orden on orden.idComida=comida.idComida and orden.mesa_idMesa=1 ");
    Orden.exec();
    while(Orden.next()){
        QString orden=Orden.value(0).toString();
            QString datos =orden+"\n";
            QListWidgetItem * menu = new QListWidgetItem;
            menu->setText(datos);
            ui->ordenMesa->addItem(datos);
    }
}


void cocinero::on_Mesa_2_clicked()
{
    conexion.open();
    QSqlQuery Orden;
    ui->ordenMesa->clear();
    QString mesa ="Mesa 2: \n";
    QListWidgetItem * menu = new QListWidgetItem;
    menu->setText(mesa);
    ui->ordenMesa->addItem(mesa);

    Orden.prepare("select nombre from comida inner join orden on orden.idComida=comida.idComida and orden.mesa_idMesa=2 ");
    Orden.exec();
    while(Orden.next()){
        QString orden=Orden.value(0).toString();
            QString datos =orden+"\n";
            QListWidgetItem * menu = new QListWidgetItem;
            menu->setText(datos);
            ui->ordenMesa->addItem(datos);
    }
}

void cocinero::on_Mesa_3_clicked()
{
    conexion.open();
    QSqlQuery Orden;
    ui->ordenMesa->clear();
    QString mesa ="Mesa 3: \n";
    QListWidgetItem * menu = new QListWidgetItem;
    menu->setText(mesa);
    ui->ordenMesa->addItem(mesa);

    Orden.prepare("select nombre from comida inner join orden on orden.idComida=comida.idComida and orden.mesa_idMesa=3 ");
    Orden.exec();
    while(Orden.next()){
        QString orden=Orden.value(0).toString();
            QString datos =orden+"\n";
            QListWidgetItem * menu = new QListWidgetItem;
            menu->setText(datos);
            ui->ordenMesa->addItem(datos);
    }
}
