#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point() {
        x = 0;
        y = 0;
    }
    
    friend istream& operator>>(istream& in, Point& p);
    friend ostream& operator<<(ostream& out, const Point& p);
};

istream& operator>>(istream& in, Point& p) {
    in >> p.x >> p.y;
    return in;
}

ostream& operator<<(ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

int main() {
    Point p1;
    
    cout << "Enter x and y coordinates: ";
    cin >> p1;
    
    cout << "The point is: " << p1 << endl;
    
    return 0;
}