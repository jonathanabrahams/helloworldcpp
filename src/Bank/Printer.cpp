#include "Printer.h"

#include <iostream>

using namespace std;

namespace Bank
{
    Printer::Printer( Bank& bank  ) : bank( bank ) { }

    void Printer::print( ostream& s ) const
    {
        s << bank.getName();
    }

    ostream& operator<<(ostream& s, const Printer& bs )
    {
        bs.print(s);

        return s;
    }
}