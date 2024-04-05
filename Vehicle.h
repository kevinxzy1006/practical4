#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
protected:
    int foo;
public:
    Vehicle();
    virtual ~Vehicle();
    int getFoo() const;
    std::time_t getTimeOfEntry() const;
    virtual int getParkingDuration() const;
};

#endif // VEHICLE_H
