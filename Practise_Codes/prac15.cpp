#include<iostream>
#include<string>
using namespace std;

class car{
    public:
    void speed();
};

void car::speed()
{
    cout<<"the max speed car attained is : 200";
}

int main()
{
    car meter;
    meter.speed();
    return 0;
}