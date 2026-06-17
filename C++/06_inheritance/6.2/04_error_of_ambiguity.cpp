



#include <iostream>

using namespace std;

class A
{

public:
    void show()
    {

        cout << "this is class A show " << endl;
    }
};

class B
{

public:
    void show()
    {

        cout << "this is class B show " << endl;
    }
};

class C : public A, public B
{
};

int main()
{

    C c;

    // this is error of ambiguity
    // c.show();

    // here  explicitly i am telling my compiler that call class A show function
    c.A::show();

    // B class

    c.B::show();

    return 0;
}