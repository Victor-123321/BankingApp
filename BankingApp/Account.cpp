#include "Account.h"

using namespace std;

Account::Account(int accNum, const string& accHolder, double initialBalance)
    : accountNumber(accNum), accountHolder(accHolder), balance(initialBalance) {}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
    else {
        cerr << "Error: La cantidad a depositar debe ser positiva.\n\n";
    }
}

bool Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    else {
        cerr << "Error: Fondos insuficientes o cantidad invalida.\n\n";
        return false;
    }
}

double Account::getBalance() const {
    return balance;
}
string Account::getName() const {
    return accountHolder;
}

void Account::displayAccountInfo() const {
    cout << "Numero de cuenta: " << accountNumber << "\n\n"
        << "Titular de cuenta: " << accountHolder << "\n\n"
        << "Saldo: $" << balance << "\n\n";
}
