#ifndef CLOCK_H
#define CLOCK_H

#include <QString>
#include <QTime>
#include <QVector>

class Clock
{
private:
    QString clockName;
    QTime clockTime;
    bool weekDays[7];
    QString clockSignal;
    bool isActivated;
public:
    Clock();

    QString get_clock_name();
    QTime get_clock_time();
    bool* get_week_days();
    QString get_signal();
    bool is_activated();

    void set_clock_name(const QString &newClockName);
    void set_clock_time(const QTime &newClockTime);
    void set_week_days(const bool newWeekDays[7]);
    void set_signal(const QString &newSignal);
    void set_is_activated(const bool &newIsActivated);
};

#endif // CLOCK_H
