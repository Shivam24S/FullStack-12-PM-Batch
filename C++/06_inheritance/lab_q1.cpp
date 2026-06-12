

#include <iostream>

using namespace std;

class X
{

public:
    int a, b, c;
};

class Y : public X
{

public:
    void setData()
    {

        cout << "enter all three numbers " << endl;

        cin >> a >> b >> c;
    };

    void result()
    {

        int cubeResult;

        cubeResult = (a * a * a) + (b * b * b) + (c * c * c);

        cout << "cube result is " << cubeResult << endl;
    };
};

int main()
{

    Y obj;

    obj.setData();

    obj.result();

    return 0;
}