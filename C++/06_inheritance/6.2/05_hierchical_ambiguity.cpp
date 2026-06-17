

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

class B : virtual A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{

    D obj;

    // obj.show();

    obj.A::show();

    return 0;
}