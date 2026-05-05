#include <iostream>
using namespace std;

template <typename T>
void process(T a) {
    cout << "Single parameter: " << a << endl;
}

template <typename T>
void process(T a, T b) {
    cout << "Two parameters (same type): " << a << ", " << b << endl;
}

template <typename T1, typename T2>
void process(T1 a, T2 b) {
    cout << "Two parameters (different types): " << a << ", " << b << endl;
}

int main() {
    process(50);
    
    process(3.14, 2.71);
    
    process("Value", 100);
    
    return 0;
}