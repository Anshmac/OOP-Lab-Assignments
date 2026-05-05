#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    void setComplex(float r, float i) {
        real = r;
        imaginary = i;
    }

    void displayComplex() {
        if (imaginary < 0) {
            cout << real << " - " << -imaginary << "i" << endl;
        } else {
            cout << real << " + " << imaginary << "i" << endl;
        }
    }

    Complex add(Complex obj2) {
        Complex temp; 
        
        temp.real = real + obj2.real;
        temp.imaginary = imaginary + obj2.imaginary;
        
        return temp; 
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setComplex(3.5, 2.0);
    c2.setComplex(1.5, 4.5);

    cout << "First Complex Number: ";
    c1.displayComplex();

    cout << "Second Complex Number: ";
    c2.displayComplex();

    c3 = c1.add(c2);

    cout << "\nSum of the Complex Numbers: ";
    c3.displayComplex();

    return 0;
}