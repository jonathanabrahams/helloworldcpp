#ifndef COMMAND_ICOMMAND_H
#define COMMAND_ICOMMAND_H
#include "ICommand.h"
#include "Bank/Bank.h"

namespace Command {

    class CreateBank : public ICommand
    {
        CreateBank(Bank& bank);
        virtual void execute();
    }
};

#endif