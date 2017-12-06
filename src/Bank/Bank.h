#ifndef BANK_BANK_H
#define BANK_BANK_H
#include <string>
#include <iostream>

using namespace std;

namespace Bank
{
	class Bank
	{
		private:
		    string name;

	    public:
		    Bank();
		    Bank( string name );
		    string getName() const;
		    void setName( string name );
		    ~Bank();

	};

	ostream& operator<<(ostream& stream, const Bank& bank);
}

#endif
