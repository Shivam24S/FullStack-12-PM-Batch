

#include <iostream>

using namespace std;

class StudentDetail
{

private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void setStudentDetail()
    {

        cout << "enter student id " << endl;
        cin >> stu_id;
        cin.ignore();

        cout << "enter student name " << endl;
        getline(cin, stu_name);

        cout << "enter student age " << endl;
        cin >> stu_age;
        cin.ignore();

        cout << "enter student course " << endl;
        getline(cin, stu_course);

        cout << "enter student city " << endl;
        getline(cin, stu_city);

        cout << "enter student email " << endl;
        getline(cin, stu_email);

        cout << "enter student college " << endl;
        getline(cin, stu_college);
    }

    void getStudentDetail()
    {

        cout << "student detail are as mentioned below " << endl;

        cout << "id       : " << stu_id << endl;
        cout << "name     : " << stu_name << endl;
        cout << "age      : " << stu_age << endl;
        cout << "course   : " << stu_course << endl;
        cout << "city     : " << stu_city << endl;
        cout << "email    : " << stu_email << endl;
        cout << "college  : " << stu_college << endl;
    };
};

int main()
{

    StudentDetail s[5];

    for (int i = 1; i <= 5; i++)
    {
         cout << "\nentering student detail " << i << endl;

        s[i].setStudentDetail();
    }

    for (int i = 1; i <= 5; i++)
    {

        cout << "\nstudent detail " << i << endl;

        s[i].getStudentDetail();
    }

    return 0;
}