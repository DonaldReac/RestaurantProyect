#ifndef INICIOSESION_H
#define INICIOSESION_H

#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <qdebug.h>

QT_BEGIN_NAMESPACE
namespace Ui { class InicioSesion; }
QT_END_NAMESPACE

class InicioSesion : public QMainWindow
{
    Q_OBJECT

public:
    InicioSesion(QWidget *parent = nullptr);
    ~InicioSesion();

private:
    Ui::InicioSesion *ui;
    QSqlDatabase  conexion;
};
#endif // INICIOSESION_H
