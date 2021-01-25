#include "iniciosesion.h"
#include "ui_iniciosesion.h"

InicioSesion::InicioSesion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InicioSesion)
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
}

InicioSesion::~InicioSesion()
{
    delete ui;
}

