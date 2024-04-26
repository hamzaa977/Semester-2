#include<iostream>
using namespace std;


class student{
public:

int roll;
int age;

student()
{
    roll=35;
}

void operator ++()
{
    roll=roll-5;
}

void info()
{
    cout<<"roll no :"<<roll<<endl;
}

};


int main()
{
    student s1;
    ++s1;
    s1.info();
return 0;
};