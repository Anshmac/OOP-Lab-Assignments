#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");
    char ch;

    if (!source) {
        cout << "Error opening source file." << endl;
        return 1;
    }

    while (source.get(ch)) {
        destination.put(ch);
    }

    cout << "File copied successfully." << endl;

    source.close();
    destination.close();

    return 0;
}