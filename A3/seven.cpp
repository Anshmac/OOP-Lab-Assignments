#include <iostream>
using namespace std;

class Test {
public:
    int n;
};

Test byValue(Test obj) {
    obj.n = 100; 
    return obj;
}

Test* byAddress(Test* ptr) {
    ptr->n = 200; 
    return ptr;
}

int main() {
    Test t1, t2;
    t1.n = 10;
    t2.n = 10;

    Test result1 = byValue(t1);
    cout << "Pass by Value: " << endl;
    cout << "Original object: " << t1.n << " | Returned object: " << result1.n << endl;

    Test* result2 = byAddress(&t2); 
    cout << "\nPass by Address: " << endl;
    cout << "Original object: " << t2.n << " | Returned object: " << result2->n << endl;

    return 0;
}