#include<iostream>
#include<string>
using namespace std;

class hussain;

class hamza{
private:
int roll;
int age;

public:
hamza(){}
hamza(int a):roll(a){}

friend hamza operator+(hamza h1, hamza h2)
{
    hamza h3;
    h3.roll=h1.roll+h2.roll;
    h3.age=h1.age+h2.age;
}

void display()
{
    
}

};
