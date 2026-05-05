#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "Length: " << length << endl;

    ofstream fout("char_data.txt");
    for (int i = 0; i < length; i++) {
        fout.put(str[i]);
    }
    fout.close();

    ifstream fin("char_data.txt");
    char ch;
    cout << "Fetched characters: ";
    while (fin.get(ch)) {
        cout << ch;
    }
    cout << endl;

    fin.close();
    return 0;
}