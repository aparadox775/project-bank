#include "coustomer.hpp"


coustomer::coustomer(/* args */)
{
}

coustomer::~coustomer()
{
}

const std::string& coustomer::GetName() const
{
    return name;
}

void coustomer::SetName(const std::string& name)
{
    coustomer::name = name;
}

const std::string& coustomer::GetId() const
{
    return id;
}

void coustomer::SetId(const std::string& id)
{
    coustomer::id = id;
}

const std::string& coustomer::GetShsh() const
{
    return shsh;
}

void coustomer::SetShsh(const std::string& shsh)
{
    coustomer::shsh = shsh;
}

const std::string& coustomer::GetWorkAdress() const
{
    return workAdress;
}

void coustomer::SetWorkAdress(const std::string& workAdress)
{
    coustomer::workAdress = workAdress;
}

const std::string& coustomer::GetHomeAdrees() const
{
    return homeAdrees;
}

void coustomer::SetHomeAdrees(const std::string& homeAdrees)
{
    coustomer::homeAdrees = homeAdrees;
}

const std::string& coustomer::GetEMail() const
{
    return eMail;
}

void coustomer::SetEMail(const std::string& eMail)
{
    coustomer::eMail = eMail;
}

const std::vector<account*>& coustomer::GetAccounts() const
{
    return accounts;
}

void coustomer::SetAccounts(const std::vector<account*>& accounts)
{
    coustomer::accounts = accounts;
}

const phoneNumber& coustomer::GetNumbers() const
{
    return numbers;
}

void coustomer::SetNumbers(const phoneNumber& numbers)
{
    coustomer::numbers = numbers;
}

const date& coustomer::GetAssingmentDate() const
{
    return assingmentDate;
}

void coustomer::SetAssingmentDate(const date& assingmentDate)
{
    coustomer::assingmentDate = assingmentDate;
}

const date& coustomer::GetBirthDate() const
{
    return birthDate;
}

void coustomer::SetBirthDate(const date& birthDate)
{
    coustomer::birthDate = birthDate;
}

