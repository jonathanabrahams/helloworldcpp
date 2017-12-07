#ifndef BANK_BANKPRINTER_H
#define BANK_BANKPRINTER_H

#include "Bank.h"
#include <iostream>

namespace Bank
{
	class BankPrinter
	{
	    public:
		    BankPrinter( Bank& bank );
		    void print( ostream& stream ) const;

		private:
		    Bank& bank;
	};

	ostream& operator<<( ostream& stream, const BankPrinter& bs );
}

#endif
