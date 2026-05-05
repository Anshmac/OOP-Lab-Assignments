#include <iostream>
using namespace std;

class Speedometer {
protected:
    int speed;
public:
    void setSpeed(int s) {
        speed = s;
    }
};

class FuelGauge {
protected:
    int fuelLevel;
public:
    void setFuelLevel(int f) {
        fuelLevel = f;
    }
};

class Thermometer {
protected:
    int temperature;
public:
    void setTemperature(int t) {
        temperature = t;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void displayDashboard() {
        cout << "Dashboard Info:" << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel: " << fuelLevel << "%" << endl;
        cout << "Engine Temp: " << temperature << " C" << endl;
    }
};

int main() {
    CarDashboard myCar;
    
    myCar.setSpeed(120);
    myCar.setFuelLevel(75);
    myCar.setTemperature(90);
    
    myCar.displayDashboard();

    return 0;
}