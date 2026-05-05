#include <iostream>
#include <cstring>
using namespace std;

class STRING {
    char str[100];
public:
    STRING() { 
        strcpy(str, ""); 
    }
    
    STRING(const char s[]) { 
        strcpy(str, s); 
    }

    bool operator==(STRING s2) {
        if (strcmp(str, s2.str) == 0) {
            return true;
        }
        return false;
    }

    STRING operator+(STRING s2) {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s2.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    STRING s1("C++ ");
    STRING s2("Programming");
    STRING s3("C++ ");

    STRING s4 = s1 + s2;
    s4.display();

    if (s1 == s3) {
        cout << "s1 and s3 are equal" << endl;
    } else {
        cout << "s1 and s3 are not equal" << endl;
    }

    return 0;
}