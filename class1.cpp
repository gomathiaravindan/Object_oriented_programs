#include<iostream>
using namespace std;

class Person{
	char name[30];
	char address[30];
	char mobile[10];
	public:
		void getdata()
		{
			cout<<"Enter the name of a person:";
			cin>>name;
			cout<<"Enter the address:";
			cin>>address;
			cout<<"Enter the mobile number:";
			cin>>mobile;
		}
		void showdata()
		{
			cout<<"\nName:"<<name;
			cout<<"\nAddress:"<<address;
			cout<<"\nMobile:"<<mobile;
		}
};

int main()
{
	Person p1,p2;
	p1.getdata();
	p1.showdata();
	p2.getdata();
	p2.showdata();
	
		
	
	return(0);
}
