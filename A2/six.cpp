#include <iostream>

int var = 100;

class ScopeDemo {
public:
    static int staticVar;
    void display();
};

int ScopeDemo::staticVar = 50;

void ScopeDemo::display() {
    std::cout << "Function defined outside the class\n";
}

int main() {
    int var = 10;

    std::cout << var << "\n";
    std::cout << ::var << "\n";

    std::cout << ScopeDemo::staticVar << "\n";

    ScopeDemo obj;
    obj.display();

    int userInput;
    std::cin >> userInput;
    std::cout << userInput << "\n";

    return 0;
}