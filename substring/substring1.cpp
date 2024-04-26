#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name : "<<endl;
    getline(cin,name);
    cout<<"your name is  : "<<name<<endl;
    int a;
    cout<<"where you want to derive the value from : ";
    cin>>a;
    int b;
    cout<<"how many values you want to derive from it : ";
    cin>>b;
    cout<<name.substr(a-1,b);
    return 0;
}