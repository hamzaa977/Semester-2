#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;
int age;

public:
hamza():roll(0),age(0){}

hamza(int a , int b):roll(a),age(b){}

friend hamza operator +(hamza h1, hamza h2)
{
    hamza h3;
    h3.roll = h1.roll+h2.roll;
    h3.age  = h1.age + h2.age;
    return h3;
}

void display()
{
    cout<<"Age is :" << age << endl;
    cout<<"Roll is :" << roll << endl;
}

};


int main()
{
hamza w1(35,19);
hamza w2(5,10);
hamza w3;
w3=w1+w2;
w3.display();

return 0;
}
