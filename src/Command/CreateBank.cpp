#include "CreateBank.h"
#include "Bank/Bank.h"

namespace Command {

    class CreateBank : public ICommand
    {
        CreateBank(Bank& bank) : bank_(bank) {}

        virtual void execute()
        {
        }

    }
};

#endif