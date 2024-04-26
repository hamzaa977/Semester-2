#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//student class that contains student data
class student {
private:
//all data members are defined privately to have them seperately
    string name;
    const int id;
    string courses[3];
    static int totalstudents;
public:
    //parameterized constructor to aainitialize objects with declarations
    student(string NAME, int ID) : name(NAME), id(ID)
     {
        totalstudents++;
    }
    //set courses function to store courses of students seperately
    void setCourses(const string COURSES[3]) {
        for (int i = 0; i < 3; i++) {
            courses[i] = COURSES[i];
        }
    }
    //display info functionn displays the data of each student
    void displayInfo() {
        cout << "Student Name is: " << name << endl;
        cout << "Student ID is: " << id << endl;
        cout << "Student courses are: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Course " << i + 1 << " is: " << courses[i] << endl;
        }
    }
        // total student function to get teh value of total students of the class:
     int getTotalStudents() {
        return totalstudents;
    }
};

int student::totalstudents = 0;

int main() {
    student s1("ALI", 1001);
    student s2("Kamran", 1002);
    string courses1[3] = { "PHY", "BIO", "CHE" };
    string courses2[3] = { "URDU", "ENG", "OOP" };
    s1.setCourses(courses1);
    s2.setCourses(courses2);
    s1.displayInfo();
    s2.displayInfo();
cout<<"Total Number of students are:"<<s1.getTotalStudents()<<endl;
    return 0;
}
