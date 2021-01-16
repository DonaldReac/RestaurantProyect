/********************************************************************************
** Form generated from reading UI file 'iniciosesion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIOSESION_H
#define UI_INICIOSESION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InicioSesion
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InicioSesion)
    {
        if (InicioSesion->objectName().isEmpty())
            InicioSesion->setObjectName(QString::fromUtf8("InicioSesion"));
        InicioSesion->resize(800, 600);
        centralwidget = new QWidget(InicioSesion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        InicioSesion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InicioSesion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        InicioSesion->setMenuBar(menubar);
        statusbar = new QStatusBar(InicioSesion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InicioSesion->setStatusBar(statusbar);

        retranslateUi(InicioSesion);

        QMetaObject::connectSlotsByName(InicioSesion);
    } // setupUi

    void retranslateUi(QMainWindow *InicioSesion)
    {
        InicioSesion->setWindowTitle(QApplication::translate("InicioSesion", "InicioSesion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InicioSesion: public Ui_InicioSesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIOSESION_H
