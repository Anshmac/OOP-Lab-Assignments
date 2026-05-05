#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {}
    virtual void area() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    void display() override {
        cout << "Shape: Circle" << endl;
    }
    void area() override {
        cout << "Area: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    void display() override {
        cout << "Shape: Rectangle" << endl;
    }
    void area() override {
        cout << "Area: " << length * width << endl;
    }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    void display() override {
        cout << "Shape: Triangle" << endl;
    }
    void area() override {
        cout << "Area: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle c(5.0);
    Rectangle r(4.0, 6.0);
    Triangle t(4.0, 5.0);

    shapePtr = &c;
    shapePtr->display();
    shapePtr->area();
    cout << endl;

    shapePtr = &r;
    shapePtr->display();
    shapePtr->area();
    cout << endl;

    shapePtr = &t;
    shapePtr->display();
    shapePtr->area();

    return 0;
}