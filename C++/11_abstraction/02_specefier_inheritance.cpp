

#include <iostream>
using namespace std;

class X
{

public:
    int num1 = 10;

protected:
    int num2 = 20;

private:
    int num3 = 30;
};

class Y:protected X {

    public:




};


int main()
{

    X obj;

    // we can access public
    cout << obj.num1 << endl;

    // we can't access protected here
    // cout << obj.num2 << endl;

    // we can't access private here

    // cout << obj.num3 << endl;


    // now inheritance



    return 0;
}