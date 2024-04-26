#include<iostream>
using namespace std;
class ani{

public:
string name;
int age;

private:
int roll;

public:
int setroll(int s)
{
    roll=s;
}

int getroll()
{
    return roll;
    
}


};

int main()
{
    ani a1;
    a1.setroll(50);
    cout<<a1.getroll();

    return 0;
}