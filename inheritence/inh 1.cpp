#include<iostream>
using namespace std;


class student{
private:
string name="default hamza";
int age=10;
int roll=10;

//make default const and assign values ther
// on other hand  initialize the values to them diectly in declaring step
//both have same purpose in inheritence
public:
void func()
{
    cout<<"your name is :"<<name<<endl;
    cout<<"your age is :"<<age<<endl;
    cout<<"your roll number is :"<<roll<<endl;
}
};


class fur : private student{
public:
int no_chairs=50;
int no_tab=50;


public:
void dis()
{
    func();
    cout<<endl;
    cout<<"the number of chairs are :"<<no_chairs<<endl;
    cout<<"the number of tables are :"<<no_tab<<endl;
}
};


int main()
{
    student h1;
    h1.func();        

    cout<<endl<<endl<<"__________________"<<endl;

    fur fur1;
    fur1.dis();
    return 0;
}