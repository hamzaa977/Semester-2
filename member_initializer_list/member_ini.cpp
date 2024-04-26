#include<iostream>
using namespace std;

class hamza{

private:
string name;
int age;
int roll;

public:

// hamza()
// {
//     name="hamza sajjad";
//     age=19;
//     roll=35;
// }

hamza(string a, int b, int c): name(a),age(b) ,roll(c)
{}

void func()
{
    cout<<"your name is :"<<name<<endl;
    cout<<"your age is :"<<age<<endl;
    cout<<"your roll numebe is :"<<roll<<endl;
}


};

int main()
{
        
    hamza h1("ali shah",20,36);
    h1.func();
    
return 0;
}

// this way is using member initializer list