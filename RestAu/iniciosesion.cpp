#include "iniciosesion.h"
#include "ui_iniciosesion.h"

InicioSesion::InicioSesion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InicioSesion)
{
    ui->setupUi(this);
    qDebug() << "hola";
}

InicioSesion::~InicioSesion()
{
    delete ui;
}

<<<<<<< Updated upstream
=======

void InicioSesion::on_pushButton_clicked()
{
    conexion.open();
    QString ID;
    QString Puesto;

    Gerente id(this);
    id.exec();
    //ID = ui->CodigoID->text();
    //Puesto = ui->Puesto->text();

    if(ID == ""){
        //Error por si no ha ingresado nada en el campo
        //qDebug() << "Por favor ingrese una opcion. ";
        QMessageBox::critical(this,"Error","Por favor, inserte su ID.","Aceptar");
        return;
    }
    /*
    if(Puesto == ""){
        //Error por si no ha ingresado nada en el campo
        //qDebug() << "Por favor ingrese una opcion. ";
        QMessageBox::critical(this,"Error","Por favor, inserte su puesto.","Aceptar");
        return;
    }
    */
    //Se va a hacer el query de busqueda dentro del sistema
    QSqlQuery Login;
    Login.prepare("Select idusuario, puesto from usuario where idusuario='"+ID+"';");
    Login.exec();
    //busca dentro del query
    if(Login.next()){
      //  qDebug() << "ID : " << Login.value(0);
      //  qDebug() << "Puesto: " << Login.value(1);
          //Si los valores coinciden tanto en la base como en los line edit
        Gerente id(this);
        id.exec();

        if(Login.value(0) == ID){
            qDebug() << "Pudiste entrar al sistema. Bienvenido." ;
        }
        conexion.close();
    }
}
>>>>>>> Stashed changes
