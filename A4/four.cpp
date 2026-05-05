#include <iostream>
using namespace std;

class Box {
public:
    int value = 10;
};

int main() {
    int* pInt = new int(5);
    cout << *pInt << "\n";
    delete pInt;

    float* pFloat = new float(5.5);
    cout << *pFloat << "\n";
    delete pFloat;

    int* pIntArr = new int[2]{1, 2};
    cout << pIntArr[0] << "\n";
    delete[] pIntArr;

    float* pFloatArr = new float[2]{1.1, 2.2};
    cout << pFloatArr[0] << "\n";
    delete[] pFloatArr;

    Box* pBox = new Box();
    cout << pBox->value << "\n";
    delete pBox;

    Box* pBoxArr = new Box[2];
    cout << pBoxArr[0].value << "\n";
    delete[] pBoxArr;

    return 0;
}