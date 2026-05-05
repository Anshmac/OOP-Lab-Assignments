#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[], int size) {
    T minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int intArr[] = {5, 2, 9, 1, 7};
    cout << findMin(intArr, 5) << "\n";

    double doubleArr[] = {3.14, 1.59, 2.65, 4.01};
    cout << findMin(doubleArr, 4) << "\n";

    char charArr[] = {'z', 'a', 'x', 'm'};
    cout << findMin(charArr, 4) << "\n";

    return 0;
}