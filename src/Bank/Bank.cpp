#include "Bank.h"

using namespace std;

namespace Bank
{
    Bank::Bank( string name ) : name( name ) { }

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

}