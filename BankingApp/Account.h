#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>

using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    Account(int accNum, const string& accHolder, double initialBalance);

    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
    string getName() const;
    void displayAccountInfo() const;
};

#endif 
