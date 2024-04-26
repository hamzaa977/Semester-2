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
    name="default_hamza";
    age=11;
    roll=11;
}

hamza(string a, int b, int c)
{
    name=a;
    age=b;
    roll=c;
}


void func()
{
    cout<<"your name is :"<<name<<endl;
    cout<<"your age is"<<age<<endl;
    cout<<"your roll numeber is : "<<roll<<endl;
}

};

