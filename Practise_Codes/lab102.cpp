#include<iostream>
#include<string>
using namespace std;

class complex{
private:

int real;
int imaginary;

public:
complex(){}

complex(int a , int b)
{
    real=a;
    imaginary=b;
}

friend complex addcomplex(complex c1, complex c2);

void func();

};

complex addcomplex(complex c1, complex c2)
{
    int r_sum=c1.real+c2.real;
    int i_sum=c1.imaginary+c2.imaginary;
    return complex(r_sum,i_sum);
}

void complex::func()
{
    cout<<real <<" + "<< imaginary <<" i "<< endl;
}


int main()
{
complex obj1(2,3);
complex obj2(4,5);
complex obj3;

obj3=addcomplex(obj1 , obj2);

obj3.func();

return 0;
}