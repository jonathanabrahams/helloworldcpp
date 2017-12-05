#include "Bank.h"

using namespace std;

namespace Bank
{
    Bank::Bank()
    {
        name = "Banking";
    }

    string Bank::getName() const
    {
        return name;
    }

    Bank::~Bank()
    {
        name.clear();
    }

    ostream& operator<<(ostream& stream, const Bank& bank)
    {
        stream << "BANK : " << bank.getName() << endl;
        return stream;
    }
}