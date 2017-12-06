#include "gtest/gtest.h"
#include "Bank/Bank.h"

TEST(BankTest, Constructor)
{
    Bank::Bank bank;
    EXPECT_EQ( bank.getName(), "Banking" );
}

TEST(BankTest, ConstructorWithName)
{
    Bank::Bank bank("Banking Name");
    EXPECT_EQ( bank.getName(), "Banking Name" );
}

TEST(BankTest, SetName)
{
    Bank::Bank bank;
    bank.setName( "Banking Set" );
    EXPECT_EQ( bank.getName(), "Banking Set" );
}