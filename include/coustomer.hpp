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
        ret = std::to_string(day) + "/" +std::to_string(mounth) + "/" + std::to_string(year);
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
    phoneNumber numbers;
    date assingmentDate;
    date birthDate;
    std::string eMail;
    std::vector<account *> accounts;
public:
    coustomer(/* args */);
    // coustomer(std::string,std::string,std::string,std::string,std::string);
    ~coustomer();
};

#endif