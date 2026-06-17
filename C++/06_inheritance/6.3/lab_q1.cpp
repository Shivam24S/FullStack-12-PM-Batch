

#include <iostream>

using namespace std;

class Employee
{

protected:
    int emp_id;
    string emp_name;
    int emp_age;
    double emp_salary;

public:
    Employee(
        int id, string name, int age, double salary)
    {

        emp_id = id;
        emp_name = name;
        emp_age = age;
        emp_salary = salary;
    };

    virtual void display()
    {

        cout << "\nEmployee Details " << endl;

        cout << "\nEmployee Id " << emp_id << endl;

        cout << "\nEmployee Name " << emp_name << endl;

        cout << "\nEmployee Age " << emp_age << endl;

        cout << "\nEmployee Salary " << emp_salary << endl;
    }

    virtual ~Employee() {};
};

class FullTimeEmployee : public Employee
{

private:
    int bonus;

public:
    FullTimeEmployee(int id, string name, int age, double salary, int bonus) : Employee(id, name, age, salary)
    {

        this->bonus = bonus;
    }

    void display() override
    {

        Employee::display();

        cout << "\nEmployee Bonus " << bonus << endl;
    }
};

class PartTimeEmployee : public Employee
{

private:
    int hours_worked;

public:
    PartTimeEmployee(int id, string name, int age, double salary, int worked_hour) : Employee(id, name, age, salary)
    {

        hours_worked = worked_hour;
    };

    void display() override
    {

        Employee::display();

        cout << "\nEmployee working hours " << hours_worked << endl;
    }
};

int main()
{

    Employee *employees[100];

    int choice;

    int count = 0;

    do
    {

        cout << "\n Employee Management System " << endl;

        cout << "\n1.Add Employee (fullTime and PartTime) " << endl;
        cout << "\n2.Display All Employee " << endl;
        cout << "\n3.Delete Employee" << endl;
        cout << "\n4.Exit" << endl;

        cin >> choice;

        if (choice == 1)
        {

            int type;

            cout << "\n Enter Employee Type To add \n1.FullTime Employee \n2.PartTime Employee " << endl;

            cin >> type;

            int id, age;
            string name;
            double salary;

            cout << "\n enter employee Id " << endl;
            cin >> id;
            cin.ignore();

            cout << "\n enter employee name " << endl;
            getline(cin, name);

            cout << "\n enter employee age " << endl;
            cin >> age;
            cin.ignore();

            cout << "\n enter employee Salary" << endl;
            cin >> salary;
            cin.ignore();

            if (type == 1)
            {

                int bonus;

                cout << "\n enter employee bonus " << endl;
                cin >> bonus;

                employees[count] = new FullTimeEmployee(id, name, age, salary, bonus);

                count++;

                cout << "\nFull Time Employee added successfully " << endl;
            }
            else if (type == 2)
            {

                int working_hours;

                cout << "\n enter employee worked hours " << endl;
                cin >> working_hours;

                employees[count] = new PartTimeEmployee(id, name, age, salary, working_hours);

                count++;

                cout << "\n Part Time Employee added successfully " << endl;
            }
            else
            {

                cout << "invalid choice " << endl;
            }
        }
        else if (choice == 2)
        {

            if (count < 0)
            {
                cout << "\n no employee data found " << endl;
            }
            else
            {

                for (int i = 0; i < count; i++)
                {

                    employees[i]->display();
                }
            }
        }
        else if (choice == 3)
        {

            if (count == 0)
            {

                cout << "\n no employee record find to delete " << endl;
            }
            else
            {
                int index;

                cout << "\n enter index to delete employee " << "from  0 to" << count - 1 << endl;

                cin >> index;

                if (index >= 0 && index < count)
                {

                    delete employees[index];

                    for (int i = 0; i < count; i++)
                    {

                        employees[i] = employees[i + 1];
                    }

                    count--;
                    cout << "\n Employee Deleted " << endl;
                }
                else
                {

                    cout << "invalid index " << endl;
                }
            }
        }
        else if (choice == 4)
        {

            cout << "exiting...";
        }

    } while (choice != 4);

    // delete employees;

    // cout << "memory cleaned " << endl;

    return 0;
}