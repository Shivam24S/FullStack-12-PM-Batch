
#include <iostream>
using namespace std;

class Bank
{

public:
    double accountNumber;

    // default constructor

    Bank()
    {

        cout << "enter your account number " << endl;
        cin >> accountNumber;
    };

    void displayAccountNumber()
    {

        cout << "account number is " << accountNumber << endl;
    };
};

int main()
{

    Bank b1;

    b1.displayAccountNumber();

    return 0;
}