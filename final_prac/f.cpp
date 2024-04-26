#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;   

public:
hamza(int a):roll(a){}

int operator +(hamza h1)
{
    roll=roll+h1.roll;
    return roll;
}


int operator -(hamza h1)
{
    roll=roll+h1.roll;
    return roll;
}


int operator *(hamza h1)
{   
    roll=roll*h1.roll;
    return roll;
}


};


int main()
{
hamza h1(3);
hamza h2(4);
hamza h3(5);

cout<<h1+h2*h3;

return 0;
}
