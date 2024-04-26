#include<iostream>
#include<string>

using namespace std;

/*
Namespace :
    Namespace act as a container which has it own functions. A function in a namespace is only defined to the particular brakets of a
    namespace. 
*/

namespace container_1{
    void function(){

        cout<<"You have entered the first container!"<<endl;
    
    }

    //Namespace can also be nested.
    
     namespace container_3{
            void function(){

         cout<<"You have enterd the third container!"<<endl;   
            
            }
        }
}
namespace container_2{
    void function(){

        cout<<"You have entered the second container!"<<endl;

    }
}

int main(){
          container_1 :: function();
          container_2 :: function();
          container_1::container_3 :: function();    
           cout<<":: are called Scope Resolution Operator"<<endl;
           using namespace container_1; // --->  it is same as container_1::function();   in line 38
           function();

           /* imp note:  we can only use this (without resolution operator) way once in a program
            and if we use this way twice than program will not run properly */ 

           container_2 :: function();
    
           cout<<"----------------------------------------------\n";
        int x = 2400;
        string alpha = "Alpha is a string\n";
        string beta = "Beta is also a string\n";
        

        cout<<alpha+beta+" "+to_string(x)<<endl;            
        
   //   + is called the concatenation operator interms of string.
   //   to_string(vari) is used to type a variable into a string. 
    return 0;
}
//keep in mind to to avoid ambigvity in functions naming when using multiple namespaces.