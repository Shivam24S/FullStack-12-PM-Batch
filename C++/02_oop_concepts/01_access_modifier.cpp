

#include <iostream>

using namespace std;

class Bank
{

private:
    double bankBalance = 10000;

public:
    int accountNumber = 123;

    // setter
    void depositMoney(int money)
    {
        bankBalance += money;
    }

    // getter

    void checkBankBalance()
    {

        cout << bankBalance << endl;
    }
};

int main()
{

    // class instance => object
    Bank b1;

    // public

    cout << b1.accountNumber << endl;

    // private not accessible here will generate an error

    // cout << b1.bankBalance << endl;

    // setter method to set the value of private member

    b1.depositMoney(5000);

    // getter method to get the value of private member

    b1.checkBankBalance();

    return 0;
}
