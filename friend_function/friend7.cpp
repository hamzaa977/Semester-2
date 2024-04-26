#include<iostream>
#include<string>
using namespace std;

class gun;

class person{
private:
int position;

public:
int hp=100;
person(int a):position(a){}
friend void check(person p1, gun g1);
};


class gun{
private:
int damage;
int position;

public:
gun(int c , int d):damage(c),position(d){}
friend void check(person p1, gun g1);
};


void check(person p1, gun g1)
{
    if(p1.position==g1.position)
    {
        p1.hp=p1.hp-25;
        cout<<"You got hit by the bullet ! "<<endl;
        cout<<"Health:"<<p1.hp<<endl<<endl;
    }
    else
    {
        cout<<"you are in safe zone"<<endl;
    }
}


int main()
{
person w1(50);
gun w2(30,50);

check(w1,w2);

return 0;
}
