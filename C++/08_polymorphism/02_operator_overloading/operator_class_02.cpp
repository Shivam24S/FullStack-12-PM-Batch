

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
};

int main()
{

    Num n1(50);

    n1.display();

    Num n2(30);

    n2.display();

    // this will not work due to operator dont know how to calculate  or perform  operation between object instance

    // cout << "total " << n1 + n2 << endl;

    return 0;
}