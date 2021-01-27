#include "gerente.h"
#include "ui_gerente.h"

gerente::gerente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gerente)
{
    ui->setupUi(this);


    QStringList titulos;
    ui->TablaUsuarios->setColumnCount(6);
    titulos<< "Id" << "Nombre" <<"Apellido Materno" << "Apellido Paterno" << "Puesto"<<"Edad";
    ui->TablaUsuarios->setHorizontalHeaderLabels(titulos);
    QSqlQuery MatAtra;
    MatAtra.prepare("select * from usuario");
    MatAtra.exec();
    while(MatAtra.next()){

            QString idusu=MatAtra.value(0).toString();
            QString nombre=MatAtra.value(1).toString();
            QString apellidom=MatAtra.value(2).toString();
            QString Apellidop=MatAtra.value(3).toString();
            QString puesto=MatAtra.value(4).toString();
            QString edad=MatAtra.value(6).toString();

            ui->TablaUsuarios->insertRow(ui->TablaUsuarios->rowCount());

            ui->TablaUsuarios->setItem(ui->TablaUsuarios->rowCount()-1,0,new QTableWidgetItem(idusu));

            ui->TablaUsuarios->setItem(ui->TablaUsuarios->rowCount()-1,1,new QTableWidgetItem(nombre));
            ui->TablaUsuarios->setItem(ui->TablaUsuarios->rowCount()-1,2,new QTableWidgetItem(apellidom));
            ui->TablaUsuarios->setItem(ui->TablaUsuarios->rowCount()-1,3,new QTableWidgetItem(Apellidop));
            ui->TablaUsuarios->setItem(ui->TablaUsuarios->rowCount()-1,4,new QTableWidgetItem(puesto));
            ui->TablaUsuarios->setItem(ui->TablaUsuarios->rowCount()-1,5,new QTableWidgetItem(edad));

    }
}

gerente::~gerente()
{
    delete ui;
}

void gerente::on_pushButton_2_clicked()
{

}
