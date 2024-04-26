#include <iostream>
#include <string>
using namespace std;

class shop{
public:
    string sh_name;
    int sh_id;
public:

shop()
{
    cout<<"Wellcome to our Shop, What would you like to buy ?"<<endl;
}

shop(string a, int b)
{
    sh_name=a;
    sh_id=b;
}

void display()
{
    cout<<"Shop name is :"<<sh_name;
    cout<<endl;
    cout<<"Shop id is :"<<sh_id;
    cout<<endl;
}

};

class Product:public shop
{
private:
    string name;
    double price;
    int quantity;

public:
Product(const string& _name, double _price, int _quantity): name(_name), price(_price), quantity(_quantity) {}

    void display()
    {
        display();
        cout<<"Product:"<<name<<"   Price is: " <<price<<"   Quantity: "<<quantity<<endl;
    }

    double calculateTotal()
    {
        return price*quantity;
    }
};



int main()
{
    Product p1("Laptop",800.0,5);
    Product p2("Mouse",20.0,10);

    p1.display();
    cout << "Total value of product is:"<<p1.calculateTotal()<<endl;
    p2.display();
    cout << "Total value of product is: "<<p2.calculateTotal() << endl;

    return 0;
}
