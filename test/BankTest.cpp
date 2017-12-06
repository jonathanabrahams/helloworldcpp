#include "gtest/gtest.h"
#include "Bank/Bank.h"

TEST(BankTest, H)
{
    Bank::Bank bank;
    EXPECT_EQ( bank.getName(), "Banking" );
}