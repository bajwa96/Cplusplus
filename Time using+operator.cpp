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
    hour=0;second=0;minute=0;
};

void MyTime::getTime(){
    int a,b,c;
    cin>>hour>>minute>>second;
    
};

void MyTime::displayTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
};

MyTime MyTime::operator+(MyTime &b){
    MyTime temp;
    int sec=0,mi=0,h=0;
    sec=second+b.second;
    if(sec>59){
        mi+=1;
        sec-=60;
    }
    mi=mi+minute+b.minute;
    if(mi>59){
        h+=1;
        mi-=60;
    }
    h=h+hour+b.hour;
    if(h>24)
        h=0;    
        temp.minute=mi;
        temp.hour=h;
        temp.second=sec;
    return temp;
};
int main()
{
	MyTime date1,date2,date3;
	date1.getTime();
	date2.getTime();
	date3=date1+date2;
	date3.displayTime();
	return 0;
}
