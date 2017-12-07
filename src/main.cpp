#include <iostream>

#include "Bank/Bank.h"
#include "Bank/BankPrinter.h"

using namespace std;

int main() {
	int i ;
	Bank::Bank bank( "Bank" );

    cout << Bank::BankPrinter( bank ) << endl;

	for( i = 5 ; i > 0; i-- ) {
		cout << "I:" << i << endl;
	}
	return 0;
}
