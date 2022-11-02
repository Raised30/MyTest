#include "slot.h"

Weekday slot::get_weekday() const {
    return weekday_;
}

void slot::set_weekday(Weekday newValue) {
    weekday_ = newValue;
}

double slot::get_startHour() const {
    return startHour_;
}

void slot::set_startHour(double newValue) {
    startHour_ = newValue;
}
double slot::get_endHour() const {
    return startHour_ + duration_;
}

void slot::set_duration(double newValue) {
    duration_ = newValue;
}

