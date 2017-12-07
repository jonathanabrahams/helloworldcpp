#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

using namespace std;

namespace Bank
{
    class Account
    {
        public:
            Account( string name = "" );
            string getName( ) const;

        private:
            string name;
    };
}

#endif