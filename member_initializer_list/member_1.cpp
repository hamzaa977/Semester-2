#include<iostream>
using namespace std;

class hamza{
private:

string name;
int age;
int roll;

public:

hamza()     //default conctructor
{
    cout<<"";       
}

hamza(string a, int b, int c)       //parameterized constructor
{
    name=a;
    age=b;
    roll=c;
}

void func()         //display function
{
    cout<<"your name is:"<<name<<endl;
    cout<<"your age is:"<<age<<endl;
    cout<<"your roll is:"<<roll<<endl;
}

};

int main()
{
        
hamza h1("hamza sajjad",19,35);
h1.func();

return 0;
}

// this way is wothout using mamber initializer list

