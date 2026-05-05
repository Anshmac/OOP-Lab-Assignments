#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream f1("alphabet.txt");
    f1 << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    f1.close();

    ifstream f2("alphabet.txt");
    f2.seekg(9, ios::beg);
    char c10;
    f2.get(c10);
    cout << "10th: " << c10 << endl;
    f2.close();

    fstream f3("alphabet.txt", ios::in | ios::out);
    f3.seekp(4, ios::beg);
    f3.put('5');
    f3.close();

    ifstream f4("alphabet.txt");
    f4.seekg(0, ios::end);
    cout << "Size: " << f4.tellg() << endl;

    f4.seekg(-1, ios::end);
    char last;
    f4.get(last);
    cout << "Last: " << last << endl;
    f4.close();

    ofstream f5("data.txt");
    f5 << "Line One\nLine Two\nLine Three\nLine Four";
    f5.close();

    ifstream f6("data.txt");
    f6.seekg(10, ios::beg);
    cout << "Pos: " << f6.tellg() << endl;

    char ch;
    while (f6.get(ch)) {
        cout << ch;
    }
    cout << endl;
    f6.close();

    return 0;
}