#include<iostream>
#include<string>
using namespace std;
 
class staff{
public:

long long num;
string name;
string bike;

staff()
{
    num=03001234567;
    name=" sir / ma'am ";
    bike="your bike";
}

staff(int a,string b,string c)
{
    num=a;
    name=b;
    bike=c;
}

staff(const staff &p)
{
    num=p.num;
    name=p.name;
    bike=p.bike;
}

void func()
{
    cout<<"your contact number is  : "<<num<<endl;
    cout<<"your name is : "<<name<<endl;
    cout<<"your bike is :"<<bike<<endl;
}
};

int main()
{
    staff s1;
    s1.func();
cout<<"------------"<<endl<<endl;
staff s2(377,"hamza","ybr_IA");
s2.func();
cout<<"------------"<<endl<<endl;
staff s3(s2);
s3.func();
    return 0;
}