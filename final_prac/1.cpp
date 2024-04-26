#include<iostream>
#include<string>
using namespace std;

class hamza{
public:
int roll;

hamza(int a):roll(a){}

void operator +();

};

void hamza::operator+()
{
    roll=roll+5;
}


int main()
{
hamza h1(30);
+h1;
cout<<h1.roll;
return 0;
}
