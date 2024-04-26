#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:
hamza(){}

hamza (int a):roll(a){}

int operator >(hamza h1)
{
    roll=roll || h1.roll;
    return roll;
}

int disaplay()
{
    return roll;
}

};



int main()
{
hamza obj1(30);
hamza obj2(5);
hamza result;
result=obj1>obj2;
cout<<result.disaplay();
cout<<endl;

if(result.disaplay()==1)
{
    cout<<"true";
}
else
{
    cout<<"false";
}

return 0;
}
