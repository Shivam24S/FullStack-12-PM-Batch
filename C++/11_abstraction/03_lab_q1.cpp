

#include <iostream>
using namespace std;

class Admin
{

private:
    double total_annual_revenue;
    bool can_terminate;

protected:
    int managerSalary;

public:
    string companyName;
    int totalStaff;
    int employeeSalary;

    Admin()
    {

        managerSalary = 10000;
        employeeSalary = 5000;
        total_annual_revenue = 100000;
        can_terminate = true;
        companyName = "xyz";
        totalStaff = 30;
    }

    virtual void MyAccess()
    {

        cout << "\n admin access" << endl;

        cout << "company name:-          " << companyName << endl;
        cout << "total staff:-           " << totalStaff << endl;
        cout << "manager salary:-        " << managerSalary << endl;
        cout << "employee salary:-       " << employeeSalary << endl;
        cout << "total annual revenue:-  " << total_annual_revenue << endl;
        cout << "can terminate :-        " << can_terminate << endl;
    }
};

class Manager : protected Admin
{
public:
    void MyAccess() override
    {

        cout << "\n manager access" << endl;

        cout << "company name:-          " << companyName << endl;
        cout << "total staff:-           " << totalStaff << endl;
        cout << "manager salary:-        " << managerSalary << endl;
        cout << "employee salary:-       " << employeeSalary << endl;

        // i can't able to access this properties
        // cout << "total annual revenue:-  " << total_annual_revenue << endl;
        // cout << "can terminate :-        " << can_terminate << endl;
    };
};

class Employee : protected Manager
{
public:
    void MyAccess() override
    {

        cout << "\n employee access" << endl;

        cout << "company name:-          " << companyName << endl;
        cout << "total staff:-           " << totalStaff << endl;
        cout << "employee salary:-       " << employeeSalary << endl;

        // i can't able to access this properties
        // cout << "total annual revenue:-  " << total_annual_revenue << endl;
        // cout << "can terminate :-        " << can_terminate << endl;
    };
};

int main()
{

    Admin obj;

    obj.MyAccess();

    Manager m;

    m.MyAccess();

    Employee e;

    e.MyAccess();

    return 0;
}
