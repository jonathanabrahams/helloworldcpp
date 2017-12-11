#ifndef BANK_BANK_H
#define BANK_BANK_H

#include <vector>
#include <algorithm>
#include <string>
#include "Account.h"

using namespace std;

namespace Bank
{
	class Bank
	{
	    public:
		    Bank( string name = "" );
		    void addAccount( Account a );
            vector<Account> getAccounts( );
            Account getAccount( string name );
		    string getName( ) const;
		    void setName( string name );
		    ~Bank( );

		private:
		    string name;
		    vector<Account> accounts_;
	};
}

#endif
