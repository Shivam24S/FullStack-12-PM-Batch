
#include <iostream>
#include <vector>
using namespace std;

class Student
{

private:
    string name;
    int rollNo;
    float GPA;

public:
    // default

    Student()
    {
        name = "not set";
        rollNo = 0;
        GPA = 0.0;

        cout << "default constructor called " << endl;
    }

    // parameterized

    Student(string name, int rollNo, float GPA)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->GPA = GPA;

        cout << "parameterized constructor called " << endl;
    }

    // copy constructor

    Student(const Student &s)
    {

        name = s.name;
        rollNo = s.rollNo;
        GPA = s.GPA;

        cout << "copy constructor called " << endl;
    };

    // getter

    void studentName()
    {

        cout << "student name is " << name << endl;
    }

    int studentRollNo()
    {

        return rollNo;
    }

    // setter

    void setGPA(float gpa)
    {
        GPA = gpa;
    }

    void studentDetail()
    {

        cout << "student name is    : " << name << endl;
        cout << "student roll no is : " << rollNo << endl;
        cout << "student GPA is     : " << GPA << endl;
    }

    ~Student()
    {

        cout << "destructor called " << endl;
    }
};

class StudentRecordManager
{

private:
    vector<Student> students;

public:
    void addStudent(const Student &s)
    {

        students.push_back(s);

        cout << "student data added " << endl;
    }

    void displayAllStudentDetail()
    {

        for (int i = 0; i < students.size(); i++)
        {

            if (students.empty())
            {

                cout << "no student data found " << endl;
                return;
            }
            else
            {

                students[i].studentDetail();
            }
        }
    }

    void searchByRollNo(int rollNumber)
    {

        for (int i = 0; i < students.size(); i++)
        {

            if (students[i].studentRollNo() == rollNumber)
            {

                cout << "student found with this roll no " << endl;
                students[i].studentDetail();
            }
            else
            {
                cout << "student with this roll no not found " << endl;
                return;
            }
        }
    }
};

int main()
{

    Student s0;

  

    Student s1("alice", 1, 8);

    s1.studentName();

    Student s2("charlie", 2, 9);

    Student s3 = s1;

    StudentRecordManager admin;

    cout << "adding student " << endl;

    admin.addStudent(s1);
    admin.addStudent(s2);
    admin.addStudent(s3);

    // search student by their roll no

    admin.searchByRollNo(1);

    // not found

    admin.searchByRollNo(24);

    // all students detail

    cout << "all students detail " << endl;

    admin.displayAllStudentDetail();

    return 0;
}