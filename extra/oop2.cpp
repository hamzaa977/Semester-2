#include<iostream>
using namespace std;

class hamza{
private:
string name;
int age;

public:
int roll;

//cons
hamza();
hamza(string a, int b , int c);

//getter and setter
void setdata(string a, int b , int c);
string getname();
int getage();
int getroll();

//display fun
void func();

};

hamza::hamza()
{
    name="default hamza";
    age=11;
    roll=11;
}

hamza::hamza(string a, int b , int c)
{
    name=a;
    age=b;
    roll=c;
}

void hamza::setdata(string a, int b , int c)
{
    name=a;
    age=b;
    roll=c;
}

string hamza::getname()
{
    return name;
}

int hamza::getage()
{
    return age;
}

int hamza::getroll()
{
    return roll;
}

void hamza::func()
{
    cout<<"your name is :"<<name<<endl;
    cout<<"your age is : "<<age<<endl;
    cout<<"your roll number is :"<<age<<endl;
}

int main()
{
    hamza h1;
    h1.func();
    cout<<"__________________"<<endl;

    hamza h2;
    h2.setdata("hamza sajjad",19,35);
    h2.func();
    cout<<"__________________"<<endl;

    hamza h3;
    h3.func();
    
    return 0;
}