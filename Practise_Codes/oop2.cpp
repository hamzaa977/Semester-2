#include<iostream>
#include<string>
using namespace std;

class student{
public:
int rollno=0035;
string name="hamza sajjad";

void display();
};

void student::display()
{
    cout<<"roll no is : "<<rollno<<endl;
    cout<<"name is  : "<<name;
}

int main()
{
student result;
result.display();
return 0;
}