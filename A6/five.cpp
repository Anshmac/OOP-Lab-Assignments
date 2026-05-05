#include <iostream>
using namespace std;

class Complex {
    int real;
    int imaginary;

public:
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    Complex(const Complex &c) {
        real = c.real;
        imaginary = c.imaginary;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    friend void sum(Complex c1, Complex c2);
};

void sum(Complex c1, Complex c2) {
    int sumReal = c1.real + c2.real;
    int sumImaginary = c1.imaginary + c2.imaginary;
    cout << sumReal << " + " << sumImaginary << "i" << endl;
}

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);
    Complex c3(c1); 

    c1.display();
    c2.display();
    c3.display();

    sum(c1, c2);

    return 0;
}