#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="hamza";

    if(a.empty())
    {
        cout<<"a string is empty"<<endl;
    }
    else
    {
        cout<<"a string is not empty"<<endl;
        a.clear();
        if(a.empty())
        {
            cout<<"string a is empty"<<endl;
        }
        else
        {
            cout<<"a string is not empty"<<endl;
        }
    }
    return 0;
}