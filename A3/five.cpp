#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    void setDimensions() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    void displayArea() {
        cout << "Area: " << (width * height) << "\n";
    }
};

int main() {
    int const numRectangles = 3;
    Rectangle rectArray[numRectangles];
    for (int i = 0; i < numRectangles; i++) {
        cout << " Rectangle " << i + 1 << "\n";
        rectArray[i].setDimensions();
    }
    cout << "\n Final Results \n";
    for (int i = 0; i < numRectangles; i++) {
        cout << "Rectangle " << i + 1 << " ";
        rectArray[i].displayArea();
    }
    return 0;
}