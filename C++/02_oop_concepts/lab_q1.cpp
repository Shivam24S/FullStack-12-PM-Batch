

#include <iostream>
using namespace std;

class Employee
{

public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    int emp_salary;
    string emp_city;
    int emp_experience;
    string emp_companyName;

    void setEmployeeDetail(int id, string name, int age, string role, int salary, string city, int experience, string company)
    {
        emp_id = id;
        emp_name = name;
        emp_age = age;
        emp_role = role;
        emp_salary = salary;
        emp_city = city;
        emp_experience = experience;
        emp_companyName = company;
    }

    void getEmployeeDetail()
    {

        cout << "emp id " << emp_id <<  endl;
        cout << "emp name " << emp_name <<  endl;
        cout << "emp age " << emp_age <<  endl;
        cout << "emp role " << emp_role <<  endl;
        cout << "emp salary " << emp_salary <<  endl;
        cout << "emp city " << emp_city << endl;
        cout << "emp experience " << emp_experience <<  endl;
        cout << "emp companyName " << emp_companyName <<  endl;
    }
};

int main()
{

    Employee e1;

    e1.setEmployeeDetail(1, "alice", 50, "worker", 10000, "bvn", 1, "xyz");

    e1.getEmployeeDetail();

    Employee e2;

    e2.setEmployeeDetail(2, "john", 54, "manager", 20000, "bvn", 1, "xyz");

    e2.getEmployeeDetail();

    return 0;
}