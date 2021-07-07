#include "account.hpp"
account::account(/* args */)
{
}

account::~account()
{
}

unsigned long int account::GetBalance() const
{
    return balance;
}

void account::SetBalance(unsigned long int balance)
{
    account::balance = balance;
}

const std::string& account::GetAccountId() const
{
    return accountID;
}

void account::SetAccountId(const std::string& accountId)
{
    accountID = accountId;
}

const date& account::GetAccountInitDate() const
{
    return accountInitDate;
}

void account::SetAccountInitDate(const date& accountInitDate)
{
    account::accountInitDate = accountInitDate;
}
