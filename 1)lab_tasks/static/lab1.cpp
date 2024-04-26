#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class inv {
public:
    string name;
    int price;
    int quantity;
    int id;

public:
    
    inv()
    {
        name = "";
        price = 0;
        quantity = 0;
        id = 0;
    }

    inv(string a, int b, int c, int d)
    {
        name = a;
        price = b;
        quantity = c;
        id = d;
    }

    void func()
    {
        cout << "PRODUCT NAME IS :" << name << endl;
        cout << "PRODUCT PRICE IS :" << price << endl;
        cout << "PRODUCT QUANTITY IS :" << quantity << endl;
        cout << "PRODUCT ID IS :" << id << endl;
    }

    ~inv()
    {
        cout << "Object destroyed" << endl;
    }
};

void display(inv p[], int num);
void inputData(inv p[] , int num);
void update(inv &p,string ask);
void searchItem(inv p[] , int idnum , int num);


void display(inv p[], int num)
{
    for (int i = 0; i < num; i++)
    {
        p[i].func();
        cout << endl;
    }
}

void inputData(inv p[] , int num)
{
    string a;
    int b;
    int c;
    int d;
    cin.ignore();
    for(int i=0 ; i<num ; i++)
    {
        cout << "Enter Item Name : ";
        getline(cin,a);
        cout << "Enter Item ID : ";
        cin>>b;
        cout << "Enter Item Price : ";
        cin >> c;
        cout << "Enter Item Quantity : ";
        cin >> d;
        cout<<endl;
        p[i] = inv(a, b, c, d);
    }
}

void update(inv &p, string ask)
{
    if(ask == "price")
    {
        cout << "Enter new price : ";
        cin >> p.price;
    }
    else if(ask == "quantity")
    {
        cout << "Enter the updated quantity : ";
        cin >> p.quantity;
    }
}

void searchItem(inv p[], int idnum, int num)
{
    for(int i=0 ; i<num ; i++)
    {
        if(p[i].id == idnum)
        {
            cout << "ITEM #" << i + 1 << endl;
            cout << "ID       : " << idnum << endl;
            cout << "NAME     : " << p[i].name << endl;
            cout << "PRICE    : " << p[i].price << endl;
            cout << "QUANTITY : " << p[i].quantity << endl << endl;
            return;
        }
    }
    cout << "ITEM NOT FOUND" << endl << endl;
}

int main()
{
    int noi;
    cout << "ENTER THE TOTAL NUMBER OF ITEMS TO STORE: ";
    cin >> noi;

    inv items[noi]; 
    int ch;
    cout << "SELECT AN OPTION AMONG THESE: (1-3)" << endl;
    cout << "1. DISPLAY ITEMS" << endl;
    cout << "2. UPDATE ITEM DETAILS" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        inputData(items, noi);
        display(items, noi);
        break;
    case 2:
        int upd;
        cout << "Enter the ID of the item you want to update: ";
        cin >> upd;
        searchItem(items, upd, noi);
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}

