#include<iostream>
#include<iomanip>
using namespace std;
class MyTime
{
	int hour;
	int minute;
	int second;
	public:
		MyTime();
		void getTime();
		void displayTime();
		MyTime operator+(MyTime&);
		
};
MyTime::MyTime(){
	hour=0;
	minute=0;
	second=0;
}
void MyTime::getTime(){
	cin>>hour>>minute>>second;
}
void MyTime::displayTime(){
	if(hour<10)cout<<"0";
	cout<<hour<<":";
	if(minute<10)cout<<"0";
	cout<<minute<<":";
	if(second<10)cout<<"0";
	cout<<second<<endl;
}
MyTime MyTime::operator+(MyTime &a){
	MyTime b;
	b.second=second+a.second;
	if(b.second>59){
		b.second=b.second-60;
		b.minute++;
	}
	b.minute=b.minute+minute+a.minute;
	if(b.minute>59){
			b.minute=b.minute-60;
		b.hour++;
	}
	b.hour=b.hour+hour+a.hour;
	if(b.hour>24){
		b.hour=b.hour-24;
	}
	return b;
}
int main()
{
	MyTime date1,date2,date3;
	date1.getTime();
	date2.getTime();
	date3=date1+date2;
	date3.displayTime();
	return 0;
}
