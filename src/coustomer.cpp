#include "coustomer.hpp"


coustomer::coustomer(/* args */)
{
}

coustomer::~coustomer()
{
}
std::string coustomer::getname(){return this->name;}
std::string coustomer::getId(){return this->id;}
std::string coustomer::getshsh(){return this->shsh;}
std::string coustomer::getworkAdress(){return this->workAdress;}
std::string coustomer::getHomeAdress(){return this->homeAdrees;}
std::string coustomer::getEmail(){return this->eMail;}

std::vector<account*> coustomer::getAccounts(){return this->accounts;}

phoneNumber coustomer::getNumbers(){return this->numbers;}

date coustomer::getAssingmentDate(){return this->assingmentDate;}
date coustomer::getBirthDate(){return this->birthDate;}

std::string coustomer::setname(){}
std::string coustomer::setId(){}
std::string coustomer::setshsh(){}
std::string coustomer::setworkAdress(){}
std::string coustomer::setHomeAdress(){}
std::string coustomer::setEmail(){}

std::vector<account*> coustomer::setAccounts(){}

phoneNumber coustomer::setNumbers(){}

date coustomer::setAssingmentDate(){}
date coustomer::setBirthDate(){}
