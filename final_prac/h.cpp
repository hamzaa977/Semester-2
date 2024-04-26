#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class hamza{
private:
int roll;

public:
hamza(int a):roll(a){}

int operator >(hamza h1)
{   
    int res;
    res=roll<h1.roll;
    if(roll<h1.roll)
    {
        cout<<"w1 is greater"<<endl;
    }
    else
    {
        cout<<"w2 is greater"<<endl;
    }
    return res;
}

};

int main()
{
hamza w1(20);
hamza w2(50);

w1>w2;

return 0;
}
