#include "Transaction.h"

using namespace std;

Transaction::Transaction(Account* sender, Account* receiver, double amt)
    : senderAccount(sender), receiverAccount(receiver), amount(amt) {}

bool Transaction::processTransaction() {
    if (senderAccount->withdraw(amount)) {
        receiverAccount->deposit(amount);
        return true;
    }
    return false;
}

void Transaction::displayTransactionInfo() const {
    cout << "Transaccion:\n\n"
        << "De: " << senderAccount->getName() << "\n\n"
        << "Para: " << receiverAccount->getName() << "\n\n"
        << "Monto: $" << amount << "\n\n";
}
