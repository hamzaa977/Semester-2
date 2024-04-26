#include<iostream>
#include<string>
using namespace std;

int main()
{ int x = 2400;
        string alpha = "Alpha is a string\n";
        string beta = "Beta is also a string\n";
        cout<<alpha+beta+" "+to_string(x)<<endl;            
        
   //+ is called the concatenation operator interms of string.
   //to_string(vari) is used to type a variable into a string. 
    return 0;
    }