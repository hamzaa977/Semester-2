#include<iostream>
#include<string>
using namespace std;

class bis{
public:

int roll;
string name;
string section;

bis()
{
    roll=32;
    name=" HARI LAMA ";
    section=" A ";
}

bis(int a,string b,string c)
{
    roll=a;
    name=b;
    section=c;
}

bis(const bis &n)
{
roll=n.roll;
name=n.name;
section=n.section;
}   

void func()
{
    cout<<"your roll no is  : "<<roll<<endl;
    cout<<"your name is :"<<name<<endl;
    cout<<"your section is :"<<section<<endl;
}

};

int main()
{
    bis a1;
    a1.func();
    cout<<"-------------"<<endl;
    bis a2(69,"HARI LAMA","A");
    a2.func();
    cout<<"-------------"<<endl;
    bis a3(a2);
    a3.func();

    cout<<" -----------------"<<endl;
    cout<<"|                 |"<<endl;
    cout<<"|  SOOJA  BHAII   |"<<endl;
    cout<<"|                 |"<<endl;
    cout<<"| STREAKS BHEJNY  |"<<endl;
    cout<<"|       SY        |"<<endl;
    cout<<"| GHAR NHI CHALTA |"<<endl;
    cout<<"|                 |"<<endl;
    cout<<" -----------------"<<endl;
    return 0;
}