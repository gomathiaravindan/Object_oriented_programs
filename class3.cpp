#include<iostream>
using namespace std;
class Time
{
	int hr,min;
	public:
	
		void setTime(int, int);
		void add(Time, Time);
		void show();
		
};



void Time::setTime(int hh, int mm)
{
	hr = hh;
	min = mm; 
}

void Time::add(Time t1, Time t2)
{
	hr = t1.hr + t2.hr;
	
	min = t1.min + t2.min;
	if(min >= 60)
	{
		hr = hr + (min/60);
		min = min % 60;
	}
}

void Time::show()
{
	cout<<hr<<":"<<min;
}


int main()
{
	Time t1,t2,t3;
	
	t1.setTime(4,50);
	t2.setTime(5,30);
	t3.add(t1, t2);
	t3.show();
}
