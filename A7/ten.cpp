#include <iostream>
using namespace std;

class Test {
private:
    float value;
public:
    Test() {
        value = 0.0;
    }
    
    Test(float v) {
        value = v;
    }
    
    void display() {
        cout << value << endl;
    }
};

int main() {
    float basicType = 45.75;
    
    Test obj = basicType;
    
    obj.display();
    
    return 0;
}