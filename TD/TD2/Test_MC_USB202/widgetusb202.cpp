#include "widgetusb202.h"
#include "ui_widgetusb202.h"
#include <QtDebug>


WidgetUSB202::WidgetUSB202(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetUSB202)
{
    ui->setupUi(this);
    laCarte.ulDConfigBit(0,DD_OUTPUT);

}

WidgetUSB202::~WidgetUSB202()
{
    delete ui;
}



void WidgetUSB202::on_checkBox_DIO0_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBox_DIO1_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBox_DIO2_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBox_DIO3_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBox_DIO4_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBox_DIO5_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBox_DIO6_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBox_DIO7_stateChanged(int arg1)
{
    UlError erreur;
    int numDio = sender()->objectName().right(1).toInt();
    erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
    qDebug() << "Code Erreur : " << erreur;
}
