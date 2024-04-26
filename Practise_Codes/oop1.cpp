#include<iostream>
#include<string>
using namespace std;

class car{
public:
int info(int roll)
{
    return roll;
}
};

int main()
{
    car data;
cout<<data.info(1122);
return 0;
}
