#include <iostream>
#include <string.h>

using namespace std;

class itemEntry 
{
public:
    float unitPrice;
    int copies, product_id;
    char name[30];
    char company[30];
};

class Inventory 
{
public:
    int numItem;
    itemEntry database[100];

public:
    Inventory()
    {
        numItem = 0;
    }

    void insertItem(char itemName[], char company[], int pid, int c, float p);
    void deleteItem(char itemName[], int pid);
    itemEntry *searchi(char itemName[], int pid);
    void updateItem(char itemName[], int pid, int total, float price);
};

class InventorySystem : public Inventory 
{
public:
    void printInventory();
    void loadInventory();
    void saveInventory();
};

void Inventory::insertItem(char itemName[], char company[], int pid, int c, float p) 
{
    strcpy_s(database[numItem].name, itemName);
    strcpy_s(database[numItem].company, company);
    database[numItem].product_id = pid;
    database[numItem].copies = c;
    database[numItem].unitPrice = p;
    numItem++;
}

void Inventory::deleteItem(char itemName[], int pid)
{
    int i;
    for (i = 0; i < numItem; i++)
    {
        if ((strcmp(itemName, database[i].name) == 0) && (database[i].product_id == pid))
        {
            database[i].copies--;
            return;
        }
    }
}

itemEntry *Inventory::searchi(char itemName[], int pid) 
{
    int i;
    for (i = 0; i < numItem; i++)
    {
        if ((strcmp(itemName, database[i].name) == 0) && (database[i].product_id == pid))
            return &database[i];
    }
    return NULL;
}

void Inventory::updateItem(char itemName[], int pid, int total, float price) 
{
    itemEntry *item = searchi(itemName, pid);
    if (item == NULL)
    {
        cout << "\n\t\t ITEM NOT FOUND\n";
        return;
    }
    item->copies += total;
    item->unitPrice += price;
}

void InventorySystem::printInventory()
{
    for (int i = 0; i < numItem; i++)
    {
        cout << "Name: " << database[i].name << endl;
        cout << "Company: " << database[i].company << endl;
        cout << "Product ID: " << database[i].product_id << endl;
        cout << "Copies: " << database[i].copies << endl;
        cout << "Unit Price: " << database[i].unitPrice << endl;
        cout << "-------------------------" << endl;
    }
}

// void InventorySystem::loadInventory()
// {
//     // Load inventory data from a file or database
// }

// void InventorySystem::saveInventory()
// {
//     // Save inventory data to a file or database
// }

int main() 
{
    InventorySystem inv1;
    char name[30], company[30];
    int product_id, copies, unit_price,option;

    do 
    {
        cout << "\n\t------------->DEPARTMENTAL Inventory<--------------";
        cout << "\n\t\t-------------->MENU<------------";
        cout << "\n\t\t\t    1 FOR INSERT";
        cout << "\n\t\t\t    2 FOR DELETE";
        cout << "\n\t\t\t    3 FOR SEARCH";
        cout << "\n\t\t\t    4 FOR UPDATE";
        cout << "\n\t\t\t    5 FOR PRINT";
        // cout << "\n\t\t\t    6 FOR LOAD";
        // cout << "\n\t\t\t    7 FOR SAVE";
        cout << "\n\t\t\t    6 FOR EXIT";
        cout << "\n\t\t  ENTER YOUR CHOICE : ";
        cin >> option;

        switch (option)
        {
            case 1:
                cin.getline(name, 80);
                cout << "\n\t\t\t ENTER NAME OF ITEM : ";
                cin.getline(name, 80);
                cout << "\n\t\t\t COMPANY: ";
                cin.getline(company, 80);
                cout << "\n\t\t\t ENTER PRODUCT ID : ";
                cin >> product_id;
                cout << "\n\t\t\t NO. OF COPIES : ";
                cin >> copies;
                cout << "\n\t\t\t UNIT PRICE PER ITEM : ";
                cin >> unit_price;
                inv1.insertItem(name, company, product_id, copies, unit_price);
                break;

            case 2:
                cin.getline(name, 80);
                cout << "\n\t\t\t ENTER NAME OF ITEM : ";
                cin.getline(name, 80);
                cout << "\n\t\t\t ENTER PRODUCT ID : ";
                cin >> product_id;
                inv1.deleteItem(name, product_id);
                break;

            case 3:
                cin.getline(name, 80);
                cout << "\n\t\t\t ENTER NAME OF ITEM : ";
                cin.getline(name, 80);
                cout << "\n\t\t\t ENTER PRODUCT ID : ";
                cin >> product_id;

                itemEntry *test;
                test = inv1.searchi(name, product_id);
                if (test != NULL) 
                {
                    cout<<endl<<endl;
                    cout << "\n\t------------->SEARCHING RESULT<--------------";
                    cout << "\n\t\t\t   ITEM FOUND" << "\n\t\t\t NAME OF THE ITEM:" << test->name << "\n\t\t\t COMPANY NAME :"
                         << test->company << "\n\t\t\t PRODUCT ID:" << test->product_id
                         << "\n\t\t\t NUMBER OF COPIES AVAILABLE:" << test->copies
                         << "\n\t\t\t UNIT PRICES PER ITEM:" << test->unitPrice;
                }
                else 
                    cout << "\n\t\t\t ITEM NOT FOUND";
                break;

            case 4:
                cout << "\n\t\t\t ENTER DETAILS FOR UPDATE : ";
                cin.getline(name, 80);
                cout << "\n\t\t\t ENTER NAME OF ITEM : ";
                cin.getline(name, 80);
                cout << "\n\t\t\t ENTER PRODUCT ID : ";
                cin >> product_id;
                cout << "\n\t\t\t ENTER TOTAL NEW ENTRY : ";
                cin >> copies;
                cout << "\n\t\t\t ENTER NEW PRICE : ";
                cin >> unit_price;
                inv1.updateItem(name, product_id, copies, unit_price);
                break;

            case 5:
                inv1.printInventory();
                break;

        //     case 6:
        //         inv1.loadInventory();
        //         break;

        //    case 7:
        //         inv1.saveInventory();
        //         break;
        }
    }
    
    while (option != 6);

    return 0;
}