#include<iostream>
using namespace std;


class student{
public:

int roll;
int age;

public:

student()
{
    roll=35;
    age=19;
}

void operator ++()  //prefix
{
    ++roll;
}

void operator ++(int)
{
    roll++;
}

void func()
{
    cout<<"your roll number is   :"<<roll<<endl;
    cout<<"your age is :"<<age<<endl;
}

};
int main()
{

student s1;
++s1;
s1.func();
cout<<endl;

student s2;
s2++;
s2.func();

return 0;
}