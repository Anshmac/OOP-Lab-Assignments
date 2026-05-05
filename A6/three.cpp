#include <iostream>
#include <string>

class Account {
    const long account_number;
    long transaction_id;
    std::string transaction_type;
    double balance;
    std::string history;
    static long id_counter;

public:
    Account(const long acc_num, const double initial_bal) 
        : account_number(acc_num), balance(initial_bal), transaction_id(0) {}

    long depositAmount(const long to, const long from, const double amount) {
        balance += amount;
        transaction_type = "Credit";
        transaction_id = ++id_counter;
        history += "Credit: " + std::to_string(amount) + " (From: " + std::to_string(from) + ")\n";
        return transaction_id;
    }

    long debitAmount(const long to, const long from, const double amount) {
        balance -= amount;
        transaction_type = "Debit";
        transaction_id = ++id_counter;
        history += "Debit: " + std::to_string(amount) + " (To: " + std::to_string(to) + ")\n";
        return transaction_id;
    }

    void displayDetails() const {
        std::cout << "Account Number: " << account_number << std::endl;
        std::cout << "Remaining Balance: " << balance << std::endl;
        std::cout << "Transaction History:\n" << history << std::endl;
    }
};

long Account::id_counter = 1000;

int main() {
    Account accounts[5] = {
        Account(101, 5000.0),
        Account(102, 3000.0),
        Account(103, 7000.0),
        Account(104, 2000.0),
        Account(105, 8000.0)
    };

    accounts[0].debitAmount(102, 101, 500.0);
    accounts[1].depositAmount(102, 101, 500.0);

    accounts[2].debitAmount(104, 103, 1000.0);
    accounts[3].depositAmount(104, 103, 1000.0);

    accounts[4].debitAmount(101, 105, 200.0);
    accounts[0].depositAmount(101, 105, 200.0);

    for (int i = 0; i < 5; i++) {
        accounts[i].displayDetails();
    }

    return 0;
}