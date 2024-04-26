#include<iostream>
using namespace std;


class hamza{
public:
string name;
int age;

void func()
{
    cout<<"your name is :"<<name<<endl;
    cout<<"your age is :"<<age<<endl;
}
};


int main()
{
    int n;
    cout<<"enter number of students :";
    cin>>n;

    hamza h1[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter the name of student "<<i+1<<" :";
        cin.ignore();
        getline(cin,h1[i].name);

        cout<<"ENTER THE AGE OF STUDENT "<<i+1<<" :";
        cin>>h1[i].age;
    }

    for(int i=0;i<n;i++)
    {
        h1[i].func();
    }
       
return 0;
}