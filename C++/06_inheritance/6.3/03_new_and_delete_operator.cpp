

#include <iostream>

using namespace std;

class Car
{

public:
    string brand;

    void carDetail()
    {

        cout << "car brand is " << brand << endl;
    }
};

int main()
{

    Car *vehicle = new Car;

    vehicle->brand = "bmw";

    vehicle->carDetail();

    delete vehicle;

    return 0;
}