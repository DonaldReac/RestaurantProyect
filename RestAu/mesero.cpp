#include "mesero.h"
#include "ui_mesero.h"
#include "iniciosesion.h"
#include "QStandardItemModel"

#define STR_EQUAL 0
mesero::mesero(int Id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mesero)
{
    this->Id = Id;
    this->Id.toUInt();
    ui->setupUi(this);

    QStringList elementos;

    ui->TablaPlatillos->setColumnCount(5);
    elementos << "ID Platillo" << "Nombre" << "Descripcion " << "Raciones" << "Costo" << "Tipo";
    ui->TablaPlatillos->setHorizontalHeaderLabels(elementos);

    QSqlQuery Platillos;
    Platillos.prepare("select idcomida,nombre,descripcion,raciones,costo,tipo from comida");
    Platillos.exec();

    while(Platillos.next()){

        QString idplatillo = Platillos.value(0).toString();
        QString nombre = Platillos.value(1).toString();
        QString descripcion = Platillos.value(2).toString();
        QString raciones = Platillos.value(3).toString();
        QString costo = Platillos.value(4).toString();
        QString tipo = Platillos.value(5).toString();

        ui->TablaPlatillos->insertRow(ui->TablaPlatillos->rowCount());

        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,0,new QTableWidgetItem(idplatillo));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,1,new QTableWidgetItem(nombre));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,2,new QTableWidgetItem(descripcion));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,3,new QTableWidgetItem(raciones));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,4,new QTableWidgetItem(costo));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,5,new QTableWidgetItem(tipo));

    }
}

mesero::~mesero()
{
    delete ui;
}

void mesero::on_Salir_clicked()
{
    close();
    InicioSesion * Volver = new InicioSesion();
    Volver->show();

}

void mesero::on_lineEdit_textChanged(const QString &arg1)
{
    ui->TablaPlatillos->setColumnCount(0);
    ui->TablaPlatillos->setRowCount(0);

    QStringList elementos;

    ui->TablaPlatillos->setColumnCount(5);
    elementos << "ID Platillo" << "Nombre" << "Descripcion " << "Raciones" << "Costo" << "Tipo";
    ui->TablaPlatillos->setHorizontalHeaderLabels(elementos);

    QSqlQuery BuscaPlatillo;
    BuscaPlatillo.prepare("select idcomida,nombre,descripcion,raciones,costo,tipo from comida where idcomida like '%"+arg1+"%' ");
    BuscaPlatillo.exec();

    while(BuscaPlatillo.next()){

        QString idplatillo = BuscaPlatillo.value(0).toString();
        QString nombre = BuscaPlatillo.value(1).toString();
        QString descripcion = BuscaPlatillo.value(2).toString();
        QString raciones = BuscaPlatillo.value(3).toString();
        QString costo = BuscaPlatillo.value(4).toString();
        QString tipo = BuscaPlatillo.value(5).toString();

        ui->TablaPlatillos->insertRow(ui->TablaPlatillos->rowCount());

        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,0,new QTableWidgetItem(idplatillo));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,1,new QTableWidgetItem(nombre));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,2,new QTableWidgetItem(descripcion));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,3,new QTableWidgetItem(raciones));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,4,new QTableWidgetItem(costo));
        ui->TablaPlatillos->setItem(ui->TablaPlatillos->rowCount()-1,5,new QTableWidgetItem(tipo));
    }
}

void mesero::on_Buscar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void mesero::on_NuevoPedido_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
