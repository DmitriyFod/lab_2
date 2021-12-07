#include "createclockwindow.h"
#include "ui_createclockwindow.h"
#include "mainwindow.h"
#include "clock.h"
#include <QFile>
#include <QDebug>

createclockwindow::createclockwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createclockwindow)
{
    ui->setupUi(this);
}

createclockwindow::~createclockwindow()
{
    delete ui;
}

void createclockwindow::on_CancelButton_clicked()
{
    MainWindow *w = new MainWindow;
    w->setFixedSize(w->size());
    w->show();

    this->close();
}


void createclockwindow::on_AddButton_clicked()
{
    if(!ui->ClockNameLine->text().isEmpty())
    {
        Clock currentClock;
        bool currentWeekDays[7] = {};
        currentClock.set_clock_name(ui->ClockNameLine->text());
        currentClock.set_clock_time(ui->ClockTime->time());

        if(ui->MondayCheck->isChecked())
            currentWeekDays[0] = true;
        if(ui->TuesdayCheck->isChecked())
            currentWeekDays[1] = true;
        if(ui->WednesdayCheck->isChecked())
            currentWeekDays[2] = true;
        if(ui->ThursdayCheck->isChecked())
            currentWeekDays[3] = true;
        if(ui->FridayCheck->isChecked())
            currentWeekDays[4] = true;
        if(ui->SaturdayCheck->isChecked())
            currentWeekDays[5] = true;
        if(ui->SundayCheck->isChecked())
            currentWeekDays[6] = true;

        currentClock.set_week_days(currentWeekDays);
        if(ui->BeeperSignalRadioButton->isChecked())
            currentClock.set_signal(":\\sound\\sound\\1.wav");
        if(ui->MelodySignalRadioButton->isChecked())
            currentClock.set_signal(":\\sound\\sound\\2.wav");
        if(ui->NoneSignalRadioButton->isChecked())
            currentClock.set_signal("");

        QFile file("clocks.dat");
        file.open(QIODevice::Append);
        QDataStream out(&file);
        out << currentClock.get_clock_name();
        out << currentClock.get_clock_time();
        for (int i = 0; i < 7; i++)
        {
            out << currentClock.get_week_days()[i];
            if (currentClock.get_week_days()[i])
                currentClock.set_is_activated(true);
        }
        out << currentClock.get_signal();
        out << currentClock.is_activated();
        file.close();

        MainWindow *w = new MainWindow;
        w->setFixedSize(w->size());
        w->show();

        this->close();
    }
}

