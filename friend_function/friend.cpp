#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
string name;

public:
teacher()
{
    name="default";
}

teacher(string a):name(a){}

friend void tec(teacher t);

};


void tec(teacher t )
{
    cout<<"Teacher name is :"<<t.name<<endl;
}




int main()
{   
teacher t1;
tec(t1);
return 0;
}
