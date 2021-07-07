#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class employee
{
private:
    int employeeNumber;
    int dateOfRecruitment;
    int salary;
    std::string name;
    std::string internationalCode;
    std::string fatherName;
    std::string dateOfBirth;
    std::string identityNumber;
    /* data */
public:
    employee(/* args */);
    virtual ~employee() = 0;

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

    const std::string &getDateOfBirth() const;

    void setDateOfBirth(const std::string &dateOfBirth);

    const std::string &getIdentityNumber() const;

    void setIdentityNumber(const std::string &identityNumber);
};

#endif