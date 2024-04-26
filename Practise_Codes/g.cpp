#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:

hamza(){}

hamza(int a):roll(a){}

int operator +(hamza h1)
{
    roll=roll+h1.roll;
    return roll;
}

int operator -(hamza h1)
{
    roll=roll-h1.roll;
    return roll;
}

int display()
{
    return roll;
}

};



int main()
{
hamza h1(20);
hamza h2(25);
hamza h3(50);
hamza h4=h1+(h2-h3);
cout<<h4.display();

return 0;
}
