#include "createtimerwindow.h"
#include "ui_createtimerwindow.h"
#include "mainwindow.h"
#include "timer.h"
#include <QFile>

createtimerwindow::createtimerwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createtimerwindow)
{
    ui->setupUi(this);
}

createtimerwindow::~createtimerwindow()
{
    delete ui;
}

void createtimerwindow::on_AddButton_clicked()
{
    if(!ui->TimerNameLine->text().isEmpty())
    {
        if(ui->HoursCount->value() > 0 ||
           ui->MinutesCount->value() > 0 ||
           ui->SecondsCount->value() > 0)
        {
            Timer currentTimer;
            currentTimer.set_timer_name(ui->TimerNameLine->text());
            currentTimer.set_timer_hours_Interval(ui->HoursCount->value());
            currentTimer.set_timer_minutes_Interval(ui->MinutesCount->value());
            currentTimer.set_timer_seconds_Interval(ui->SecondsCount->value());
            if(ui->BeeperSignalRadioButton->isChecked())
                currentTimer.set_timer_signal(":\\sound\\sound\\1.wav");
            if(ui->MelodySignalRadioButton->isChecked())
                currentTimer.set_timer_signal(":\\sound\\sound\\2.wav");
            if(ui->NoneSignalRadioButton->isChecked())
                currentTimer.set_timer_signal("");
            QFile file("timers.dat");
            file.open(QIODevice::Append);
            QDataStream out(&file);
            out << currentTimer.get_timer_name();
            out << currentTimer.get_timer_hours_Interval();
            out << currentTimer.get_timer_minutes_Interval();
            out << currentTimer.get_timer_seconds_Interval();
            out << currentTimer.get_timer_time();
            out << currentTimer.get_timer_signal();
            out << currentTimer.is_activated();
            file.close();

            MainWindow *w = new MainWindow;
            w->setFixedSize(w->size());
            w->show();

            this->close();
        }
    }
}


void createtimerwindow::on_CancelButton_clicked()
{
    MainWindow *w = new MainWindow;
    w->setFixedSize(w->size());
    w->show();

    this->close();
}

