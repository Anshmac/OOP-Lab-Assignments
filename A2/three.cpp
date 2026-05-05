#include <iostream>
using namespace std;

class MyClass {
private:
    int secretValue = 42;
    void showSecret() {
        cout << "The secret value is: " << secretValue << endl;
    }

public:
    void reveal() {
        cout << "Public function called." << endl;
        showSecret(); 
    }
};

int main() {
    MyClass obj;
    obj.reveal(); 
    return 0;
}