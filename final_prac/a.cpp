#include<iostream>
#include<string>
using namespace std;

class hussain;
class hamza{
private:
int age;

public:
hamza()
{
    age=19;
}

friend void check(hamza h1, hussain h2);

};

class hussain{
private:
int age;

public:
hussain()
{
    age=19;
}

friend void check(hamza h1, hussain h2);

};


void check(hamza h1, hussain h2)
{
    if(h1.age==h2.age)
    {
        cout<<"you guys belongs to same age group"<<endl;
    }
    else
    {
        cout<<"you guys belongs to different age group"<<endl;
    }
}

int main()
{

hamza obj1;
hussain obj2;
check(obj1,obj2);
return 0;
}
