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
            void setName( string name );
            bool operator==( const Account& rhs) const;

        private:
            string name;
    };
}

#endif