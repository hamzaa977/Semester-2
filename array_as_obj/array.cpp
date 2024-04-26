#include <iostream>
#include <string>
using namespace std;
class Hospital {
public:
 string name;
 int numBeds;
public:
//Hospital();

// Default Constructor
 Hospital() {
name = "Default Hospital";
 numBeds = 100;
 cout << "Default constructor called." << endl;
 }
 
 // Parameterized Constructor
Hospital(string n, int b) {
 name = n;
numBeds = b;
 cout << "Parameterized constructor called." << endl;}
 // Copy Constructor
  Hospital(const Hospital &h)
   {
   name = h.name;
 numBeds = h.numBeds;
  cout << "Copy constructor called." << endl;
   }
 
// Method to display hospital information
 void display() {
cout << "Hospital Name: " << name << endl;
cout << "Number of Beds: " << numBeds << endl;
 }

};


int main() {
    int x,noh;
    cout<<"enter no of hospitals you want"<<endl;
    cin>>noh; // no of hospitals
        Hospital hos[noh];
        for(x=0;x<noh;x++){
        cout<<"enter name of hospital"<<endl;
//    hos[x].name=
        cin.ignore() ;
        getline(cin,hos[x].name);
    //    cin>>hos[x].name;
        cout<<"enter num of beds"<<endl;
        cin>>hos[x].numBeds;

    }

for(x=0;x<noh;x++)
{
                hos[x].display();
            }
 return 0;
 
 
 }