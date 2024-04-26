#include<iostream>
#include<string>
using namespace std;

class hamza{
public:
string name;
int bed;


void func()
{
    cout<<"hospital name is:"<<name<<endl;
    cout<<"number of beds are:"<<bed<<endl;
}

};

int main()
{

int noh;
cout<<"enter number of hospitals :";
cin>>noh;

hamza hos[noh];

for(int i=0;i<noh;i++)
{
    cout<<"enter the name of hospital :"<<endl;
    cin.ignore();
    getline(cin,hos[i].name);
    cout<<endl;
    cout<<"enter the number of beds in hospital :";
    cin>>hos[i].bed;
}

for(int i=0;i<noh;i++)
{
    hos[i].func();
}

return 0;
}