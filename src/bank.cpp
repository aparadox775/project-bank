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
    for (coustomer* temp: coustomers)
    {
        if (temp->GetId() == id)

            return temp->GetAccounts();
    }
}

std::vector<coustomer*> bank::searchName(std::string nameInput)
{
    std::vector<coustomer*> ret;
    for (coustomer* temp:this->coustomers)
    {
        if (temp->GetName() == nameInput)
            ret.push_back(temp);
    }
    return ret;


}

std::vector<coustomer*> bank::searchAccNum(std::string accNumInput)
{
    std::vector<coustomer*> ret;
    std::vector<account*> accTemp;
    for (coustomer* temp:this->coustomers)
    {
        accTemp = temp->GetAccounts();
        for (account* tempAcc: accTemp)
        {
            if (tempAcc->GetAccountId() == accNumInput)
                ret.push_back(temp);
        }
    }
    return ret;
}

std::vector<coustomer*> bank::searchId(std::string id)
{
    std::vector<coustomer*> ret;
    for (coustomer* temp:this->coustomers)
    {
        if (temp->GetId() == id)
            ret.push_back(temp);
    }
    return ret;
}

std::vector<account*> bank::getacc(coustomer* cos)
{
    return this->getCoustomeracc(cos->GetId());
}

coustomer* bank::cardSearch(std::string inId)
{
    for (coustomer* temp: this->coustomers)
    {
        for (account* acTemp: temp->GetAccounts())
        {
            if (acTemp->GetAccountId() == inId)
                return temp;
        }
    }

}

std::vector<coustomer*> bank::bDateSearch(date input)
{
    std::vector<coustomer*> forRet;
    for (coustomer* temp: coustomers)
    {
        if (temp->GetBirthDate().tostdString() == input.tostdString())
            forRet.push_back(temp);

    }
    return forRet;

}

std::vector<coustomer*> bank::morethanBalance(unsigned long int input)
{
    std::vector<coustomer*> forRet;
    for (coustomer* temp: coustomers)
    {
        for (account* acTemp :temp->GetAccounts())
        {
            if (acTemp->GetBalance() > input)
            {
                forRet.push_back(temp);
                break;
            }
        }
    }
    return forRet;

}

std::vector<account*> bank::accInitEarlierThanOwner()
{
    std::vector<account*> forRet;
    for (coustomer* temp: this->coustomers)
    {
        for (account* accTemp: temp->GetAccounts())
        {
            if (accTemp->GetAccountInitDate().year < temp->GetAssingmentDate().year)
            {
                forRet.push_back(accTemp);
                break;
            }
            if (accTemp->GetAccountInitDate().mounth < temp->GetAssingmentDate().mounth)
            {
                forRet.push_back(accTemp);
                break;
            }
            if (accTemp->GetAccountInitDate().day < temp->GetAssingmentDate().day)
            {
                forRet.push_back(accTemp);
                break;
            }
        }

    }
    return forRet;

}

bool bank::trsnriction(boxOfficeEmployee* office, bool increase, unsigned long amount, account* acc)
{
    bool suc;
    if (increase)
        suc = acc->increas(amount);
    else
        suc = acc->decrease(amount);
    return suc;
}

void bank::addCoustomers(coustomer * coustomers)
{
    this->coustomers.push_back(coustomers);
}
