#include <iostream>
using namespace std;

class SecretBox {
private:
    int secretCode;
    double accountBalance;

public:
    SecretBox(int code, double balance) {
        secretCode = code;
        accountBalance = balance;
    }
    friend class Inspector;
};

class Inspector {
public:
    void auditBox(SecretBox box) {
        cout << "--- Inspector Audit Report ---\n";
        cout << "Secret Code: " << box.secretCode << "\n";
        cout << "Account Balance: $" << box.accountBalance << "\n";
    }
};

int main() {
    SecretBox myBox(8675309, 50000.50);
    Inspector bankAuditor;
    bankAuditor.auditBox(myBox);

    return 0;
}