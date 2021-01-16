#include<iostream>
using namespace std;
class Distance
{
	int feet;
	float inches;
	public:
	
		void setdis(int, float);
		void add(Distance, Distance);
		void show();
		
};



void Distance::setdis(int ff, float inc)
{
	feet = ff;
	inches = inc; 
}

void Distance::add(Distance d1, Distance d2)
{
	feet = d1.feet + d2.feet;
	
	inches = d1.inches + d2.inches;
	if(inches >= 12)
	{
		feet = feet + 1;
		inches = inches - 12;
	}
}

void Distance::show()
{
	cout<<feet<<"-"<<inches;
}


int main()
{
	Distance d1,d2,d3;
	
	d1.setdis(6,3.4);
	d2.setdis(5,10.2);
	d3.add(d1, d2);
	d3.show();
}
