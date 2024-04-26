#include <iostream>
using namespace std;

namespace first_namespace
{
void func()
{
    cout<<"inside first namespace"<<endl;
}
}


namespace second_namespace
{
void func()
{
    cout<<"inside second namespace"<<endl;
}
}


int main()
{
    
    
    cout<<"just nothing !";
    first_namespace::func();
    second_namespace::func();

    return 0;
}