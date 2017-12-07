#include "gtest/gtest.h"
#include "Bank/Bank.h"

TEST( BankTest, constructor_with_name )
{
    Bank::Bank bank( "Bank1" );
    EXPECT_EQ( bank.getName(), "Bank1" );
}

TEST(BankTest, bank_object_set_name)
{
    Bank::Bank bank;
    bank.setName( "Bank2" );
    EXPECT_EQ( bank.getName(), "Bank2" );
}