#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=65;
    cout<<a<<endl;
    char b=char(a);
    cout<<b<<endl;
    string c="HAMZ";
    string d=to_string(b);
    cout<<c+d;
    return 0;
}