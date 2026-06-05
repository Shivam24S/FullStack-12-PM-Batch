

// #include <iostream>

// using namespace std;

// class Car
// {

// public:
//     string name;
//     string compayName;

//     void setCarDetail(string name, string compayName)
//     {
//         this->name = name;
//         this->compayName = compayName;
//     }

//     void getCarDetail()
//     {

//         cout << "car name is " << name << endl;
//         cout << "car company name is " << compayName << endl;
//     }
// };

// int main()
// {

//     Car c1;

//     c1.setCarDetail("g-wagon", "mercedes");

//     c1.getCarDetail();

//     Car c2;

//     c2.setCarDetail("defender", "range-rover");

//     c2.getCarDetail();

//     return 0;
// }

// now using array of object

#include <iostream>

using namespace std;

class Car
{

public:
    string name;
    string compayName;

    void setCarDetail()
    {
        cout << "enter car name " << endl;
        getline(cin, name);

        cout << "enter car companyName " << endl;

        getline(cin, compayName);
    }

    void getCarDetail()
    {

        cout << "car name is " << name << endl;
        cout << "car company name is " << compayName << endl;
    }
};

int main()
{

    cout << "enter array size " << endl;

    int n;

    cin >> n;
    cin.ignore();

    Car arr[n];

    for (int i = 0; i < n; i++)
    {

        cout << "enter car detail " << i + 1 << endl;
        arr[i].setCarDetail();
    }

    for (int i = 0; i < n; i++)
    {

        cout << "car detail " << i + 1 << endl;
        arr[i].getCarDetail();
    }

    return 0;
}
