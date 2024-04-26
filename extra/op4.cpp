#include<iostream>

using namespace std;


class TEECHOD
{
	private:
		string name;
		string khatab;
		int age;
		float eyesight;
	public:
		TEECHOD() {cout<<"";}
		TEECHOD(string n , string k , int a ,float e) 
		{
			name = n;
			age=a;
			eyesight=e;
			khatab=k;
		}
		~TEECHOD() {cout<<"destructor is called";}
		
		void setData(string n ,string k, int a , float e);
		string getname(); 
		int getage();
		float geteyesight();
		string getkhatab();
		// void input();
		void display();
};

int main(void)
{
	TEECHOD banda,banda2("MALIK HAMZA SARGODHI ","TEERA",18,7.2),banda3;
	
	banda.setData("HAMZA SAJJAD","NEPALI",19,6.0);
	cout << banda.getname()<<endl;
	cout << banda.getkhatab()<<endl;
	cout << banda.getage()<<endl;
	cout << banda.geteyesight()<<endl<<endl<<endl;
	
	banda2.display();
	
	cout<<endl<<endl;
	
	// banda3.input();
	banda3.display();
	return 0;
}

void TEECHOD :: setData(string n ,string k, int a , float e)
{
	name=n; age=a; eyesight=e; khatab=k;
}

string TEECHOD :: getname()
{
	return name;
}

int TEECHOD :: getage()
{
	return age;
}

float TEECHOD :: geteyesight()
{
	return eyesight;
}

string TEECHOD :: getkhatab()
{
	return khatab;
}

// void TEECHOD :: input()
// {
// 	string na ; string kh ; int ag ; float ey;
	
// 	cout << "Enter name : ";
// 	getline(cin,na);
// 	cout << "Enter Khitab : ";
// 	getline(cin,kh);
// 	cout << "Enter age : ";
// 	cin>>ag;
// 	cout << "Enter Eyesight : ";
// 	cin>>ey;
// 	name=na; khatab=kh ; age=ag; eyesight=ey;
// }

void TEECHOD :: display()
{
	cout << "NAME OF TEECHOD     : "<<name<<endl;
	cout << "AGE OF TEECHOD      : "<<age<<endl;
	cout << "EYESIGHT OF TEECHOD : "<<eyesight<<endl;
	cout << "KHATAB OF TEECHOD   : "<<khatab<<endl;
}