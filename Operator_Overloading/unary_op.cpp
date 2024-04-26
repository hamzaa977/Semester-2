#include<iostream>
#include<string>
using namespace std;

class hamza{
public:
int roll=35;


hamza(int a)
{
    roll=a;
}

void operator +();
void operator -();
void display();
};

void hamza::operator +()
{
    roll=roll+5;
}

void hamza::operator-()
{
    roll=roll+10;
}

void hamza::display()
{
    cout<<roll;
}

int main()
{
hamza h1(35);
+h1;
-h1;
h1.display();
cout<<endl;
// -h1;
// h1.display();

return 0;
}
