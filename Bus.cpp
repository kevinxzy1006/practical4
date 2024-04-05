#include <iostream>
#include <ctime>
#include <cmath>

class Bus : public Vehicle {
public:
    Bus() { foo = 2; }
    int getParkingDuration() const override {
        int duration = Vehicle::getParkingDuration();
        return static_cast<int>(duration * 0.75);
    }
};