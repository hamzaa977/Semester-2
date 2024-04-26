#include<iostream>
#include<string>
using namespace std;

class student{

public:
string name;
int roll;
string sub;
};

int main()
{
 
    student st1;
    st1.name="hamza sajjad";
    st1.roll=0035;
    st1.sub="bs-ai";
    cout<<st1.name<<" "<<st1.roll<<" "<<st1.sub<<" "<<endl;

return 0;
}
