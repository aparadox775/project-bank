#ifndef COUSTOMER_H
#define COUSTOMER_H

#include <iostream>
#include <vector>
#include "account.hpp"


struct phoneNumber
{
    std::string cel;
    std::string home;
};

class coustomer
{
private:
    std::string name;
    std::string id;
    std::string shsh;
    std::string workAdress;
    std::string homeAdrees;
    std::string eMail;

    std::vector<account*> accounts;


    phoneNumber numbers;


    date assingmentDate;
    date birthDate;

public:
    coustomer();



    // coustomer(std::string,std::string,std::string,std::string,std::string);
    ~coustomer();

    const std::string& GetName() const;
    void SetName(const std::string& name);

    const std::string& GetId() const;
    void SetId(const std::string& id);

    const std::string& GetShsh() const;
    void SetShsh(const std::string& shsh);

    const std::string& GetWorkAdress() const;
    void SetWorkAdress(const std::string& workAdress);

    const std::string& GetHomeAdrees() const;
    void SetHomeAdrees(const std::string& homeAdrees);

    const std::string& GetEMail() const;
    void SetEMail(const std::string& eMail);

    std::vector<account*>& GetAccounts();
    void SetAccounts(const std::vector<account*>& accounts);

    const phoneNumber& GetNumbers() const;
    void SetNumbers(const phoneNumber& numbers);

    const date& GetAssingmentDate() const;
    void SetAssingmentDate(const date& assingmentDate);

    const date& GetBirthDate() const;
    void SetBirthDate(const date& birthDate);
};

#endif