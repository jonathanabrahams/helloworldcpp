#include <iostream>

#include "Bank/Bank.h"
#include "Bank/Printer.h"

using namespace std;

int main() {
	int i ;
	Bank::Bank bank( "Bank" );

    cout << Bank::Printer( bank ) << endl;

	for( i = 5 ; i > 0; i-- ) {
		cout << "I:" << i << endl;
	}
	return 0;
}
