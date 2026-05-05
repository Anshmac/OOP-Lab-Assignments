#include <iostream>
using namespace std;

template <typename T>
class ArrayHandler {
    T arr[100];
    int size;
public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> size;
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayHandler<int> iObj;
    iObj.input();
    iObj.display();

    ArrayHandler<float> fObj;
    fObj.input();
    fObj.display();

    return 0;
}