#include<iostream>
using namespace std;

class hamza{

private:
int roll;

public:
string name;
int age;

hamza()
{
 name="hamza";
 age=19;
 roll=35;   
}

hamza(string a, int b, int c)
{
name=a;
age=b;
roll=c;

}

string getname();
int getage();
int getroll();
void func();
void setdata(string a, int b, int c);

};


string hamza::getname()
{
    return name;
}

int hamza :: getage()
{
    return age;
}

int hamza :: getroll()
{
    return roll;
}

void hamza :: func()
{
    cout<<"your name is : "<<name<<endl;
    cout<<"your age is : "<<age<<endl;
    cout<<"your roll number is : "<<roll<<endl;
    cout<<"______________________________"<<endl;
}

void hamza ::setdata(string a, int b, int c){
name=a;
age=b;
roll=c;
}

int main()
{
    hamza banda;
    banda.func();

   hamza banda2;
   banda2.setdata("hamza sajjad",18,01);
   banda2.func();

    return 0;
}
