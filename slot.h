#ifndef SLOT_H
#define SLOT_H

enum struct Weekday {
    Monday, Tuesday, Wednesday, Thursday, Friday
};

class slot {
public:
    slot(Weekday weekday, double startHour, double duration){
        weekday_ = weekday;
        startHour_ = startHour;
        duration_ = duration;
    }

    Weekday get_weekday() const;

    void set_weekday(Weekday newValue);

    double get_startHour() const;

    void set_startHour(double newValue);

    double get_endHour() const;

    void set_duration(double newValue);
private:
    Weekday weekday_;
    double startHour_;
    double duration_;
};

#endif
