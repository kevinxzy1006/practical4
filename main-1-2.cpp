int main() {
    ParkingLot parkingLot(10);

    while (true) {
        int choice;
        std::cout << "Enter the type of vehicle to park (1 for Car, 2 for Bus, 3 for Motorbike): ";
        std::cin >> choice;

        Vehicle *vehicle = nullptr;

        switch (choice) {
            case 1:
                vehicle = new Car();
                break;
            case 2:
                vehicle = new Bus();
                break;
            case 3:
                vehicle = new Motorbike();
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
                continue;
        }

        parkingLot.parkVehicle(vehicle);

        if (parkingLot.getCurrentCount() == 10)
            break;
    }

    int id;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> id;
    parkingLot.unparkVehicle(id);

    return 0;
}
