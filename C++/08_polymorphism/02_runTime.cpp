

#include <iostream>
using namespace std;

class Employee
{

public:
    virtual void work()
    {

        cout << "employee works " << endl;
    }
};

class Designer : public Employee
{

public:
    void work() override
    {

        cout << "designer design " << endl;
    }
};

class Developer : public Employee
{

public:
    void work() override
    {

        cout << "developer develops " << endl;
    }
};

int main()
{

    Employee *emp;

    Designer dg;

    emp = &dg;

    emp->work();

    Developer d;

    emp = &d;

    emp->work();

    return 0;
}