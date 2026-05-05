#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int intArr[] = {10, 25, 40, 55, 70};
    int index1 = linearSearch(intArr, 5, 40);
    cout << "Index in int array: " << index1 << endl;

    double doubleArr[] = {1.5, 2.5, 3.5, 4.5};
    int index2 = linearSearch(doubleArr, 4, 3.5);
    cout << "Index in double array: " << index2 << endl;

    char charArr[] = {'x', 'y', 'z', 'w'};
    int index3 = linearSearch(charArr, 4, 'a');
    cout << "Index in char array: " << index3 << endl;

    return 0;
}