#include <iostream>
#include <string>
using namespace std;

class bullet;
class person;

class bullet
{
private:
    int position;
    int speed;

public:
    bullet(int a, int b) : position(a), speed(b) {}
    friend void check(bullet& b1, person& p1);
};



class person
{
private:
    int position;

public:
    int hp = 100;
    person(int c, int d) : position(c), hp(d) {}
    friend void check(bullet& b1, person& p1);
};



void check(bullet& b1, person& p1)
{
    if (b1.position == p1.position)
    {
        cout << "Your character is getting hit by the bullet !" << endl;
        cout << "Please dodge the bullets" << endl;
        p1.hp -= 20;
    }
    else
    {
        cout << "You are in a safe zone for a moment :)" << endl;
    }
}



int main()
{
    bullet w1(50, 10);
    person w2(50, 100);

    cout << "Health of character before the fight: " << w2.hp << endl;
    check(w1, w2);
    cout << endl << "Health of character after the fight: " << w2.hp << endl;

    return 0;
}
