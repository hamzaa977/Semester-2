#include<iostream>
using namespace std;


class hamza{
public:

string name;
int age;
int roll;

hamza()
{
    name="default";
    age=10;
    roll=10;
}

hamza(string a, int b, int c):name(a),age(b),roll(c)
{}

void func()
{
    cout<<"your name is : "<<name<<endl;
    cout<<"your age is :"<<age<<endl;
    cout<<"your roll number is :"<<roll<<endl;
}

};
int main()
{
hamza h1;
h1.func();

cout<<"___________________"<<endl;

hamza h2("hamza sajjad",19,35);
h2.func();

return 0;
}