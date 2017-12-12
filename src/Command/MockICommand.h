#include "gmock/gmock.h"
#include "ICommand.h"

class MockICommand : public Command::ICommand
{
    public:
        MOCK_METHOD0( execute, void() );
};