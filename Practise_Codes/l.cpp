#include<iostream>
#include<string>
using namespace std;

class contact{

private:
string name;
int c_number;
string mail;

public:
void setname(string n)
{
    name=n;
}

void setc_number(int c)
{
    c_number=c;
}

void sermail(string m)
{
    mail=m;
}

string getname()
{
    return name;
}

int getc_number()
{
    return c_number;
}

string getmail()
{
    return mail;
}

};

int main()
{


return 0;
}
