

#include <iostream>
using namespace std;

class A
{

public:
    void show()
    {

        cout << "this is class A " << endl;
    }
};

class B : public A
{

public:
    void show()
    {

        cout << "this is class B " << endl;
    }
};

class C : public B
{

public:
    void show()
    {

        cout << "this is class C " << endl;
    }
};

class D : public B, public C
{

public:
    void show()
    {

        cout << "this is class D " << endl;
    }
};

int main()
{

    A a;

    a.show();

    B b;

    b.show();

     return 0;
}