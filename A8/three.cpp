#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    
    cout << "Sorted integer array: ";
    bubbleSort(intArr, n1);
    printArray(intArr, n1);

    double doubleArr[] = {3.14, 1.59, 2.65, 4.01};
    int n2 = sizeof(doubleArr) / sizeof(doubleArr[0]);
    
    cout << "Sorted double array: ";
    bubbleSort(doubleArr, n2);
    printArray(doubleArr, n2);

    char charArr[] = {'z', 'a', 'x', 'm', 'b'};
    int n3 = sizeof(charArr) / sizeof(charArr[0]);
    
    cout << "Sorted character array: ";
    bubbleSort(charArr, n3);
    printArray(charArr, n3);

    return 0;
}