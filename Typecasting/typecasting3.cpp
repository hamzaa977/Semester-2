#include<iostream>
#include<string>
using namespace std;
int main()
{
    float pf=3.14;
    cout<<"float :"<<pf<<endl;
    cout<<"----------------------"<<endl;
    int oop=int(pf);
    cout<<"into int datatype :"<<oop<<endl;
    cout<<"----------------------"<<endl;
    char alpha=char(oop);
    cout<<"into character"<<alpha<<endl;
    cout<<"--------------------"<<endl;
    string a="hamza";
    string b;
    b=to_string(pf)+" "+to_string(oop)+" "+to_string(alpha);
    cout<<a+" "+b;
    return 0;
}