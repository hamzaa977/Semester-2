#include<iostream>
#include<string>
using namespace std;

class student{
public:
int roll;
int age;

student()
{
    age=19;
    roll=35;
}

void operator ++()
{
    age=age+2;
    roll=roll-2;
}

void func();

};

void student::func()
{
    cout<<"After 2 years:"<<endl<<endl;
    cout<<"Your age will be :"<<age<<endl;
    cout<<"Your new roll number :"<<roll;
}

int main()
{

student s1;
++s1;
s1.func();

return 0;
}
