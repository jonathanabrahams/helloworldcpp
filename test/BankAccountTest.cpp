#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Bank/Bank.h"
#include "Bank/Account.h"

TEST( BankAccountTest, bank_add_account )
{
    Bank::Bank bank( "Bank1" );
    Bank::Account account1( "Account1" );

    bank.addAccount( account1 );
    ASSERT_THAT( bank.getAccounts(), ::testing::ElementsAre( account1 ) );
}
