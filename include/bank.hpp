//
// Created by aparadox775 on 7/7/21.
//

#ifndef GOLS_BANK_HPP
#define GOLS_BANK_HPP

#include <vector>
#include <algorithm>
#include "account.hpp"
#include "coustomer.hpp"

class bank
{
private:
    account bankacc;
    std::vector<coustomer> coustomers;
public:
    std::vector<account *> getCoustomeracc(std::string);
    bank();
};


#endif //GOLS_BANK_HPP
