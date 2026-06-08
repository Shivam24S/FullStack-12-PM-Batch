

#include <iostream>

using namespace std;

class Shop
{

public:
    string item1;
    string item2;

    // parameterized constructor

    Shop(string item1, string item2)
    {
        this->item1 = item1;
        this->item2 = item2;
    };

    void displayShopItems()
    {

        cout << "item 1 is " << item1 << endl;
        cout << "item 2 is " << item2 << endl;
    };

    ~Shop()
    {

        cout << "destructor called  it will clean memory" << endl;
    }
};

int main()
{

    Shop s1("fruits", "vegetables");

    s1.displayShopItems();

    return 0;
}