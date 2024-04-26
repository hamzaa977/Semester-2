#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    int rollno;
    string name;

student()
{
 rollno=5;
 name="hamza"; 
}

student(int r, int n)
{
    rollno=r;
    name=n;
}
void display()
{
    cout<<"name is : "<<name;
    cout<<endl;
    cout<<"roll no is  :" <<rollno;
}
};

int main()
{
    student s1;
    // cout<<s1.rollno<<endl<<s1.name<<endl;
    s1.display();
    cout<<"----------------------------"<<endl<<endl<<endl;
    
    student s2;
    cout<<"enter your name : ";
    getline(cin,s2.name);
    cout<<"enter your roll number : ";
    cin>>s2.rollno;
    // cout<<s2.rollno<<endl;
    // cout<<s2.name<<endl;
    s2.display();
    cout<<"--------------------------";
    return 0;
}