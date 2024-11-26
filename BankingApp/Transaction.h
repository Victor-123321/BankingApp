#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Account.h"

class Transaction {
private:
    Account* senderAccount;
    Account* receiverAccount;
    double amount;

public:
    Transaction(Account* sender, Account* receiver, double amt);

    bool processTransaction();
    void displayTransactionInfo() const;
};

#endif 

