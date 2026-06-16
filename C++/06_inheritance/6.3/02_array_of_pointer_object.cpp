

#include <iostream>

using namespace std;

class Employee
{

public:
    string name;
    int salary;

    void employeeDetail()
    {

        cout << "employee name is " << name << endl;

        cout << "employee salary is " << salary << endl;
    }
};

int main()
{

    Employee e1;
    Employee e2;
    Employee e3;

    e1.name = "alice";
    e1.salary = 10000;

    e2.name = "charlie";
    e2.salary = 200000;

    e3.name = "micheal";
    e3.salary = 300000;

    Employee *arr[3];

    arr[0] = &e1;
    arr[1] = &e2;
    arr[2] = &e3;

    for (int i = 0; i < 3; i++)
    {

        arr[i]->employeeDetail();
    }

    return 0;
}