#include "Bank.h"

using namespace std;

namespace Bank
{
    Bank::Bank( string name ) : name( name ) { }

    void Bank::addAccount( Account a )
    {
        this->accounts_.push_back( a );
    }

    vector<Account> Bank::getAccounts( )
    {
        return this->accounts_;
    }

    string Bank::getName( ) const
    {
        return name;
    }

    void Bank::setName( string name )
    {
        this->name = name;
    }

    Bank::~Bank( )
    {
        name.clear();
    }

}