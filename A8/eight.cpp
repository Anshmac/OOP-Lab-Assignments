#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;

public:

    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }


    void display() {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};

int main() {

    Pair<int, double> p1(10, 3.14);
    p1.display();

    Pair<string, int> p2("Score", 95);
    p2.display();

    Pair<char, char> p3('X', 'Y');
    p3.display();

    return 0;
}