

#include <iostream>
using namespace std;

class Payment
{

public:
    void paymentMethod()
    {

        cout << "this is generic payment method" << endl;
    }
};

class UPI : public Payment
{

public:
    void paymentMethod()
    {

        cout << "this is upi payment method" << endl;
    }
};

class NetBanking : public Payment
{

public:
    void paymentMethod()
    {

        cout << "this is netBanking payment method" << endl;
    }
};

int main()
{

    Payment *ptr;

    UPI U;

    ptr = &U;

    ptr->paymentMethod();

    NetBanking N;

    ptr = &N;

    ptr->paymentMethod();

    return 0;
}