#include <iostream>
#include <ctime>
#include <cmath>

class Motorbike : public Vehicle {
public:
    Motorbike() { foo = 3; }
    int getParkingDuration() const override {
        int duration = Vehicle::getParkingDuration();
        return static_cast<int>(duration * 0.85);
    }
};