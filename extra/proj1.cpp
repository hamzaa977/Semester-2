#include<iostream>
using namespace std;

class inv{

public:
string name;
int age;

private:
int roll;

public:
void func()
{
    cout<<"your name is :"<<name;
}

~inv()
{
    cout<<"object destroyed";
}

};

int main()
{
    inv n1;
    
}
