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
        if(a.empty())       // using a.clear() will make a string empty/clear/null and than according to if condition we will check again if its empty or not.
        {
            cout<<"now the string is empty afterall"<<endl;
        }
    }
    return 0;
}