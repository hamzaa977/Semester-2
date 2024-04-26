#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:
hamza()
{
    roll=35;
}

hamza(int a):roll(a){}

int operator >(hamza h1)
{
    roll=roll>h1.roll;
    return roll;
}

};



int main()
{
hamza w1(20);
hamza w2(50);
if(w1>w2)
{
    cout<<" w1 is greater "<<endl;
}
else
{
    cout<<"W2 is greatet"<<endl;
}

return 0;
}
