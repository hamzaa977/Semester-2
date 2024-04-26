#include <iostream>
#include <cstdlib>

using namespace std;

class EMPLOYEE
{	
	private:
    	string id;
		string name; 
		string designation;
		int hours ;
		int salary; 
	
    
    public:

		EMPLOYEE()
		{
			cout << "";
		}
		
		
		~EMPLOYEE()
		{
			cout <<"";
		}
		
        void setData();
		void getData();
		int calc_salary();
		void setSalary(int a);
		
};

const int HOURLY_RATE = 200;

void EMPLOYEE :: getData()
{
	cout << "id                     : "<<id<<endl;
	cout << "NAME                   : "<<name<<endl;
	cout << "DESGINATION            : "<<designation<<endl;
	cout << "WORKING HOURS PER WEEK : "<<hours<<endl;
	cout << "SALARY                 : "<<salary<<endl;
}

void EMPLOYEE :: setData()
{
	string a ; string b ; string c ; int d ;
	cin.ignore();
	cout << "Enter the Employee id : ";
	getline(cin,a);
	cout << "Enter the Employee Name : ";
	getline(cin,b);
	cout << "Enter the Employee Designation : ";
	getline(cin,c);
	cout << "Enter the number of Hours worked per week : ";
	cin >> d;
	id=a;
	name=b;
	designation=c;
	hours=d;
}

int EMPLOYEE :: calc_salary()
{
	if(hours <= 40)
	{
		return hours * HOURLY_RATE; 
	}
	if(hours >= 41)
	{
		int a = 40 * HOURLY_RATE;
		int b = (hours-40)*(HOURLY_RATE *2);
		return a+b;
	}
}

void EMPLOYEE :: setSalary(int a)
{
	salary = a;
}



int main(void)
{
	int numEMP;
	
	cout << "Enter the number of Employees : ";
	cin >> numEMP;
	EMPLOYEE emp[numEMP];
	
	for(int i=0 ; i<numEMP ; i++)
	{
		emp[i].setData();
		int var = emp[i].calc_salary();
	    emp[i].setSalary(var);
	}
	
	system("CLS");
	for(int i=0 ; i<numEMP ; i++)
	{
		cout << "EMPLOYEE # "<<i+1<<endl;
		emp[i].getData();
		cout << endl;
	}
	return 0;
}


