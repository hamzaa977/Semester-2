#include<iostream>
#include<string>

using namespace std;

class InventoryItem{
private:
int id;
string name;
int quantity;
string category;

public:
InventoryItem(){};
InventoryItem(int id, string name, int quantity, string category): id(id), name(name), quantity(quantity), category(category){}

int getId() const {return id;}
const string& getName() const { return name; }
int getQuantity() const { return quantity; }
const string& getCategory() const { return category; }
void setQuantity(int quantity) { this->quantity = quantity;}

};

class Inventory{

private:
InventoryItem* items;
int numItems;
int capacity;

Inventory(){}

int findItem(int id) const
{
for (int i=0;i<numItems;i++)
{
    if(items[i].getId()==id)
    {
        return i;
    }
}
return -1;
}

void ensureCapacity(int capacity)
{
if (this->capacity<capacity)
    {
    InventoryItem* newItems=new InventoryItem[capacity];
            for (int i=0;i<numItems;i++)
            {
                newItems[i]=items[i];
            }
            delete[] items;
            items=newItems;
            this->capacity=capacity;
    }
}

public:
    Inventory():items(nullptr),numItems(0),capacity(0) {}


    ~Inventory()
    {
        delete[] items;
    }

    void addItem(int id,string name,int quantity,string category)
    {
        if(findItem(id)!=-1)
        {
            cout << "invalid" << id <<"Exist before" << endl;
            return;
        }

        if (numItems==capacity) {
            ensureCapacity(capacity*2);
        }

        items[numItems]=InventoryItem(id,name,quantity,category);
        numItems++;
    }

    void update(int id, int quantity)
    {
        int index=findItem(id);
        if(index==-1)
        {
            cout << "invalid"<< id<<"couldnt found"<< endl;
            return;
        }
        items[index].setQuantity(quantity);
    }

    void getIteminfo(int id)const
    {
        int index=findItem(id);
        if (index==-1)
        {
            cout << "Invalid"<<id<<"couldnot found" << endl;
            return;
        }

        const InventoryItem& item=items[index];
        cout << "Id :" << item.getId() << endl;
        cout << "Name :" << item.getName() << endl;
        cout << "Quantity :" << item.getQuantity() << endl;
        cout << "Category :" << item.getCategory() << endl;
    }

    void getCount()const
    {
        int count[3]={0,0,0};

        for (int i=0;i<numItems;i++) {
            if(items[i].getCategory()=="Food")
            {
                count[0]++;
            }
            else if(items[i].getCategory()=="Tool")
            {
                count[1]++;
            } 
            else if(items[i].getCategory()=="Equipment")
            {
                count[2]++;
            }
        }
        cout<<"Count of food item :"<< count[0]<< endl;
        cout<<"Count of tool item :"<< count[1]<< endl;
        cout<<"Count of equipment :"<< count[2]<< endl;
    }
};

int main()
{
    // cout<<"INVENTORY MANAGAMENT SYSTEM";
    Inventory i1;
    i1.addItem(1,"Bread",5,"Food");
    i1.addItem(2,"Hammer",3,"Tools");
    i1.addItem(3,"Nails",3,"Equipment");
    i1.update(1,3);
    i1.getIteminfo(2);
    i1.getCount();
    return 0;
}