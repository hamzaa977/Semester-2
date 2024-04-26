#include<iostream>
using namespace std;


class hamza
{
public:
string name;
int roll;
hamza()
{
    name="hamza";
    roll=35;
}
void func()
    {
        cout<<"your name is :"<<name<<endl;
        cout<<"your roll number is :"<<roll<<endl;
    }
};


class omer:public hamza
{
public:
string dep;
omer()
{
    dep="bs-ai";
}
void func1()
    {
        func();
        cout<<"your department is :"<<dep<<endl;
    }
};


class rao:public hamza{
    private:
    string board;
    public:
    

    rao()
    {
        board="federal";
    }

    void func2()
    {
        func();
        cout<<"your board is :"<<board<<endl;
    }


};


int main()
{

rao r1;
r1.func();
cout<<"______________"<<endl;
r1.func2();
return 0;
}