#include <iostream>
#include <vector>
#include "coustomer.hpp"
#include "boxOfficeEmployee.hpp"
#include "keller.hpp"
#include "boxOfficeEmployee.hpp"
#include "bank.hpp"
#include "boss.hpp"

using namespace std;

int main()
{
    int choise, choise1;
    vector<coustomer*> coustomers;
    vector<employee*> emps;
    coustomer name;
    cout << "testrun";
    bank Bank;
    cout << "1.Add new user\t 2. init new account\n";
    cin >> choise;

    switch (choise)
    {
    case 1:
    {
        cout << "what user do you wanna add? 1.coustomer \t2.manager\t3.box Office Embloyee\t 4.keller \n";
        cin >> choise1;
        switch (choise1)
        {
        case 1:
        {
            coustomer* temp = new coustomer;
            cout << "enter name:" << endl;
            {
                string name;
                cin >> name;
                temp->SetName(name);
            }
            cout << "entere birth date yyyy/mm/dd (divide by space):" << endl;
            {
                short yy, mm, dd;
                cin >> yy;
                cin >> mm;
                cin >> dd;
                date* tempBdate = new date;
                tempBdate->day = dd;
                tempBdate->year = yy;
                tempBdate->mounth = mm;
                temp->SetBirthDate(*tempBdate);
            }
            cout << "entere id:" << endl;
            {
                string id;
                cin >> id;
                temp->SetId(id);
            }
            Bank.addCoustomers(temp);
        }
            break;
        case 2:
        {
            boss* temp = new boss;
            cout << "enter name: \n";
            string name;
            temp->setName(name);
            cout << "entere birth date yyyy/mm/dd (divide by space):" << endl;
            {
                short yy, mm, dd;
                cin >> yy;
                cin >> mm;
                cin >> dd;
                date* tempBdate = new date;
                tempBdate->day = dd;
                tempBdate->year = yy;
                tempBdate->mounth = mm;
                temp->setDateOfBirth(*tempBdate);
            }
            emps.push_back(temp);


        }
            break;
        case 3:
        {
            boxOfficeEmployee* temp = new boxOfficeEmployee;
            cout << "enter name: \n";
            string name;
            temp->setName(name);
            cout << "entere birth date yyyy/mm/dd (divide by space):" << endl;
            {
                short yy, mm, dd;
                cin >> yy;
                cin >> mm;
                cin >> dd;
                date* tempBdate = new date;
                tempBdate->day = dd;
                tempBdate->year = yy;
                tempBdate->mounth = mm;
                temp->setDateOfBirth(*tempBdate);
            }
            emps.push_back(temp);

        }
            break;
        case 4:
        {
            keller* temp = new keller;
            cout << "enter name: \n";
            string name;
            temp->setName(name);
            cout << "entere birth date yyyy/mm/dd (divide by space):" << endl;
            {
                short yy, mm, dd;
                cin >> yy;
                cin >> mm;
                cin >> dd;
                date* tempBdate = new date;
                tempBdate->day = dd;
                tempBdate->year = yy;
                tempBdate->mounth = mm;
                temp->setDateOfBirth(*tempBdate);
            }
            emps.push_back(temp);

        }
            break;
        default:
            break;
        }
    }
        break;
    case 2:
    {
        string id;
        cout << "enteer the coustomer id you wanna init an account for:\n";
        cin >> id;
        coustomer* temp;
        temp = Bank.searchId(id);
        vector<account*> tempAccs;
        tempAccs = temp->GetAccounts();
        account* tempAcc = new account;
        tempAcc->SetBalance(0);
        cout << "enter today date yyyy/mm/dd (divide by space):" << endl;
        short yy, mm, dd;
        cin >> yy;
        cin >> mm;
        cin >> dd;
        date* tempBdate = new date;
        tempBdate->day = dd;
        tempBdate->year = yy;
        tempBdate->mounth = mm;
        tempAcc->SetAccountInitDate(*tempBdate);

        tempAccs.push_back(tempAcc);

    }
        break;
    case 3:
    {
        cout << "coustomer id:\n";
        string id;
        cin >> id;

        coustomer* temp = Bank.searchId(id);
        vector<account*> acVec = temp->GetAccounts();
        for (account* tem: acVec)
        {
            cout << "acc id: " << tem->GetAccountId() << "balance: " << tem->GetBalance() << endl;
        }
    }
        break;
    default:
        break;

    }
//    Bank.

}