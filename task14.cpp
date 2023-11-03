#include <iostream>
using namespace std;


class Vehicle {
protected:
    double speed;
    double fuel;

public:
    Vehicle(double s, double f) : speed(s), fuel(f) {}

    void displayInfo() {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel: " << fuel << " liters" << endl;
    }
};


class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(double s, double f, int doors) : Vehicle(s, f), numDoors(doors) {}

    void displayCarInfo() {
        cout << "Car Details:" << endl;
        displayInfo();
        cout << "Number of Doors: " << numDoors << endl;
    }
};


class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(double s, double f, bool sidecar) : Vehicle(s, f), hasSidecar(sidecar) {}

    void displayMotorcycleInfo() {
        cout << "Motorcycle Details:" << endl;
        displayInfo(); 
        cout << (hasSidecar ? "Has a Sidecar" : "Does not have a Sidecar") << endl;
    }
};

int main() {
    Car sedan(120.5, 40.0, 4);
    Motorcycle bike(80.0, 10.0, true);

    sedan.displayCarInfo();
    cout << endl;
    bike.displayMotorcycleInfo();

    return 0;
}
