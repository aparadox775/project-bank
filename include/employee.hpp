#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

struct date
{
    short day;
    short mounth;
    short year;

    const std::string tostdString() const
    {
        std::string ret;
        ret = std::to_string(day) + "/" + std::to_string(mounth) + "/" + std::to_string(year);
        return ret;
    }

};



class employee
{
private:
    int employeeNumber;
    int dateOfRecruitment;
    int salary;
    std::string name;
    std::string internationalCode;
    std::string fatherName;
    date dateOfBirth;
    std::string identityNumber;
    date * temp;
    /* data */
public:
    employee(/* args */);
    ~employee();

    int getEmployeeNumber() const;

    void setEmployeeNumber(int employeeNumber);

    int getDateOfRecruitment() const;

    void setDateOfRecruitment(int dateOfRecruitment);

    int getSalary() const;

    void setSalary(int salary);
    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getInternationalCode() const;

    void setInternationalCode(const std::string &internationalCode);

    const std::string &getFatherName() const;

    void setFatherName(const std::string &fatherName);

    const date &getDateOfBirth() const;

    void setDateOfBirth(const date &dateOfBirth);

    const std::string &getIdentityNumber() const;

    void setIdentityNumber(const std::string &identityNumber);
};

#endif