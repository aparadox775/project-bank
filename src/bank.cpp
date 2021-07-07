//
// Created by aparadox775 on 7/7/21.
//

#include "bank.hpp"

bank::bank()
{
    this->bankacc.SetBalance(100000000000);
}

std::vector<account*> bank::getCoustomeracc(std::string id)
{
    for (coustomer const& temp: coustomers)
    {
        if (temp.GetId() == id)
            return temp.GetAccounts();
    }
}

