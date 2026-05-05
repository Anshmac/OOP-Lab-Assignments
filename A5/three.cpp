#include <iostream>
using namespace std;

class Base {
public:
    int pub;
protected:
    int prot;
private:
    int priv;
};

class DerivedProtected : protected Base {
public:
    void accessMembers() {
        pub = 1;  
        prot = 2; 
    }
};

class DerivedPrivate : private Base {
public:
    void accessMembers() {
        pub = 3;  
        prot = 4; 
    }
};

int main() {
    DerivedProtected obj1;
    obj1.accessMembers();

    DerivedPrivate obj2;
    obj2.accessMembers();

    return 0;
}