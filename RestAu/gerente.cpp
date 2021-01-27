#include "gerente.h"
#include "ui_gerente.h"
#include "QPushButton"

Gerente::Gerente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gerente)
{
    ui->setupUi(this);

    conexion = QSqlDatabase::addDatabase("QODBC");
    conexion.setPort(3306);
    conexion.setHostName("root");
    conexion.setPassword("");
    conexion.setDatabaseName("restaurant");
    if(conexion.open())
        qDebug()<< "Conexión EXITOSA";
    else
        qDebug()<< "Conexión FALLIDA";

    conexion.close();

    QSqlQuery usuarios;
    usuarios.prepare("select ");
    usuarios.exec();
    while(usuarios.next()){
        if(usuarios.value(3).toString()!="Finalizado" && usuarios.value(3).toString()!="En curso" ){
            QString idmat=usuarios.value(0).toString();
            QString nombremat=usuarios.value(1).toString();
            QString periodo=usuarios.value(2).toString();
            QString estado=usuarios.value(3).toString();
            QString periodoAct=usuarios.value(4).toString();

            ui->Usuarios->insertRow(ui->Usuarios->rowCount());

            ui->Usuarios->setItem(ui->Usuarios->rowCount()-1,0,new QTableWidgetItem(idmat));

            ui->Usuarios->setItem(ui->Usuarios->rowCount()-1,1,new QTableWidgetItem(nombremat));
            ui->Usuarios->setItem(ui->Usuarios->rowCount()-1,2,new QTableWidgetItem(periodo));
            ui->Usuarios->setItem(ui->Usuarios->rowCount()-1,3,new QTableWidgetItem(estado));
            ui->Usuarios->setItem(ui->Usuarios->rowCount()-1,4,new QTableWidgetItem(periodoAct));
        }
    }

}

Gerente::~Gerente()
{
    delete ui;
}
