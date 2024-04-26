#include<iostream>
#include<string>
using namespace std;

class animal{
    public:
    string name;
    int age;
    void display();
public:
    animal();
    animal(string a, int b);

};

animal::animal()
{
    name="babar-sher";
    age=18;
}

animal::animal(string a,int b)
{
    name=a;
    age=b;
}

void animal::display()
{
    cout<<"animal name is : "<<name<<endl;
    cout<<"animal age is  : "<<age;
}

int main()
{

    animal a1;
    a1.display();
    cout<<endl;
    
    cout<<"--------  -------  --------- ";
    
    cout<<endl;
    animal a2;
    a2.display();

    return 0;
}