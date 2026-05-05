#include <iostream>

namespace First {
    int x = 5;
    void print() {
        std::cout << "Inside First\n";
    }
}

namespace Second {
    int x = 10;
    void print() {
        std::cout << "Inside Second\n";
    }
}

int main() {
    std::cout << First::x << "\n";
    First::print();

    std::cout << Second::x << "\n";
    Second::print();

    using namespace First;
    std::cout << x << "\n";
    print();

    return 0;
}