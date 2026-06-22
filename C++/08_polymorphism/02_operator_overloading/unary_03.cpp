
#include <iostream>

using namespace std;

class Num
{

public:
    int num;

    Num(int n)
    {

        num = n;
    }

    void display()
    {

        cout << "num value " << num << endl;
    }

    // syntax for operator overloading
    
    // returnType operator symbol(){

    // }

    void operator++()
    {

        ++num;
    }
};

int main()
{

    Num n1(23);

    cout << "before " << endl;
    n1.display();

    ++n1;

    cout << "after " << endl;
    n1.display();

    return 0;
}