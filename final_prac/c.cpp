#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:
hamza(int a):roll(a){}

int operator +();

void display();

};

int hamza::operator+()
{
    roll=roll+10;
    return roll;
}

void hamza::display()
{
    cout<<"Roll number is :"<<roll<<endl;
}

int main()
{
hamza h1(19);
h1.display();
cout<<endl;
+h1;
h1.display();

return 0;
}
