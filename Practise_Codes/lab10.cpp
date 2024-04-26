#include<iostream>
#include<string>
using namespace std;

class birthday {
private:
    int day;
    int month;
    int year;
public:
    birthday(){}
    birthday(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    int getday() {
        return day;
    }
    int getmonth() {
        return month;
    }
    int getyear() {
        return year;
    }
};

class contact {
private:
    birthday DOB;
    string name;
    int c_number;
    string mail;
public:
    contact() {}
    contact(string a, int b, string c, birthday dob) {
        name = a;
        c_number = b;
        mail = c;
        DOB = dob;
    }
    int getDOBday() {
        return DOB.getday();
    }
    int getDOBmonth() {
        return DOB.getmonth();
    }
    int getDOByear() {
        return DOB.getyear();
    }
    void display() {
        cout << "Name: " << name << endl << "Contact: " << c_number << endl;
        cout << "Mail: " << mail << endl << "Dob: " << DOB.getday() << "-" << DOB.getmonth() << "-" << DOB.getyear() << endl;
    }
};

class contactBook {
private:
    contact* contacts;
public:
    contactBook(contact* con) {
        contacts = con;
    }
    void showCont(int month) {
        for (int i = 0; i < 5; ++i) {
            if (contacts[i].getDOBmonth() == month) {
                contacts[i].display();
                cout << endl;
            }
        }
    }
};

int main() {
    contact contacts[5];
    contacts[0] = contact("1", 323, "abc@mail.com", birthday(1, 1, 2005));
    contacts[1] = contact("2", 9888, "def@mail.com", birthday(1, 1, 2005));
    contacts[2] = contact("3", 323, "ghi@mail.com", birthday(1, 1, 2005));
    contacts[3] = contact("4", 1122, "abc@mail.com", birthday(1, 5, 2020));
    contacts[4] = contact("5", 1122, "123@mail.com", birthday(5, 5, 2020));

    contactBook contactBook(contacts);
    contactBook.showCont(1);
    return 0;
}
