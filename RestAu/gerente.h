#ifndef GERENTE_H
#define GERENTE_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <qdebug.h>

namespace Ui {
class Gerente;
}

class Gerente : public QDialog
{
    Q_OBJECT

public:
    explicit Gerente(QWidget *parent = nullptr);
    ~Gerente();

private:
    Ui::Gerente *ui;
    QSqlDatabase  conexion;
};

#endif // GERENTE_H
