#include<iostream>
#include<string>
using namespace std;

class A{        //class name can be any as i used here "A",remember to use terminator after closing bracket of class

public:     
//as a begineer lets take it as compulsary step eventho your code wont run properly 

//now declare variables
int roll;
string name;
string section;



//default constructor

A()         //for this we simply use the name of our class as it is (sensitive case) and use round brackets
{           // and opening brackets and there we assign our declare variables some default data according to their datatypes
roll=10;
name="HAMZA";
section="blue";
}





//parameterized constructor

A(int a, string b, string c)        //for this we sue the same way as in default constructor but in round brackets(parameters) we declare  
{                                   // and pass same number of variables with same datatypes like roll was int so here i declare a win int datatype and passed it 

roll=a;
name=b;
section=c;

//be careful when you pass one variable data to other , keep in mind the both datatypes should be same 
//roll was int and same way a was int so i stored roll data into a variable
}





//copy constructor

A(const A &n)         //it's aslso same as others but in this where we passed parameter we will use const keyword with class name
{                   //and & with any character like i used 'n' in here

roll=n.roll;            //n.variable is syntax 
name=n.name;            //n.variable is syntax 
section=n.section;      //n.variable is syntax

}   




void  func()        //user defined function so that we can print out our data and understand it in more better way
{
cout<<"your roll number is  :"<<roll<<endl;     //print roll no
cout<<"your name is : "<<name<<endl;            //print name
cout<<"your section is : "<<section<<endl;      //print section
}


};          //closing body of class with terminator ( ; )


int main()
{
    //to declare object use class name and use any new variable and declare it with that ie

    A s1;       //A is class name and s1 is object now
    s1.func();   //way to call function in object  { this one is for default concstuctor}

    cout<<"================="<<endl;

    A s2(32,"DAYAN","B");                 //A ic class name and s2 is object and here it was paremeterized constructor so we passed
    s2.func();                            //values by our self which we wanted to print 


    cout<<"================"<<endl;

    A s3(s2);                           //A is class name and s3 is object and here its copy constructor , we need to pass that such
    s3.func();                          // constructor we declared before of which we want to copy data to new constructor like here i declared s3 
    cout<<endl;                         //as new constructor  and i wanted to copy constructor s2 data in s3 constructor so i used s3(s2) and after that called function
    return 0;

}