#include <iostream>
#include <string>
using namespace std;

class Hospital {
public:
    string name;
    int numBeds;

    // Default Constructor
    Hospital(){
        name = "Default Hospital";
        numBeds = 100;
        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    Hospital(string n, int b) {
        name=n;
        numBeds = b;
        cout << "Parameterized constructor called." << endl;
    }

    // Method to display hospital information
    void display() {
        cout << "Hospital Name: " << name << endl;
        cout << "Number of Beds: " << numBeds << endl;
    }
};

int main() {
    // Using the default constructor
    Hospital defaultHospital;
    defaultHospital.display();

    // Using the parameterized constructor
    Hospital paramHospital("general haspatal",200);
    paramHospital.display();

    return 0;
}
