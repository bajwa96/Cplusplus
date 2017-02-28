/*WAP Student
public: roll,name,batch,branch
GFS indoor spports,outdoor sports
acad sub[] 
result disp total marks*/
#include<iostream>
#include<cstring>
using namespace std;
class student{
	public:
		int roll,batch;
		string name,branch;
		void input(){
			cin>>name;
			cin.get();
			cin>>roll>>batch>>branch;
		}
		void output(){
			cout<<name<<endl<<roll<<endl<<batch<<endl<<branch<<endl;
		}
};
class gfs:virtual public student{
	public:
		int indoor,outdoor;
		void input(){
			cin>>indoor>>outdoor;
		}
};
class acad:virtual public student{
	public:
		int sub[5];
		void input(){
			for(int i=0;i<5;i++)
			cin>>sub[i];
		}
};
class result:public gfs,public acad{
	public:
		int total,sum=0;
		void output(){
			for(int i=0;i<5;i++)
			sum=sum+sub[i];
			total=sum+indoor+outdoor;
			cout<<total<<endl;
		}
};
int main(){
	result obj;
	obj.student::input();
	obj.gfs::input();
	obj.acad::input();
	
	obj.student::output();
	obj.result::output();
	return 0;
}
