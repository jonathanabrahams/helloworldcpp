#include "Account.h"

using namespace std;

namespace Bank
{
    Account::Account( string name ) : name( name ) { }

    string Account::getName( ) const
    {
        return name;
    }
}