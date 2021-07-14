#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "card.hpp"
#include "boxOfficeEmployee.hpp"

struct date
{
    short day;
    short mounth;
    short year;

    const std::string tostdString() const
    {
        std::string ret;
        ret = std::to_string(day) + "/" + std::to_string(mounth) + "/" + std::to_string(year);
        return ret;
    }

};
class account
{
private:
    unsigned long int balance;
    std::string accountID;
    date accountInitDate;
    std::string creditCardId;
//    creditCard Card;
public:
    account();
    ~account();

    unsigned long int GetBalance() const;

    void SetBalance(unsigned long int balance);

    const std::string& GetAccountId() const;

    void SetAccountId(const std::string& accountId);

    const date& GetAccountInitDate() const;

    void SetAccountInitDate(const date& accountInitDate);
    bool increas (unsigned long int);
    bool decrease (unsinged long int );
};

#endif