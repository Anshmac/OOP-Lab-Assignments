#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T num1, num2;
public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    Calculator<int> intCalc(10, 5);
    cout << intCalc.add() << endl;
    cout << intCalc.subtract() << endl;
    cout << intCalc.multiply() << endl;
    cout << intCalc.divide() << endl;

    cout << endl;

    Calculator<double> doubleCalc(5.5, 2.0);
    cout << doubleCalc.add() << endl;
    cout << doubleCalc.subtract() << endl;
    cout << doubleCalc.multiply() << endl;
    cout << doubleCalc.divide() << endl;

    return 0;
}