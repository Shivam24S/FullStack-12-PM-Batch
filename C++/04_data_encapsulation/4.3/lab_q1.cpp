

#include <iostream>
using namespace std;

class DiamondCompany
{

private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    DiamondCompany(int id, string name, int staff, double revenue, int import_raw_diamond, int export_diamond, string ceo)
    {

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_raw_diamond;
        comp_export_diamonds = export_diamond;
        comp_ceo = ceo;
    }

    void getCompanyDetail()
    {

        cout << "\n companies detail are mentioned below " << endl;

        cout << "\n Company id                  : " << comp_id << endl;
        cout << "\n Company name                : " << comp_name << endl;
        cout << "\n Company staff quantity      : " << comp_staff_quantity << endl;
        cout << "\n Company revenue             : " << comp_revenue << endl;
        cout << "\n Company import raw diamonds : " << comp_import_raw_diamonds << endl;
        cout << "\n Company export diamonds     : " << comp_export_diamonds << endl;
        cout << "\n Company ceo                 : " << comp_ceo << endl;
    }
};

int main()
{

    cout << "enter number of companies you want to add " << endl;

    int n;

    cin >> n;

    DiamondCompany *arr[n];

    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

    for (int i = 0; i < n; i++)
    {

        cout << "\nenter company id " << endl;
        cin >> comp_id;
        cin.ignore();

        cout << "\nenter company name " << endl;
        getline(cin, comp_name);

        cout << "\nenter staff quantity " << endl;
        cin >> comp_staff_quantity;
        cin.ignore();

        cout << "\nenter company revenue " << endl;
        cin >> comp_revenue;
        cin.ignore();

        cout << "\nenter company import raw diamond number " << endl;
        cin >> comp_import_raw_diamonds;
        cin.ignore();

        cout << "\nenter company export diamond number " << endl;
        cin >> comp_export_diamonds;
        cin.ignore();

        cout << "\n enter company ceo name " << endl;
        getline(cin, comp_ceo);

        arr[i] = new DiamondCompany(comp_id, comp_name, comp_staff_quantity, comp_revenue, comp_import_raw_diamonds, comp_export_diamonds, comp_ceo);
    }

    for (int i = 0; i < n; i++)
    {

        arr[i]->getCompanyDetail();
    }

    return 0;
}