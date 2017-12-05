#ifndef BANK_BANK_H
#define BANK_BANK_H
#include <string>
using namespace std;
namespace Bank
{
	class Bank
	{
	    public:
		    Bank();
		    string getName() const;
		    ~Bank();

		private:
		    string name;
	};
}

#endif
