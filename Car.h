#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    int getParkingDuration() const override;
};

#endif // CAR_H
