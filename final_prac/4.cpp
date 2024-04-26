#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int roll;

public:

hamza()
{
    roll=35;
}

void operator +()
{
    roll=roll+5;
    cout<<roll;
}

};


int main()
{
hamza h1;
+h1;
return 0;
}
