#include <iostream>

#include "Bank/Bank.h"
#include "Bank/Account.h"
#include "Bank/Printer.tpp"

#include "boost/uuid/uuid.hpp"            // uuid class
#include "boost/uuid/uuid_generators.hpp" // generators
#include "boost/uuid/uuid_io.hpp"         // streaming operators etc.

using namespace std;

int main() {
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    std::cout << uuid << std::endl;

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