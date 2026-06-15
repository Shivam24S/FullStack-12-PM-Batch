

#include <iostream>

using namespace std;

// hierarchical = multiple children have same parent

class Employee
{

public:
    void salary()
    {

        cout << "can get salary " << endl;
    }
};

class Manager : public Employee
{

public:
    void managingTeam()
    {

        cout << "manager can manage team " << endl;
    }
};

class Developer : public Employee
{

public:
    void developingProject()
    {

        cout << "Developer can develop whole project " << endl;
    };
};

class Designer : public Employee
{

public:
    void designing()
    {

        cout << "designer can design " << endl;
    }
};

int main()
{

    Employee E;

    E.salary();

    Manager M;

    M.managingTeam();

    M.salary();

    Developer D;

    D.developingProject();

    D.salary();

    Designer Dg;

    Dg.designing();

    Dg.salary();

    return 0;
}