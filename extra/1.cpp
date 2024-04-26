#include<iostream>
#include<string>
using namespace std;

namespace hamza
{
    void func()
    {
        cout<<"you have entered hamza zone";
    }
}

namespace hamza1
{
    void func()
    {
        cout<<endl<<"no one is here please get out";
    }
     namespace hamza2
     {
        void func()
        {
            cout<<endl<<"havent you gone yet ? ";
        }
     }
}

int main()
{
    hamza::func();
    hamza1::func();
    hamza1::hamza2::func();
    return 0;
}