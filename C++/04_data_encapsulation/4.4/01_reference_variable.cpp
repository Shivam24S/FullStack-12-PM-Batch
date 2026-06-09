

#include <iostream>

using namespace std;

int main()
{

    int a = 100;

    int b = a;

    // deep copy

    cout << "a value " << a << endl;
    cout << "b value " << b << endl;

    b = 500;

    cout << "a value " << a << endl;
    cout << "b value " << b << endl;

    // shallow copy

    int c = 24;
    int &d = c;

    // before
    cout << "c value " << c << endl;
    cout << "d value " << d << endl;

    // after changing

    d = 48;

    cout << "c value " << c << endl;
    cout << "d value " << d << endl;

    return 0;
}