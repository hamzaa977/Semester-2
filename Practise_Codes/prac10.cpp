#include<iostream>
#include<string>
using namespace std;
class MyClass{
public:
 int myNum;
    void myMethod()
    {
        cout<<"Hello World"<<endl;
    }
};

int main()
{
    MyClass myObj;
    // myObj.myNum=15;
    // cout<<myObj.myNum<<endl;
    myObj.myMethod();
    return 0;
}


//Create a function named myMethod with no return value. 
//Then Use myObj to call myMethod inside main.