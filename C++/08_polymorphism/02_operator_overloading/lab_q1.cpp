

#include <iostream>

using namespace std;

class Num
{

public:
    int num;

    Num(int n)
    {

        num = n;
    };

    bool operator<(Num n)
    {

        if (n.num < num)
        {

            return true;
        }
        else
        {

            return false;
        }
    }
};

int main()
{

    Num n1(30);

    Num n2(20);

    if (n1 < n2)
    {

        cout << "n1 is greater than n2 " << endl;
    }
    else
    {

        cout << "n2 is greater than n1 " << endl;
    }

    return 0;
}