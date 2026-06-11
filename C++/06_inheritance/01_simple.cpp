

#include <iostream>
using namespace std;

class Parent
{

public:
    string property = "4 bhk";

    void getHome()
    {

        cout << property << " home " << endl;
    }
};

class Child : public Parent
{

public:
    int numberOfvehicle = 4;

    void totalVehicle()
    {

        cout << numberOfvehicle << " they have " << endl;
    }
};

int main()
{

    Child c;


    c.getHome();

    c.totalVehicle();

    return 0;
}