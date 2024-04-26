#include<iostream>
#include<string>
using namespace std;

class student{
public:
string name;
int roll;

void display()
{
    cout<<"name is : "<<name<<"  &  "<<"roll no is : "<<roll<<endl;
}
};

int main()
{
int x,y;
cout<<"enter the number of students : ";
cin>>y;
cout<<endl;
    student info[y];
    for(x=0;x<y;x++)
    {
        cout<<"enter the name of student : ";
        cin.ignore();
        getline(cin,info[x].name);
        cout<<"-----------------";
        cout<<"enter the roll number  :";
        cin.ignore();
        cin>>info[x].roll;
    }

    for(x=0;x<y;x++)
    {
        info[x].display();
    }
    return 0;
}