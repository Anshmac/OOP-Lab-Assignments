#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[100];
    int top;
public:
    Stack() {
        top = -1;
    }

    void push(T val) {
        if (top >= 99) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.pop();
    intStack.pop();

    cout << endl;

    Stack<double> doubleStack;
    doubleStack.push(3.14);
    doubleStack.push(9.81);
    doubleStack.pop();

    return 0;
}