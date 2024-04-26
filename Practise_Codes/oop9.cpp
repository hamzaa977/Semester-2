#include<iostream>
#include<string>
using namespace std;
 class student{
    public:
    string name;
    int roll;
    void display()
    {   
        cout<<"your name is : "<<name<<" and "<<"your roll no is :"<<roll;
    }
};

int main()
{
    int a,b;
    cout<<"enter the number of students :";
    cin>>b;
    student info[b];
    for(a=0;a<b;a++)
    {
        cout<<"enter the name : ";
       cin.ignore();
        cin>>info[a].name;
        cout<<"enter the rollno : ";
        cin.ignore();
        cin>>info[a].roll;
    }

    for(a=0;a<b;a++)
    {
        info[a].display();
    }
}