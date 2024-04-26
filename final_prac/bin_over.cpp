#include<iostream>
#include<string>
using namespace std;

class hamza{
public:
int roll;

hamza(int a):roll(a){}

// hamza(int a, bool):roll(a){}

int operator+(hamza h1);
int operator-(hamza h1);
int operator*(hamza h1);

};


int hamza::operator+(hamza h1)
{
    int m;
    m=roll+h1.roll;
    return m;
}
int hamza::operator-(hamza h1)
{
    int m;
    m=roll-h1.roll;
    return m;
}
int hamza::operator*(hamza h1)
{
    int m;
    m=roll*h1.roll;
    return m;
}

int main()
{
hamza w1(2);
hamza w2(4);
hamza w3(6);
cout<<w1+w2*w3;

//  AOA ibrahim bhai !
//  this code is running perfectly but
//  when i run the same code but using [-] instead of [*]
//  its not even working , can you tell me whats the reason ?

// regards
//      Hamza xD

return 0;
}
