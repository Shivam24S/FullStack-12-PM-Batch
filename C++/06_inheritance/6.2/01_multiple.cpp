

#include <iostream>
using namespace std;

// multiple=> one child has multiple parents

class Music
{

public:
    void canPlay()
    {

        cout << "this can play music" << endl;
    }
};

class Camera
{

public:
    void canCapture()
    {

        cout << "this can take filter shots " << endl;
    };
};

class SmartPhone : public Music, public Camera
{

public:
    void canMultiTask()
    {

        cout << "smart phone can do multiple task" << endl;
    }
};

int main()
{

    SmartPhone s;

    s.canPlay();

    s.canCapture();

    s.canMultiTask();

    return 0;
}