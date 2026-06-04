

#include <iostream>
using namespace std;

int main()
{

    cout << "enter start year ";

    int startYear;

    cin >> startYear;

    cout << "enter end year ";

    int endYear;

    cin >> endYear;

    int leapYear[100];

    int count = 0;

    for (int i = startYear; i < endYear; i++)
    {

        // leap year

        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {

            leapYear[count] = i;
            count++;
        }
    }

    for (int i = 0; i <= count; i++)
    {
        cout << leapYear[i] << endl;
    }

    return 0;
}