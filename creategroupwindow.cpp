#include "creategroupwindow.h"
#include "ui_creategroupwindow.h"

creategroupwindow::creategroupwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creategroupwindow)
{
    ui->setupUi(this);
}

creategroupwindow::~creategroupwindow()
{
    delete ui;
}
