

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
    void setStudentDetail(int id, string name, int age, string course, string city, string email, string college)
    {

        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_city = city;
        stu_email = email;
        stu_college = college;
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
    }
};

int main()
{

    StudentDetail s1;

    s1.setStudentDetail(1, "alice", 18, "fsd", "bvn", "alice@gmail.com", "string college");

    s1.getStudentDetail();

    return 0;
}