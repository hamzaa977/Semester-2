#include<iostream>
using namespace std;

class hamza{
public:
string name;
int age;
int roll;

hamza()
{
    name="default";
    age=99;
    roll=1;

}

hamza(string a, int b, int c)
{
    name=a;
    age=b;
    roll=c;
}

hamza(const hamza& n)
{
    name=n.name;
    age=n.age;
    roll=n.roll;
}

void func()
{
    cout<<"your name is: "<<name<<endl;
    cout<<"your age is :"<<age<<endl;
    cout<<"your roll number is :"<<roll<<endl;
}
};
int main()
{
    int nos;
    cout<<"enter the number of students :";
    cin>>nos;
cout<<endl<<endl;

    hamza st[nos];

    for (int i = 0; i < nos; i++)
    {
        cout<<endl;
        cout<<"enter the name of student :";
        cin.ignore();
        getline(cin,st[i].name);
        cout<<"enter your age:";
        cin>>st[i].age;
        cout<<"enter your roll number :";
        cin>>st[i].roll;
    }

    for (int i = 0; i < nos; i++)
    {
        cout<<"--------------------------------"<<endl;
        st[i].func();        
    }

cout<<"---------------<  constructors  >-----------------"<<endl;
    hamza h1;
    h1.func();

    cout<<"--------------------------------"<<endl;

    hamza h2("ali shah",20,36);
    h2.func();

    cout<<"--------------------------------"<<endl;

    hamza h3(h1);
    h3.func();
    
        
return 0;
}