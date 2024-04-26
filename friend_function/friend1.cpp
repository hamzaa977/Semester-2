#include<iostream>
#include<string>
using namespace std;

class hamza{
private:

int roll;
string name;

public:
hamza()
{
    name="default hamza";
    roll=00;
}

hamza(string a, int b)
{
    name=a;
    roll=b;
}

friend void me(hamza h);

};

void me(hamza h)
{
    cout<<"My name is :"<<h.name<<endl;
    cout<<"My id is:"<<h.roll<<endl;
}


int main()
{
hamza h1;
me(h1);
return 0;
}
