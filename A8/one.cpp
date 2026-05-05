#include <iostream>
using namespace std;

template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    mySwap(x, y);
    cout << x << " " << y << endl;

    double d1 = 1.5, d2 = 4.5;
    mySwap(d1, d2);
    cout << d1 << " " << d2 << endl;

    char c1 = 'A', c2 = 'Z';
    mySwap(c1, c2);
    cout << c1 << " " << c2 << endl;

    return 0;
}