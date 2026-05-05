#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string make;
    string model;
    int year;
};

class Truck : public Vehicle {
public:
    int load_capacity;
};

class RefrigeratedTruck : public Truck {
public:
    double temperature_control;

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Load Capacity: " << load_capacity << " tons" << endl;
        cout << "Temperature: " << temperature_control << " C" << endl;
    }
};

int main() {
    RefrigeratedTruck rt;
    
    rt.make = "Volvo";
    rt.model = "FH16";
    rt.year = 2023;
    rt.load_capacity = 25;
    rt.temperature_control = -18.5;
    
    rt.displayInfo();

    return 0;
}