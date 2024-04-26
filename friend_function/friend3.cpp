#include<iostream>
#include<string>
using namespace std;

class person;

class bullet{
private:
int position;
int speed;

public:
bullet(int a, int b):position(a),speed(b){}
friend void check(bullet& b1 , person& p1);
};


class person{
private:
int position;

public:
int hp=100;
person(int c,int d):position(c),hp(d){}
friend void check(bullet& b1,person& p1);
};

void check(bullet& b1, person& p1)
{
    if(p1.position==b1.position)
    {
        cout<<"Your character is getting hit by the bullet !"<<endl;
        cout<<"please dodge the bullets"<<endl;
        p1.hp-=20;
    }
    else
    {
        cout<<"You are in safe zone for a moment :) "<<endl;
    }
}


int main()
{
bullet w1(50,10);
person w2(50,100);
cout<<"Health of character before the fight:"<<w2.hp;
cout<<endl<<endl;
check(w1,w2);
cout<<endl<<endl;
cout<<"Health of character before the fight:"<<w2.hp;
return 0;
}