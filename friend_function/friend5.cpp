#include<iostream>
#include<string>
using namespace std;

class gun1;
class gun2;

class gun1{
private:
int position;
int speed;

public:
gun1(int a, int b):position(a),speed(b){}
friend void check(gun1& g1 , gun2& g2);
};


class gun2{
private:
int position;

public:
int hp=100;
gun2(int c, int d):position(c),hp(d){}
friend void check(gun1& g1, gun2& g2);
};

void check(gun1& g1 , gun2& g2)
{
    if(g1.position==g2.position)
    {
        // cout<<"player got hit by bullet"<<endl;
        g2.hp -= 25;
        if(g2.hp==0)
        {
            cout<<"Player died :( )"<<"Game Over"<<endl;
        }
        else if(g2.hp<=0)
        {
            cout<<"Player died :( )"<<"Game Over"<<endl;
        }
    }
    else
    {
        cout<<"you are safe "<<endl;
    }
}


int main()
{

gun1 w1(30,40);
gun2 w2(30,100);

for(int i=0; i<5; i++)
{
// cout<<"Before fight your hp is :"<<w2.hp<<endl<<endl;
check(w1,w2);    
cout<<"After fight your hp is :"<<w2.hp<<endl<<endl;
}

return 0;
}
