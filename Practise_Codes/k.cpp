#include<iostream>
#include<string>
using namespace std;

class birthday{
private:
int date;
int month;
int year;

public:
void setdate(int d)
{
    date=d;
}

void setmonth(int m)
{
    month=m;
}

void setyear(int y)
{
    year=y;
}

int getdate()
{
    return date;
}

int getmonth()
{
    return month;
}

int getyear()
{
    return year;
}

};


class person{
private:
string name;

public:
birthday b;
person(int a, int b , int c, string n)
{
    name=n;

}

};

int main()
{


return 0;
}
