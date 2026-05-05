#include <iostream>
using namespace std;

class Student {
public:
    virtual void process() = 0; 
};

class Engineering : public Student {
public:
    void process() override {
        cout << "Processing Engineering Student" << endl;
    }
};

class Medicine : public Student {
public:
    void process() override {
        cout << "Processing Medicine Student" << endl;
    }
};

class Science : public Student {
public:
    void process() override {
        cout << "Processing Science Student" << endl;
    }
};

int main() {
    Engineering eng;
    Medicine med;
    Science sci;

    Student* students[3];

    students[0] = &eng;
    students[1] = &med;
    students[2] = &sci;

    for (int i = 0; i < 3; i++) {
        students[i]->process();
    }

    return 0;
}