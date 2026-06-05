

#include <iostream>
using namespace std;

class Product
{

public:
    string name;

    static string companyName;

    void setName(string name)
    {
        this->name = name;
    }

    void getName()
    {

        cout << "product name " << name << endl;
    }

    static void getcompanyName()
    {

        cout << "company Name " << companyName << endl;
    };
};

string Product::companyName = "pqrs";

int main()
{

    Product p1;

    p1.setName("abcd");

    p1.getName();

    p1.getcompanyName();

    Product p2;

    p2.setName("xyz");

    p2.getName();

    p2.getcompanyName();

    return 0;
}