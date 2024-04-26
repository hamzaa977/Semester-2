#include<iostream>
#include<string>
using namespace std;

class hamza{
public:
int roll;

hamza(int a):roll(a){}
void operator +(hamza h1);
void operator -(hamza h1);
void operator *(hamza h1);

};

void hamza::operator+(hamza h1)
{
    int m;
    m=roll+h1.roll;
    cout<<"Add :"<<m<<endl;
}

void hamza::operator-(hamza h1)
{
    int m;
    m=roll-h1.roll;
    cout<<"Sub :"<<m<<endl;
}

void hamza::operator*(hamza h1)
{
    int m;
    m=roll*h1.roll;
    cout<<"Mul :"<<m<<endl;
}


int main()
{
hamza w1(2);
hamza w2(3);
hamza w3(4);


return 0;
}
