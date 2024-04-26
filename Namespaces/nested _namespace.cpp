#include<iostream>
#include<string>
using namespace std;

namespace first
{
    void func()
    {
        cout<<"you have entered the foorst one "<<endl;
    }
}

namespace second
{
    void func()
    {
        cout<<"you have entered the second "<<endl;
    }
    namespace third
    {
        void func()
        {
            cout<<"you have entered the third one"<<endl;
        }
    }
}


int main()
{
    cout<<"---------------"<<endl;
    first::func();
    cout<<"---------------"<<endl;
    second::func();
    cout<<"---------------"<<endl;
    second::third::func();
    cout<<"---------------"<<endl;
    return 0;
}