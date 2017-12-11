#include "gtest/gtest.h"
#include "Bank/Account.h"

TEST( AccountTest, constructor_with_name )
{
    Bank::Account account( "Account1" );
    EXPECT_EQ( account.getName(), "Account1" );
}

TEST( AccountTest, set_name )
{
    Bank::Account account;
    account.setName("Account1Changed");

    EXPECT_EQ( account.getName(), "Account1Changed" );
}