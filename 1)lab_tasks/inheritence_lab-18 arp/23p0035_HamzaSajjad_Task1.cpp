#include<iostream>
#include<string>
using namespace std;

class Animal{

public:
    string name;
    int age;

public:
    void speak()
    {}

};



class Bird:private Animal{

private:
    string winglength;

public:
    Bird()
    {}

    Bird(string a, int b)
    {
        name=a;
        age=b;
    }

    void speak()
    {
        cout<<"My name is :"<<name<<"   My age is :"<<age<<endl;
        cout<<"I am a Bird and I can Sing"<<endl;
    }
};


class Reptile:private Animal{

private:
    string habitat;

public:
    Reptile()
    {}
    
    Reptile(string a, int b)
    {
        name=a;
        age=b;
    }

    void speak()
    {
        cout<<"My name is :"<<name<<"   My age is :"<<age<<endl;
        cout<<"I am a Reptile and i can Creep"<<endl;
    }

};


int main()
{
cout<<endl;
    Bird b1("Sparrow",02);
    b1.speak();

cout<<endl;

    Reptile r1("Snake",03);
    r1.speak();
    return 0;
}