#include<iostream>
#include<string>
using namespace std;

class student{
public: 
string name;
int roll;
void display()
{
    cout<<"your name is : "<<name<<" & "<<"roll no is : "<<roll<<endl;
    cout<<"---------------------------------------------------"<<endl;
}
};

int main()
{
    int x,nos;
    cout<<"enter the number of students : ";
    cin>>nos;
    student info[nos];

    for(x=0;x<nos;x++)
    {
        cout<<"enter the name of students : ";
        cin.ignore();
        cin>>info[x].name;
        cout<<endl;
        cout<<"enter your roll number :";
        cin.ignore();
        cin>>info[x].roll;
        cout<<endl;
    }

    for(x=0;x<nos;x++)
    {
        info[x].display();
    }
}       