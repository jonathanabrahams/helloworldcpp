#include "BankPrinter.h"

#include <iostream>

using namespace std;

namespace Bank
{
    BankPrinter::BankPrinter( Bank& bank  ) : bank( bank ) { }

    void BankPrinter::print( ostream& s ) const
    {
        s << bank.getName();
    }

    ostream& operator<<(ostream& s, const BankPrinter& bs )
    {
        bs.print(s);

        return s;
    }
}