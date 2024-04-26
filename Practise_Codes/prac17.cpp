#include<iostream>
#include<string>
using namespace std;

class student{
public:
    void info();
};

void student::info()
{
    cout<<"student name : Hamza Sajjad"<<endl;
}

int main()
{
    student rollno;
    rollno.info();
    return 0;
}