#include<iostream>
#include<string>
using namespace std;

class calendar{
    public:

    string day;
    string month;
    int year;
    void display()
    {
        cout<<day<<"-"<<month<<"-"<<year;
    }
    calendar() //default constructor inside class
    {
        day="monday";
        month="february";
        year=2005;
    }

    calendar(string a, string b, int c) //parametarized constructor inside class
    {
        day=a;
        month=b;
        year=c;
    }
};

int main()
{
    calendar d1;    //d1 is object of class calender
    d1.display();
    cout<<endl<<"---------------"<<endl;
    calendar d2;    //d2 is another object of class calender
    cout<<"enter the day : ";
    getline(cin,d2.day);
    cout<<endl;
    cout<<"enter the month : ";
    getline(cin,d2.month);
    cout<<endl;
    cout<<"enter the year : ";
    cin>>d2.year;
    d2.display();
    return 0;

}