#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void countAlphabets() {
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    if (!fin) {
        cout << "Error opening file." << endl;
        return;
    }

    while (fin.get(ch)) {
        if (isalpha(ch)) {
            count++;
        }
    }

    cout << "Total alphabets: " << count << endl;
    fin.close();
}

int main() {
    countAlphabets();
    return 0;
}