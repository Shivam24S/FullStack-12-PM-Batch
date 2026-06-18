

#include <iostream>
using namespace std;

// compile Time

class ArithMatic
{
};

class Calculator : public ArithMatic
{

public:
    void calculate(int a, int b)
    {

        cout << "division:- " << a / b << endl;
    };

    void calculate(int a, int b, int c)
    {

        cout << "substraction:- " << a - b - c << endl;
    }

    void calculate(int a, int b, int c, int d)
    {

        cout << "multiplication:- " << a * b * c * d << endl;
    }

    void calculate(int a, int b, int c, int d, int e)
    {

        cout << "addition:- " << a + b + c + d + e << endl;
    }
};

int main()
{

    Calculator obj;

    obj.calculate(20, 10);

    obj.calculate(50, 20, 10);

    obj.calculate(2, 3, 4, 5);

    obj.calculate(5, 6, 7, 8, 9);

    return 0;
}