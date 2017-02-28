#include<iostream>
using namespace std;
class Time{
	int hour,min,sec;
	public:
		Time(int hour=0, int min=0,int sec=0);
		int gethour() const;
		int getmin() const;
		int getsec() const;
		sethour(int h);
		setmin(int m);
		setsec(int s);
		int settime(int h, int m ,int s);
		void print();
		void nextsecond();
};



void Time::nextsecond(){
	++sec;
	if(sec>=60)
	min++;
	if(min>=60)
	hour++;
	if(hour>=24)
	hour=0;
}

int main(){
	Time t1(23,59,59);
	t1.print();
	t1.sethour(12);
	t1.setmin(30);
	t1.setsec(15);
	t1.print();
	cout<<t1.gethour()<<endl;
	cout<<t1.getmin()<<endl;
	cout<<t1.getsec()<<endl;
	
	Time t2;
	t2.settime(1,2,3);
	t2.print();
	
	Time t3(12);
	t3.print();
	
	Time t4(24,59,58);
	t4.print();
	t4.nextsecond();
	t4.print();
	t4.nextsecond();
	t4.print();
};
