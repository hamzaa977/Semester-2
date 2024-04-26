#include<iostream>
#include<string>
using namespace std;

class hamza{
public:
int roll;

hamza(int a):roll(a){}

int operator +(hamza h1);
int operator -(hamza h1);
int operator *(hamza h1);

};

int hamza::operator+(hamza h1)
{
    int m = roll+h1.roll;
    return m;
}


int hamza::operator-(hamza h1)
{
    int m = roll-h1.roll;
    return m;
}


int hamza::operator*(hamza h1)
{
    int m = roll*h1.roll;
    return m;
}




int main()
{
hamza w1(2);
hamza w2(3);
hamza w3(4);

cout<<w1+w2*w3;

return 0;
}
