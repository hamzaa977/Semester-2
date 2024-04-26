#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
    void display()
    {
        cout<<"your name is : "<<name<<" "<<"your roll nos is : "<<roll<<endl;
    }

    student()
    {
        name="hamza sajjad";
        roll=15;
    }

    student(string a, int b)
    {
        name=a;
        roll=b;
    }

    student(const student &n)
    {
        name=n.name;
        roll=n.roll;
    }
};


int main()
{
    student st;
    st.display();
    cout<<"--------"<<endl;

    student s2("haris",56);
    // cout<<"enter your name : ";
    // cin>>s2.name;
    // getline(cin,s2.name);   
    // cout<<"enter your roll no :";
    // cin>>s2.roll;
    // cout<<endl;
    s2.display();

    cout<<"--------"<<endl;
    student s3(s2);
    s3.display();

    return 0;
}
