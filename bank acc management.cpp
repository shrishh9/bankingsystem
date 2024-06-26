#include <iostream>

using namespace std;

//class representing bank account
class Account {
protected:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor for initializing account details
    Account(const string& number, const string& holder, double initialBalance)
        : accountNumber(number), accountHolder(holder), balance(initialBalance) {}

    // Virtual function for depositing money
    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposit: " << amount << "  Balance: " << balance << endl;
    }

    // Virtual function for withdrawing money
    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal: " << amount << "  Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }
};

// Derived class representing a savings account
class SavingsAccount : public Account {
public:
    // Constructor for initializing savings account details
    SavingsAccount(const string& number, const string& holder, double initialBalance)
        : Account(number, holder, initialBalance) {}

    // Override deposit function
    void deposit(double amount) override {
        Account::deposit(amount);
    }

    // Override withdraw function for savings account
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal: " << amount << "  Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds for withdrawal from Savings Account." << endl;
        }
    }
};

// Derived class representing a current account
class CurrentAccount : public Account {
public:
    // Constructor for initializing current account details
    CurrentAccount(const string& number, const string& holder, double initialBalance)
        : Account(number, holder, initialBalance) {}

    // Override withdraw function
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal: " << amount << "  Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }
};

// Class for gathering user input
class UserInput {
public:
    string name;
    string bankName;
    string accountNumber;
    double initialBalance;
    int accountType;  //1 for savings account, 2 for current account

    //user input
    void getUserInput() {
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your bank name: ";
        getline(cin, bankName);

        cout << "Enter your account number: ";
        getline(cin, accountNumber);

        cout << "Enter initial account balance: ";
        cin >> initialBalance;

        cout << "Choose account type:" << endl;
        cout << "1. Savings Account" << endl;
        cout << "2. Current Account" << endl;
        cin >> accountType;

        cin.ignore();  // Clear the input buffer
    }
};

int main() {
    UserInput userInput;
    userInput.getUserInput();

    Account* initialAccount;
    if (userInput.accountType == 1) {
        initialAccount = new SavingsAccount(userInput.accountNumber, userInput.name, userInput.initialBalance);
    } else if (userInput.accountType == 2) {
        initialAccount = new CurrentAccount(userInput.accountNumber, userInput.name, userInput.initialBalance);
    } else {
        cout << "Invalid account type. Exiting the program." << endl;
        return 0;
    }

    int operationChoice;
    double amount;

    while (true) {
        cout << "Choose an operation:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Exit" << endl;
        cin >> operationChoice;

        switch (operationChoice) {
            case 1:
                cout << "How much do you want to deposit? ";
                cin >> amount;
                initialAccount->deposit(amount);
                break;

            case 2:
                cout << "How much do you want to withdraw? ";
                cin >> amount;
                initialAccount->withdraw(amount);
                break;

            case 3:
                cout << "Exiting the program." << endl;
                delete initialAccount;  // Clean up allocated memory
                return 0;

            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }

    return 0;
}