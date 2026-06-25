

#include <iostream>
using namespace std;

class Bank
{

private:
    int balance;

public:
    Bank(int amount)
    {

        balance = amount;
    }

    void deposit(int amount)
    {

        if (amount <= 0)
        {

            cout << "please enter valid amount" << endl;
            return;
        }
        else
        {

            balance += amount;

            cout << amount << " has been credited" << endl;
        }
    }

    void withdraw(int amount)
    {

        if (amount > balance)
        {

            cout << "insufficient balance " << endl;
            return;
        }
        else
        {

            balance -= amount;

            cout << amount << " has been deduct from your account" << endl;
        }
    }

    void checkBalance()
    {

        if (balance <= 0)
        {

            cout << "your bank balance is empty " << endl;
        }
        else
        {

            cout << "available balance is " << balance << endl;
        }
    }
};

int main()
{

    Bank b(10000);

    b.checkBalance();

    b.deposit(10000);

    b.withdraw(7500);

    b.checkBalance();

    return 0;
}