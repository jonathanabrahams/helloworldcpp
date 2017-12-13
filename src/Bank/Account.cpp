#include "Account.h"

using namespace std;

namespace Bank
{
    Account::Account( ) : Object () {}

    Account::Account( string name ) : name( name ) { }

    string Account::getName( ) const
    {
        return name;
    }

    void Account::setName( string name )
    {
        this->name = name;
    }

    bool Account::operator==( const Account& rhs ) const
    {
        return this->getName() == rhs.getName();
    }
}