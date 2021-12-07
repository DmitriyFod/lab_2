#include "group.h"

Group::Group()
{

}

QString Group::get_group_name()
{
    return groupName;
}

QVector<Clock> Group::get_clocks()
{
    return clocks;
}

QVector<Timer> Group::get_timers()
{
    return timers;
}

bool Group::is_activated()
{
    return isActivated;
}

void Group::set_group_name(const QString &newGroupName)
{
    groupName = newGroupName;
}

void Group::set_clocks(const QVector<Clock> &newClocks)
{
    clocks = newClocks;
}

void Group::set_timers(const QVector<Timer> &newTimers)
{
    timers = newTimers;
}

void Group::set_is_activated(const bool &newIsActivated)
{
    isActivated = newIsActivated;
}
