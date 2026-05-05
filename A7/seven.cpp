#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
    int arr[10];
public:
    Array() {
        for(int i = 0; i < 10; i++) {
            arr[i] = i * 10;
        }
    }
    
    int& operator[](int index) {
        if(index < 0 || index >= 10) {
            cout << "Array index out of bounds" << endl;
            exit(0);
        }
        return arr[index];
    }
};

int main() {
    Array a;
    
    cout << a[5] << endl;
    cout << a[12] << endl; 
    
    return 0;
}