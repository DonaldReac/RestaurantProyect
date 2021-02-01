#include "anfitrion.h"
#include "ui_anfitrion.h"
#include "iniciosesion.h"

#define STR_EQUAL 0
Anfitrion::Anfitrion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Anfitrion)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    /*Mesa.prepare("Select estado from mesa where idMesa=1;");
    Mesa.exec();*/
}

Anfitrion::~Anfitrion()
{
    delete ui;
}

void Anfitrion::on_Disponibilidad_Mesas_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void Anfitrion::on_salida_clicked()
{
    close();
    InicioSesion *regresa= new InicioSesion();
    regresa->show();
}

void Anfitrion::on_Mesa_1_clicked()
{
    conexion.open();
    QString MesaD="Disponible";
    QString MesaND="No Disponible";
    QSqlQuery Mesa;
    Mesa.prepare("Select estado from mesa where idMesa=1;");
    Mesa.exec();
    //int x = QString::compare(Mesa.Value(0), MesaD, Qt::CaseInsensitive)
    //ui->Mesa_1->setStyleSheet("QPushButton { background-color: #FFFF00; }")
    if(Mesa.next()){
        QString disponibilidad=Mesa.value(0).toString();
        if(QString::compare(MesaD, disponibilidad) == STR_EQUAL){
            ui->Mesa_1->setStyleSheet("QPushButton { background-color: #008000; }");
        }
        if(QString::compare(MesaND, disponibilidad) == STR_EQUAL){
            ui->Mesa_1->setStyleSheet("QPushButton { background-color: #FF0000; }");
        }
    }
}

void Anfitrion::on_Mesa_2_clicked()
{
    conexion.open();
    QString MesaD="Disponible";
    QString MesaND="No Disponible";
    QSqlQuery Mesa;
    Mesa.prepare("Select estado from mesa where idMesa=2;");
    Mesa.exec();
    //int x = QString::compare(Mesa.Value(0), MesaD, Qt::CaseInsensitive)
    //ui->Mesa_1->setStyleSheet("QPushButton { background-color: #FFFF00; }")
    if(Mesa.next()){
        QString disponibilidad=Mesa.value(0).toString();
        if(QString::compare(MesaD, disponibilidad) == STR_EQUAL){
            //ui->lineEdit->setStyleSheet("QLineEdit { background-color: #008000; }");
            ui->Mesa_2->setStyleSheet("QPushButton { background-color: #008000; }");
        }
        if(QString::compare(MesaND, disponibilidad) == STR_EQUAL){
            ui->Mesa_2->setStyleSheet("QPushButton { background-color: #FF0000; }");
        }
    }
}

void Anfitrion::on_Mesa_3_clicked()
{
    conexion.open();
    QString MesaD="Disponible";
    QString MesaND="No Disponible";
    QSqlQuery Mesa;
    Mesa.prepare("Select estado from mesa where idMesa=3;");
    Mesa.exec();
    //int x = QString::compare(Mesa.Value(0), MesaD, Qt::CaseInsensitive)
    //ui->Mesa_1->setStyleSheet("QPushButton { background-color: #FFFF00; }")
    if(Mesa.next()){
        QString disponibilidad=Mesa.value(0).toString();
        if(QString::compare(MesaD, disponibilidad) == STR_EQUAL){
            ui->Mesa_3->setStyleSheet("QPushButton { background-color: #008000; }");
        }
        if(QString::compare(MesaND, disponibilidad) == STR_EQUAL){
            ui->Mesa_3->setStyleSheet("QPushButton { background-color: #FF0000; }");
        }
    }
}

void Anfitrion::on_Mesa_4_clicked()
{
    conexion.open();
    QString MesaD="Disponible";
    QString MesaND="No Disponible";
    QSqlQuery Mesa;
    Mesa.prepare("Select estado from mesa where idMesa=4;");
    Mesa.exec();
    //int x = QString::compare(Mesa.Value(0), MesaD, Qt::CaseInsensitive)
    //ui->Mesa_1->setStyleSheet("QPushButton { background-color: #FFFF00; }")
    if(Mesa.next()){
        QString disponibilidad=Mesa.value(0).toString();
        if(QString::compare(MesaD, disponibilidad) == STR_EQUAL){
            ui->Mesa_4->setStyleSheet("QPushButton { background-color: #008000; }");
        }
        if(QString::compare(MesaND, disponibilidad) == STR_EQUAL){
            ui->Mesa_4->setStyleSheet("QPushButton { background-color: #FF0000; }");
        }
    }
}
