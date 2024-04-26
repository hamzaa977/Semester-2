#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:
hamza(){}

hamza (int a):roll(a){}

int operator >(hamza h1)
{
    roll=roll+h1.roll;
    return roll;
}

int disaplay()
{
    return roll;
}

};



int main()
{
hamza obj1(30);
hamza obj2(5);
hamza h3;
h3=obj1>obj2;
cout<<h3.disaplay();

return 0;
}
