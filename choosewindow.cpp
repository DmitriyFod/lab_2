#include "choosewindow.h"
#include "ui_choosewindow.h"
#include "mainwindow.h"
#include "createtimerwindow.h"
#include "createclockwindow.h"
#include "creategroupwindow.h"


choosewindow::choosewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choosewindow)
{
    ui->setupUi(this);
}

choosewindow::~choosewindow()
{
    delete ui;
}

void choosewindow::on_AddButton_clicked()
{
    if(ui->TimerTypesComboBox->currentText() == "Timer")
    {
        createtimerwindow *ctw = new createtimerwindow;
        ctw->setWindowTitle("Timer creation");
        ctw->show();
        this->close();
    }
    if(ui->TimerTypesComboBox->currentText() == "Clock")
    {
        createclockwindow *ccw = new createclockwindow;
        ccw->setWindowTitle("Clock creation");
        ccw->show();
        this->close();
    }
    if(ui->TimerTypesComboBox->currentText() == "Group")
    {
        creategroupwindow *cgw = new creategroupwindow;
        cgw->setWindowTitle("Group creation");
        cgw->show();
        this->close();
    }
}


void choosewindow::on_CancelButton_clicked()
{
    MainWindow *w = new MainWindow;
    w->setFixedSize(w->size());
    w->show();

    this->close();
}

