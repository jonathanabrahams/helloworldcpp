#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Bank/Bank.h"
#include "Bank/Account.h"

using ::testing::ElementsAre;

TEST( BankAccountsTest, bank_add_accounts_find_account )
{
    Bank::Bank bank( "Bank1" );
    Bank::Account account1( "Account1" );
    Bank::Account account2( "Account2" );

    bank.addAccount( account1 );
    bank.addAccount( account2 );

    Bank::Account account3 = bank.getAccount("Account1");
    EXPECT_EQ( account3.getName(), "Account1" );

    ASSERT_THAT( bank.getAccounts(), ElementsAre( account1, account2 ) );
}
