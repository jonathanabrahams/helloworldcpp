#include "Bank.h"

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
}