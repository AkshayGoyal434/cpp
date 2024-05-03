#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int account_number;
    string account_holder;
    double balance;

public:
    BankAccount(int number, string holder, double initial_balance) {
        account_number = number;
        account_holder = holder;
        balance = initial_balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void display_balance() {
        cout << "Account Holder: " << account_holder << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount accounts[10] = {
        BankAccount(101, "Alice", 5000),
        BankAccount(102, "Bob", 3000),
        BankAccount(103, "Charlie", 7000),
        BankAccount(104, "David", 2000),
        BankAccount(105, "Eve", 6000),
        BankAccount(106, "Frank", 4000),
        BankAccount(107, "Grace", 9000),
        BankAccount(108, "Hannah", 1500),
        BankAccount(109, "Ian", 8000),
        BankAccount(110, "Jenny", 3500)
    };

    for (int i = 0; i < 10; ++i) {
        cout << "===" << endl;
        accounts[i].display_balance();
        accounts[i].deposit(1000);
        accounts[i].withdraw(500);
        cout << "===" << endl;
    }

    return 0;
}
