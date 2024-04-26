#include<iostream>
using namespace std;

class hamza{

private:
string name;
int age;

public:
int roll;

hamza()
{
    name="default name";
    age=11;
    roll=11;
}

hamza(string a, int b, int c)
{
    name=a;
    age=b;
    roll=c;
}

void func();
void setdata(string a, int b , int c);
string getname();
int getage();
int getroll();
};

void hamza::func()
{
    cout<<"your name is : "<<name<<endl;
    cout<<"your age is  :"<<age<<endl;
    cout<<"your roll number is :"<<roll<<endl;    
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


int main()
{
    hamza h1;
    h1.func();

    cout<<"_________________"<<endl;

    hamza h2;
    h2.setdata("hamza sajjad",19,35);
    h2.func();

    return 0;

}