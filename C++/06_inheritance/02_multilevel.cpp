

#include <iostream>

using namespace std;

class GrandFather
{

public:
    void grandFatherProperty()
    {

        cout << "this is grandFather property " << endl;
    }
};

class Father : public GrandFather
{
public:
    void fatherProperty()
    {

        cout << "this is father property " << endl;
    }
};

class Son : public Father
{

public:
    void sonProperty()
    {

        cout << "this is son property " << endl;
    }
};

int main()
{

    Son s;

    s.grandFatherProperty();

    s.fatherProperty();

    s.sonProperty();

    return 0;
}