#include "donotdisturbinfowindow.h"
#include "ui_donotdisturbinfowindow.h"

donotdisturbinfowindow::donotdisturbinfowindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donotdisturbinfowindow)
{
    ui->setupUi(this);
}

donotdisturbinfowindow::~donotdisturbinfowindow()
{
    delete ui;
}
