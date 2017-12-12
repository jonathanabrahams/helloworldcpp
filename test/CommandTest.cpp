#include "Command/MockICommand.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
using ::testing::AtLeast;

TEST( CommandTest, mock_icommand )
{
    MockICommand cmd;
    EXPECT_CALL( cmd, execute() ).Times(0);
}