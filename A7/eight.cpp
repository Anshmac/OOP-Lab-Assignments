#include <iostream>
using namespace std;

class MyClass {
public:
    template<typename... Args>
    void operator()(Args... args) {
        ((cout << args << " "), ...);
        cout << endl;
    }
};

int main() {
    MyClass obj;
    
    obj(1, 2, 3);
    obj("Hello", 3.14, 'A', 42);
    obj(100);
    
    return 0;
}