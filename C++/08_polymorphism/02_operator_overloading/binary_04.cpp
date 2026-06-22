

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

        cout << "total " << num << endl;
    }

    Num operator+(Num n)
    {

        Num temp(0);

        temp.num = num + n.num;

        return temp;
    }
};

int main()
{

    Num n1(20);

    Num n2(30);

    Num n3 = n1 + n2;

    n3.display();

    return 0;
}