#include<iostream>
#include<string>
using namespace std;

class machine{
    public:
    string name;
    int model_year;
    string manf_com;

};

int main()
{
    machine car;
    car.name="mustang";
    car.model_year=1998;
    car.manf_com="ford";
    cout<<car.name<<endl;
    cout<<car.model_year<<endl;
    cout<<car.manf_com;
    return 0;    
}