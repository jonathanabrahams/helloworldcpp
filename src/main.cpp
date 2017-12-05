#include <iostream>
#include "Bank/Bank.h"

using namespace std;

int main() {
	int i ;
	Bank::Bank bank;

	cout << "Hello " << bank.getName() << endl;
	for( i = 5 ; i > 0; i-- ) {
		cout << "I:" << i << endl;
	}
	return 0;
}
