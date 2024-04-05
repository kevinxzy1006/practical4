#include <iostream>
#include <ctime>
#include <cmath>

class Vehicle {
private:
    std::time_t timeOfEntry;
protected:
    int foo;
public:
    Vehicle() : timeOfEntry(std::time(nullptr)), foo(0) {}
    virtual ~Vehicle() {}
    int getFoo() const { return foo; }
    std::time_t getTimeOfEntry() const { return timeOfEntry; }
    virtual int getParkingDuration() const {
        return static_cast<int>(std::time(nullptr) - timeOfEntry);
    }
};