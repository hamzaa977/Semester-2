#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:
hamza(){}

hamza(int a):roll(a){}

int operator &&(hamza h1)
{
    roll= roll || h1.roll;
    return roll;
}

int display() 
{
    return roll;
}

};


int main()
{
hamza w1(30);
hamza w2(15);
hamza w3=w1 && w2;
cout<<w3.display();

return 0;
}
