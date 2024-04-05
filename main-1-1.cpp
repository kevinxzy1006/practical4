#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    int numCars, numBuses, numMotorbikes;

    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    Vehicle *vehicles[numCars + numBuses + numMotorbikes];

    for (int i = 0; i < numCars; i++) {
        vehicles[i] = new Car();
    }
    for (int i = 0; i < numBuses; i++) {
        vehicles[numCars + i] = new Bus();
    }
    for (int i = 0; i < numMotorbikes; i++) {
        vehicles[numCars + numBuses + i] = new Motorbike();
    }

    for (int i = 0; i < numCars + numBuses + numMotorbikes; i++) {
        std::cout << "Vehicle " << i + 1 << " parking duration: " << vehicles[i]->getParkingDuration() << " seconds\n";
        delete vehicles[i];
    }

    return 0;
}