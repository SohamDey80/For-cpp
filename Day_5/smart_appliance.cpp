#include <iostream>
#include <string>
using namespace std;

class Appliance
{
public:
    int applianceid;
    string brand;
    double price;
};

class SmartAppliance : public Appliance
{
    string connectivityType;
    int warrantyYears;

public:
    SmartAppliance() {}

    SmartAppliance(int applianceid, string brand, double price, string connectivityType, int warrantyYears)
    {
        this->applianceid = applianceid;
        this->brand = brand;
        this->price = price;
        this->connectivityType = connectivityType;
        this->warrantyYears = warrantyYears;
    }

    void getAndDisplay();
    void displayWarranty();
};

SmartAppliance obj[3];

void SmartAppliance::getAndDisplay()
{
    int id;
    string brand;
    double price;
    string connectivityType;
    int years;

    for (int i = 0; i < 3; i++)
    {

        cout << "enter product id\n";
        cin >> id;
        cout << "enter product brand\n";
        cin >> brand;
        cout << "enter product price\n";
        cin >> price;
        cout << "enter connectivity type\n";
        cin >> connectivityType;
        cout << "enter warranty years\n";
        cin >> years;

        obj[i] = SmartAppliance(id, brand, price, connectivityType, years);
    }
    cout<<"Product details are\n";

    for(int i=0;i<3;i++){
        cout<<obj[i].applianceid<<endl;
        cout<<obj[i].brand<<endl;
        cout<<obj[i].price<<endl;
        cout<<obj[i].connectivityType<<endl;
        cout<<obj[i].warrantyYears<<endl;
    }
}
void SmartAppliance::displayWarranty()
{
    int c=0;
    for(int i=0;i<3;i++){
        if(obj[i].warrantyYears>2){
            c=i;
        }
    }
    cout<<"Details of product with more than 2 years of warranty are";
     for(int i=0;i<3;i++){
        cout<<obj[i].applianceid<<endl;
        cout<<obj[i].brand<<endl;
        cout<<obj[i].price<<endl;
        cout<<obj[i].connectivityType<<endl;
        cout<<obj[i].warrantyYears<<endl;
    }

}
int main()
{

    SmartAppliance s;
    s.getAndDisplay();
    s.displayWarranty();
}