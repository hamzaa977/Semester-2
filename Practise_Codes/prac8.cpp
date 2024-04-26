//Create an object of MyClass called myObj, and use it to set the value of myNum to 15.


#include<iostream>
#include<string>
using namespace std;

class MyClass{
    public:
    int myNum;

};

int main()
{
    MyClass myObj;
    myObj.myNum=15;
    cout<<myObj.myNum;
    return 0;
}