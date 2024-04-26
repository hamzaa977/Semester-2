#include<iostream>
using namespace std;


namespace hamza
{
    void func()
    {
        cout<<"my name is hamza"<<endl;
    }
}

namespace ali
{
    void func()
    {
        cout<<"my name is ali"<<endl;
    }
}

int main()
{
    using namespace hamza;
    func();
    cout<<"new line"<<endl;
    hamza::func();
    ali::func();

return 0;
}