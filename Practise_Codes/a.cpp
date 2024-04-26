#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:
hamza(int a):roll(a){}

int operator &&(hamza h1)
{
    roll=roll+h1.roll;
    return roll;
}

int display()
{
    return roll;
}

};


int main()
{
hamza w1(21);
hamza w2(7);
hamza w3=w1&&w2;
cout<<w3.display();
return 0;
}
