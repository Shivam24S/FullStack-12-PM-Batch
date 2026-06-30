

#include <iostream>

using namespace std;

int main()
{

    int num1, num2;

    cout << "enter num 1 value ";
    cin >> num1;

    cout << "enter num 2 value ";
    cin >> num2;

    try
    {
        if (num2 == 0)
        {

            throw "number can't divide by zero";
        }

        float division = num1 / num2;

        cout << "division result " << division << endl;
    }
    catch (char const *msg)
    {

        cout << msg << endl;
    }

    return 0;
}