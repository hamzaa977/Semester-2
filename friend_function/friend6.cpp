#include<iostream>
#include<string>
using namespace std;

class hassan;
class hamza;

class hamza{
private:
int roll;
int age;

public:
hamza(int a, int b):roll(a),age(b){}
friend void check(hamza h1, hassan h2);

};


class hassan{
private:
int age;  

public:
hassan(int c):age(c){}

friend void check(hamza h1, hassan h2);
};


void check(hamza h1, hassan h2)
{
    if(h1.age==h2.age)
    {
        cout<<"You guys belongs to same age group :) "<<endl;
    }
    else
    {
        cout<<"You guys belongs to different age group :( )"<<endl;
    }
}


int main()
{
hamza obj1(35,19);
hassan obj2(19);

check(obj1, obj2);


return 0;
}
