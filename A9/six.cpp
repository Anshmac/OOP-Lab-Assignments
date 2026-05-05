#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("hello.txt", ios::in | ios::out | ios::trunc);
    string str = "Hello World";

    for (int i = 0; i < str.length(); i++) {
        file.put(str[i]);
        cout << "Position after '" << str[i] << "': " << file.tellp() << endl;
    }

    file.seekp(6, ios::beg);
    file << "C++  "; 

    file.seekg(0, ios::beg);
    char ch;
    cout << "Final content: ";
    while (file.get(ch)) {
        cout << ch;
    }
    cout << endl;

    file.close();
    return 0;
}