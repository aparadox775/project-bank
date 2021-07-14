//
// Created by aparadox775 on 7/7/21.
//

#ifndef GOLS_BANK_HPP
#define GOLS_BANK_HPP

#include <vector>
#include <algorithm>
#include "account.hpp"
#include "coustomer.hpp"
#include "boxOfficeEmployee.hpp"

class bank
{
private:
    account bankacc;
    std::vector<coustomer *> coustomers;
public:
    std::vector<account *> getCoustomeracc(std::string);
    std::vector<coustomer *> searchName(std::string);
    std::vector<coustomer *> searchId(std::string);
    std::vector<coustomer *> searchAccNum(std::string);
    std::vector<account *> getacc(coustomer *);
    coustomer * cardSearch(std::string);
    std::vector<coustomer *> bDateSearch(date);
    std::vector<coustomer *> morethanBalance(unsigned long int);
    std::vector<account *> accInitEarlierThanOwner();
    //if the input bool == true --> it will increase the account balane
    bool trsnriction (boxOfficeEmployee *,bool,unsigned long ,account *);

    void addCoustomers(coustomer * coustomers);

    bank();
};


#endif //GOLS_BANK_HPP
