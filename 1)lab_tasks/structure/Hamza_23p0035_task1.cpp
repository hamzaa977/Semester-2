#include<iostream>
#include<string>
using namespace std;

struct ProductData {
string name;
int price;
int quantity;
};




ProductData createProductData()
{
    ProductData pr;
    cout<<"enter the name of a product : ";
    cin>>pr.name;
    cout<<endl;
    cout<<"enter the price of a product :";
    cin>>pr.price;
    cout<<endl;
    cout<<"enter the quantity of a product :";
    cin>>pr.quantity;
    cout<<endl<<endl;
    return pr;
}

void displayProductData(struct ProductData &p)
{

    cout<<"the name of your peoduct is : "<<p.name<<endl;
    cout<<"the price of your product is : "<<p.price<<endl;
    cout<<"the quantity of your produst is :"<<p.quantity<<endl;

}
int main()
{

    ProductData p1;
    ProductData p2;

    p1=createProductData();
    p2=createProductData();

    cout<<endl<<endl<<"info:"<<endl;

    displayProductData(p1);
    cout<<"----------------"<<endl;
    displayProductData(p2);
    return 0;
}