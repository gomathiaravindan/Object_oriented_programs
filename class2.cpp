#include<iostream>
using namespace std;

class Employee
{
	int emp_id;
	char emp_name[30];
	float basic_salary;
	public:
	void accept()
	{
		cout<<"Enter the id of the employee:";
		cin>>emp_id;
		cout<<"Enter the employee name:";
		cin>>emp_name;
		cout<<"Enter the basic salary:";
		cin>>basic_salary;
	}
	void display()
	{
		int HRA=800;
		float DA=0.0,I_tax=0.0;
		DA =(25 * basic_salary)/100;
		I_tax = (15 * basic_salary)/100;
		
		cout<<"The payslip is:";
		cout<<"\nDA of "<<emp_name <<" is:"<<DA;
		cout<<"\nIncome Tax of "<<emp_name<<" is:"<<I_tax;
		
	}
	
};


int main()
{
	Employee emp1;
	emp1.accept();
	emp1.display();
}
