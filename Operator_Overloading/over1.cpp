#include<iostream>
using namespace std;

//postfix 
class student{
public:
int roll;

student()
{
    roll=35;
}

void operator --(int)
{
    roll--;
}

void func()
{
    cout<<"your roll number is :"<<roll<<endl;
}

};
int main()
{
    student h1;
    h1--;
    h1.func();
return 0;
}