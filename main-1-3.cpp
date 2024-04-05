int main() {
    ParkingLot parkingLot(10);

    // Park 5 cars, 3 buses, and 2 motorbikes
    for (int i = 0; i < 5; ++i) {
        parkingLot.parkVehicle(new Car());
    }
    for (int i = 0; i < 3; ++i) {
        parkingLot.parkVehicle(new Bus());
    }
    for (int i = 0; i < 2; ++i) {
        parkingLot.parkVehicle(new Motorbike());
    }

    int overstayingCount = parkingLot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles overstaying in the parking lot: " << overstayingCount << std::endl;

    return 0;
}
