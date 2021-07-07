#ifndef COUSTOMER_H
#define COUSTOMER_H

#include <iostream>
#include <vector>
#include "account.hpp"

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

    short GetDay() const;
};

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

    const std::vector<account*>& GetAccounts() const;
    void SetAccounts(const std::vector<account*>& accounts);

    const phoneNumber& GetNumbers() const;
    void SetNumbers(const phoneNumber& numbers);

    const date& GetAssingmentDate() const;
    void SetAssingmentDate(const date& assingmentDate);

    const date& GetBirthDate() const;
    void SetBirthDate(const date& birthDate);
};

#endif