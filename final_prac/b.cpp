#include<iostream>
#include<string>
using namespace std;

class hamza{
private:
int age;

public:
hamza():age(){}
hamza(int a):age(a){}

int operator +()
{
    age=age+10;
    return age; 
}

void display();

};

void hamza::display()
{
    cout<<age;
}


int main()
{
hamza h1(19);
h1.display();
cout<<endl;
+h1;
h1.display();

return 0;
}
