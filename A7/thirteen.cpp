#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    double r, a;
public:
    Polar(double radius, double angle) {
        r = radius;
        a = angle;
    }
    
    double getR() { return r; }
    double getA() { return a; }
};

class Cartesian {
    double x, y;
public:
    Cartesian() {
        x = 0;
        y = 0;
    }
    
    Cartesian(Polar p) {
        x = p.getR() * cos(p.getA());
        y = p.getR() * sin(p.getA());
    }
    
    void show() {
        cout << "Cartesian coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Polar p(10, 5); 
    
    Cartesian c = p; 
    
    c.show();
    
    return 0;
}