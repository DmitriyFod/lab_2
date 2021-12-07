#include "clock.h"

Clock::Clock()
{
    clockName = "";
    clockTime = QTime::currentTime();
    clockSignal = "";
    isActivated = false;
}

QString Clock::get_clock_name()
{
    return clockName;
}

QTime Clock::get_clock_time()
{
    return clockTime;
}

bool* Clock::get_week_days()
{
    return weekDays;
}

QString Clock::get_signal()
{
    return clockSignal;
}

bool Clock::is_activated()
{
    return isActivated;
}

void Clock::set_clock_name(const QString &newClockName)
{
    clockName = newClockName;
}

void Clock::set_clock_time(const QTime &newClockTime)
{
    clockTime = newClockTime;
}

void Clock::set_week_days(const bool newWeekDays[7])
{
    for (int i = 0; i < 7; i++)
    {
        weekDays[i] = newWeekDays[i];
    }
}

void Clock::set_signal(const QString &newSignal)
{
    clockSignal = newSignal;
}

void Clock::set_is_activated(const bool &newIsActivated)
{
    isActivated = newIsActivated;
}
