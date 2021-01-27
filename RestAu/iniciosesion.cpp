#include "iniciosesion.h"
#include "ui_iniciosesion.h"
#include "gerente.h"

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


void InicioSesion::on_pushButton_clicked()
{
    conexion.open();
    QString ID;
    QString Contra;
    gerente *aux= new gerente();
    aux->show();
    close();
    //ID = ui->CodigoID->text();
    //Contra = ui->Contrasena->text();

    if(ID == ""){
        //Error por si no ha ingresado nada en el campo
        //qDebug() << "Por favor ingrese una opcion. ";
        QMessageBox::critical(this,"Error","Por favor, inserte su ID.","Aceptar");
        return;
    }

    if(Contra == ""){
        //Error por si no ha ingresado nada en el campo
        //qDebug() << "Por favor ingrese una opcion. ";
        QMessageBox::critical(this,"Error","Por favor, inserte su contraseña.","Aceptar");
        return;
    }

    //Se va a hacer el query de busqueda dentro del sistema
    QSqlQuery Login;
    Login.prepare("Select idusuario, password from usuario where idusuario='"+ID+"' and password ='"+Contra+"' ;");
    Login.exec();
    //busca dentro del query
    if(Login.next()){
      //  qDebug() << "ID : " << Login.value(0);
      //  qDebug() << "Password: " << Login.value(1);
          //Si los valores coinciden tanto en la base como en los line edit
        if(Login.value(0) == ID && Login.value(1) == Contra){
            qDebug() << "Pudiste entrar al sistema. Bienvenido." ;
        }
    }
}
