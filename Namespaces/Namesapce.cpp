#include<iostream>
using namespace std;

namespace cont1
{
    void func()
    {
        cout<<"you have entered container 1 "<<endl;
    }    
}

namespace cont2
{
    void func()
    {
        cout<<"you have entered cont 2 "<<endl;
    }

    namespace cont3
    {
        void func()
        {
            cout<<"You have entered the container 3 which is neted"<<endl;
        }       
    }
}


int main()
{
    cout<<"here you go for the forst one : "<<endl;
    cont1::func();
    cout<<endl;
    cont2::func();
    cout<<endl;
    cont2::cont3::func();
    cout<<"----------------------------------------------\n";
    cout<<":: are called Scope Resolution Operator"<<endl;
    cout<<"----------------------------------------------\n";

    return 0;
}