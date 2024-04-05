#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle **vehicles;
    int maxCapacity;
    int currentCount;
public:
    ParkingLot(int capacity);
    ~ParkingLot();

    int getCurrentCount() const;

    void parkVehicle(Vehicle *vehicle);

    void unparkVehicle(int id);
};

#endif // PARKINGLOT_H
