#ifndef BANK_BANKPRINTER_H
#define BANK_BANKPRINTER_H

#include "Bank.h"
#include <iostream>

namespace Bank
{
	class Printer
	{
	    public:
		    Printer( Bank& bank );
		    void print( ostream& stream ) const;

		private:
		    Bank& bank;
	};

	ostream& operator<<( ostream& stream, const Printer& bs );
}

#endif
