#include <iostream>

#include "Bank/Bank.h"
#include "Bank/Printer.h"
#include "Bank/Account.h"

using namespace std;

int main() {
	int i ;
	Bank::Bank bank( "Bank" );
    Bank::Account account( "Account" );

    cout << Bank::Printer( bank ) << endl;
    cout << account.getName() << endl;

	for( i = 5 ; i > 0; i-- ) {
		cout << "I:" << i << endl;
	}
	return 0;
}
