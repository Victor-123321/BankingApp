#include "Account.h"
#include "Transaction.h"
#include <iostream>

using namespace std;

int main() {

    Account cuenta1(1001, "Victor Velazquez", 500.0);
    Account cuenta2(1002, "Diego Lizarraga", 300.0);

    cout << "Informacion de las cuentas antes de la transaccion:\n\n";
    cuenta1.displayAccountInfo();
    cuenta2.displayAccountInfo();

    Transaction transaction(&cuenta1, &cuenta2, 150.0);
    if (transaction.processTransaction()) {
        cout << "\n\nTransaccion realizada con exito.\n\n";
        transaction.displayTransactionInfo();
    }
    else {
        cerr << "\n\nError al procesar la transaccion.\n\n";
    }


    cout << "\n\nInformacion de las cuentas despues de la transaccion:\n\n";
    cuenta1.displayAccountInfo();
    cuenta2.displayAccountInfo();

    return 0;
}
