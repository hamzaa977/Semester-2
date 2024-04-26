#include<iostream>
using namespace std;


class st{
public:

string name;
string grade;
int age;
int roll;

st()
{
    name="hamza sajjad";
    grade="bs-ai";
    age=19;
    roll=0035;
}

st(string a, string b, int c, int d)
{
name=a;
grade=b;
age=c;
roll=d;
}

st(const st &n)
{
name=n.name;
grade=n.grade;
age=n.age;
roll=n.roll;
}

void func()
{
cout<<"your name is  :"<<name<<endl;
cout<<"your grade is : "<<grade<<endl;
cout<<"your age is : "<<age<<endl;
cout<<"your roll no is : "<<roll<<endl;
}


};

int main()
{
    st s1;
    s1.func();

    cout<<"______________"<<endl;

    st s2("Hamza","artificial intelligence",18,3500);
    s2.func();

    cout<<"_________________"<<endl;
    
    st s3(s1);
    s3.func();


    return 0;
}