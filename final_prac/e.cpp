#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int age;

public:
hamza()
{
    age=19;
}

void operator --()
{
    age=age*10;
}

void display()
{
    cout<<"Age: "<<age<<endl;
}

};


int main()
{
hamza h1;
h1.display();
cout<<endl;
-- h1;
h1.display();

return 0;
}
