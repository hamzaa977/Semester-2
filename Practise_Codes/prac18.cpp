#include<iostream>
#include<string>
using namespace std;

class student{
public:
int info(int rollno)
{
    return rollno;
}
};

int main()
{
    student data;
    cout<<data.info(0035);
    return 0;
}
