#include<iostream>
#include<string>
using namespace std;

class hussain;

class hamza{
private:
int age;

public:
hamza(int a):age(a){}

friend void check(hamza h1, hussain h2);
void display();

};

class hussain{
private:
int age1;

public:
hussain(int b):age1(b){}

friend void check(hamza h1, hussain h2);
void display();

};

void hamza::display()
{
    cout<<"Age number  1 :"<<age<<endl;
}

void hussain::display()
{  
    cout<<"Age number 2 :"<<age1<<endl;
}

void check(hamza h1, hussain h2)
{
    if(h1.age==h2.age1)
    {
        cout<<"Same age "<<endl;
    }
    else
    {
        cout<<"Different age"<<endl;
    }
}

int main()
{
hamza w1(19);
hussain w2(19);
check(w1,w2);
w1.display();
w2.display();
return 0;
}
