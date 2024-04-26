#include<iostream>
using namespace std;


class student{
public:
int roll;
int age;


student()
{
    roll=35;
    age=10;
}

void operator *()
{
    roll*age;
}

void func()
{
    cout<<"before over loading age is :"<<age<<endl;
    cout<<"before over loading roll number is :"<<roll<<endl;
    cout<<"after over loading  result is :"<<roll*age<<endl;
}

};
int main()
{
    student s1; 
    s1.func();

return 0;
}