

#include <iostream>

using namespace std;

void sum(int &x)
{
    x = 100;
}

int main()
{

    int num = 10;

    cout << "num value " << num << endl;

    sum(num);

    cout << "num value after " << num << endl;

    return 0;
}