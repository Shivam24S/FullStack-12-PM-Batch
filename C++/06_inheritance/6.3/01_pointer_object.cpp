

#include <iostream>

using namespace std;

class Student
{

public:
    string name;
    int marks;

    void showStudentDetail()
    {

        cout << "student name is " << name << endl;

        cout << "student marks is " << marks << endl;
    }
};

int main()
{

    Student s;

    s.name = "alice";

    s.marks = 90;

    Student *ptr;

    ptr = &s;

    ptr->showStudentDetail();

    return 0;
}