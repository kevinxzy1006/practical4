#include <iostream>
#include <ctime>
#include <cmath>

class Car : public Vehicle {
public:
    Car() { foo = 1; }
    int getParkingDuration() const override {
        int duration = Vehicle::getParkingDuration();
        return static_cast<int>(duration * 0.9);
    }
};