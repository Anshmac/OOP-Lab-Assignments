#include <iostream>
using namespace std;

class Test {
private:
    int value;
public:
    Test(int v) {
        value = v;
    }
    
    operator float() {
        return (float)value;
    }
};

int main() {
    Test obj(125);
    
    float basicType = obj; 
    
    cout << basicType << endl;
    
    return 0;
}