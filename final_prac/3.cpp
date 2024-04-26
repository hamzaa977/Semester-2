#include<iostream>
#include<string>
using namespace std;

class hassan;

class hamza{
private:
int roll;
int age;

public:

hamza(int a, int b)
{
    roll=a;
    age=b;
}

friend void check(hamza h1, hassan h2);

};

class hassan{
private:
int roll;
int age;

public:

hassan(int c, int d)
{
    roll=c;
    age=d;    
}

friend void check(hamza h1 , hassan h2);

};

void check(hamza h1, hassan h2)
{
    if(h1.age==h2.age)
    {
        cout<<"You guys belongs to same age group"<<endl;
    }
    else
    {
        cout<<"You guys belongs to differet age group"<<endl;
    }
}

int main()
{
hamza w1(35,19);
hassan w2(22,19);
check(w1,w2);
return 0;
}
