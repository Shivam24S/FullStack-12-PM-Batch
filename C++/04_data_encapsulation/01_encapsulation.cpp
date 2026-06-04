

#include <iostream>

using namespace std;

class StudentDetail
{

private:
    int marks;

public:
    string name = "alice";

    void setMarks(int marks)
    {
        this->marks = marks;
    }

    void getMarks()
    {

        cout << marks << endl;
    }
};

int main()
{

    StudentDetail s1;

    cout << "student name is " << s1.name << endl;

    s1.setMarks(99);

    s1.getMarks();

    return 0;
}