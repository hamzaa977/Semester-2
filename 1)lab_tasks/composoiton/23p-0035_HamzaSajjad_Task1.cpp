#include <iostream>
#include <string>

using namespace std;

class DateOfBirth
{
private:
    int day, month, year;

public:
    DateOfBirth(){};
    DateOfBirth(int day, int month, int year) : day(day), month(month), year(year){};

    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }
    int getDay()
    {
        return this->day;
    }
};

class Contact
{
    string name, email;
    int phonenumber;
    DateOfBirth dob;

public:
    Contact(){};
    Contact(string name, int phonenumber, string email, DateOfBirth dob) : name(name), phonenumber(phonenumber), email(email), dob(dob){};

    int getDobMonth()
    {
        return dob.getMonth();
    }

    int getDobday()
    {
        return dob.getDay();
    }

    int getDobYear()
    {
        return dob.getYear();
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Phonenumber : " << phonenumber << endl;
        cout << "Email : " << email << endl;
        cout << "Dob : " << dob.getDay() << "-" << dob.getMonth() << "-" << dob.getYear() << endl;
    }
};

class ContactBook
{
    Contact contacts[4];
    int total = 0;

public:
    ContactBook(Contact contacts[4])
    {
        this->contacts[0] = contacts[0];
        this->contacts[1] = contacts[1];
        this->contacts[2] = contacts[2];
        this->contacts[3] = contacts[3];
    };

    void showContactWithDobMonth(int month)
    {
        for (Contact contact : contacts)
        {
            if (contact.getDobMonth() == month)
            {
                contact.show();
                cout << endl;
            }
        }
    }
};

int main()
{
    Contact contacts[4];
    contacts[0] = Contact("user1", 312477, "xyz@mail.com", DateOfBirth(24, 1, 2024));
    contacts[1] = Contact("user2", 312477, "xyz@mail.com", DateOfBirth(24, 1, 2024));
    contacts[2] = Contact("user3", 312477, "xyz@mail.com", DateOfBirth(24, 2, 2024));
    contacts[3] = Contact("user4", 312477, "xyz@mail.com", DateOfBirth(24, 2, 2024));

    ContactBook contactBook(contacts);

    contactBook.showContactWithDobMonth(1);

    return 0;
}