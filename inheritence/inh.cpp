#include<iostream>
using namespace std;


class hamza{
public:
string name;
int age;

hamza()
{
    name="default hamza";
    age=10;
}

void func()
{
    cout<<"your name is :"<<name<<endl;
    cout<<"your age is :"<<age<<endl;
}

};


class fic:public hamza{
public:
string surname="blah blah";

void display()
    {
        func();
        cout<<"your surname is : "<<surname;
    }
};

class bis:public fic{
public:
string school_name="bouddha intl school";

void info()
{
    display();
    cout<<endl;
    cout<<"your school name is :"<<school_name;
}



};

int main()
{
    bis f1;
    f1.info();
return 0;
}