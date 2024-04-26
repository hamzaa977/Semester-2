#include<iostream>
#include<string>
using namespace std;
class gun2;

class gun{
private:
int position;
int speed;
int dir;

public:
gun(int a, int b, int c):position(a),speed(b),dir(c){}

friend void check(gun g1,gun2 g2);
};


class gun2{
private:
int health;
int position;

public:
gun2(int d, int e):health(d),position(e){}

friend void check(gun g1, gun2 g2);

};

void check(gun g1, gun2 g2)
{
    if(g1.position==g2.position)
    {
        cout<<"Player got hit by the bullet"<<endl;
    }
    else
    {
        cout<<"Player didnt got hit by the bullet"<<endl;
    }
}


int main()
{
gun w1(22,23,24);
gun2 w2(23,22);
cout<<"Checking the code if it works or not"<<endl<<endl;
check(w1,w2);

return 0;
}
