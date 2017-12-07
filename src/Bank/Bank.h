#ifndef BANK_BANK_H
#define BANK_BANK_H

#include <string>

using namespace std;

namespace Bank
{
	class Bank
	{
	    public:
		    Bank( string name = "" );
		    string getName( ) const;
		    void setName( string name );
		    ~Bank( );

		private:
		    string name;
	};
}

#endif
