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

    std::string getname();
    std::string getId();
    std::string getshsh();
    std::string getworkAdress();
    std::string getHomeAdress();
    std::string getEmail();

    std::vector<account*> getAccounts();

    phoneNumber getNumbers();

    date getAssingmentDate();
    date getBirthDate();

    std::string setname();
    std::string setId();
    std::string setshsh();
    std::string setworkAdress();
    std::string setHomeAdress();
    std::string setEmail();

    std::vector<account*> setAccounts();

    phoneNumber setNumbers();

    date setAssingmentDate();
    date setBirthDate();

    // coustomer(std::string,std::string,std::string,std::string,std::string);
    ~coustomer();
};

#endif