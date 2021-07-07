#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

struct date
{
    short day;
    short mounth;
    short year;

    std::string tostdString()
    {
        std::string ret;
        ret = std::to_string(day) + "/" + std::to_string(mounth) + "/" + std::to_string(year);
        return ret;
    }

};
class account
{
private:
    unsigned int balance;
    std::string accountID;
    date accountInitDate;

public:
    account();
    ~account();

    unsigned int GetBalance() const;

    void SetBalance(unsigned int balance);

    const std::string& GetAccountId() const;

    void SetAccountId(const std::string& accountId);

    const date& GetAccountInitDate() const;

    void SetAccountInitDate(const date& accountInitDate);
};

#endif