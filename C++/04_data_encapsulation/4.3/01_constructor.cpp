
#include <iostream>
using namespace std;

class Phone
{

public:
    string battery;
    string processor;

    // constructor
    Phone()
    {

        battery = "5000Mah";
        processor = "snapdragon";

        cout << "constructor is called " << endl;
    };

    void displayPhoneDetail()
    {

        cout << " my phone has " << battery << " battery" << endl;
        cout << " my phone has  " << processor << " processor" << endl;
    }
};

int main()
{

    Phone p1;

    p1.displayPhoneDetail();

    return 0;
}