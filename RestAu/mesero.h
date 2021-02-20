#ifndef MESERO_H
#define MESERO_H

#include <QWidget>
#include <QString>
#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <qdebug.h>

namespace Ui {
class mesero;
}

class mesero : public QDialog
{
    Q_OBJECT

public:
    explicit mesero(int Id,QWidget *parent = nullptr);
    ~mesero();

private slots:





    void on_Salir_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_Buscar_clicked();

    void on_NuevoPedido_clicked();

private:
    Ui::mesero *ui;
    QSqlDatabase  conexion;
    QString Id;

};

#endif // MESERO_H
