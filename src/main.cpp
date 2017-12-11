#include <iostream>

#include "Bank/Bank.h"
#include "Bank/Account.h"
#include "Bank/Printer.tpp"

using namespace std;

int main() {
	int i ;
	Bank::Bank bank( "Bank" );
    Bank::Account account( "Account" );

    cout << Bank::Printer<Bank::Bank>(bank) << endl;
    cout << Bank::Printer<Bank::Account>(account) << endl;

	for( i = 5 ; i > 0; i-- ) {
		cout << "I:" << i << endl;
	}
	return 0;
}