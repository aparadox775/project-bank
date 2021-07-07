#include "employee.hpp"

employee::employee() {

}
employee::~employee()
{
}

int employee::getEmployeeNumber() const {
    return employeeNumber;
}

void employee::setEmployeeNumber(int employeeNumber) {
    employee::employeeNumber = employeeNumber;
}

int employee::getDateOfRecruitment() const {
    return dateOfRecruitment;
}

void employee::setDateOfRecruitment(int dateOfRecruitment) {
    employee::dateOfRecruitment = dateOfRecruitment;
}

int employee::getSalary() const {
    return salary;
}

void employee::setSalary(int salary) {
    employee::salary = salary;
}

const std::string &employee::getName() const {
    return name;
}

void employee::setName(const std::string &name) {
    employee::name = name;
}

const std::string &employee::getInternationalCode() const {
    return internationalCode;
}

void employee::setInternationalCode(const std::string &internationalCode) {
    employee::internationalCode = internationalCode;
}

const std::string &employee::getFatherName() const {
    return fatherName;
}

void employee::setFatherName(const std::string &fatherName) {
    employee::fatherName = fatherName;
}

const std::string &employee::getDateOfBirth() const {
    return dateOfBirth;
}

void employee::setDateOfBirth(const std::string &dateOfBirth) {
    employee::dateOfBirth = dateOfBirth;
}

const std::string &employee::getIdentityNumber() const {
    return identityNumber;
}

void employee::setIdentityNumber(const std::string &identityNumber) {
    employee::identityNumber = identityNumber;
}

