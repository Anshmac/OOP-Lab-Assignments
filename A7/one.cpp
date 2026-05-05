#include <iostream>
using namespace std;

class polygon {
protected:
    int width, height;
public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
    virtual void calculate_area() {}
};

class Rectangle : public polygon {
public:
    void calculate_area() override {
        cout << width * height << endl;
    }
};

class Triangle : public polygon {
public:
    void calculate_area() override {
        cout << (width * height) / 2 << endl;
    }
};

int main() {
    Rectangle r;
    Triangle t;
    
    polygon* p1 = &r;
    polygon* p2 = &t;
    
    p1->set_value(10, 5);
    p2->set_value(10, 5);
    
    p1->calculate_area();
    p2->calculate_area();
    
    return 0;
}