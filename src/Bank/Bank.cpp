#include "Bank.h"

using namespace std;

namespace Bank
{
    Bank::Bank()
    {
        name = "Banking";
    }

    Bank::Bank( string name )
    {
        setName( name );
    }

    string Bank::getName() const
    {
        return name;
    }

    void Bank::setName( string name )
    {
        this->name = name;
    }

    Bank::~Bank()
    {
        name.clear();
    }

    ostream& operator<<(ostream& stream, const Bank& bank)
    {
        stream << "BANK : " << bank.getName() << endl;
        return stream;
    }
}