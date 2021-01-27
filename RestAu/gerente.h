#ifndef GERENTE_H
#define GERENTE_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <qdebug.h>
namespace Ui {
class gerente;
}

class gerente : public QDialog
{
    Q_OBJECT

public:
    explicit gerente(QWidget *parent = nullptr);
    ~gerente();

private slots:
    void on_pushButton_2_clicked();
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_Buscar_clicked();

    void on_Editar_clicked();

private:
    Ui::gerente *ui;
    QSqlDatabase  conexion;
};

#endif // GERENTE_H
