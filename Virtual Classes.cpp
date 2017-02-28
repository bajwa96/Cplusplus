#include<iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
#include<istream>
class student{
	public:
	string name;
	void gets(string h){
		name=h;
	}
};
 
class gfs: public student{
		public:
		string branch;
		void gfss(string br){
			branch=br;
		}
};

class acad: public student{
	public:
		int rol,batch;
		void rolba(int roll,int b){
			rol=roll;
			b=batch;
		}
};

class result: public student{
	public :int total;
	void t(int tt){
		total=tt;
	}
};

class output:public student{
	public:
		int output(void){
			cout<<this->total<<this->branch;
			
		}
};

int main(){
	student s1;
	s1.gets("Bajwa");
	s1.gfss("CSE");
	s1.rolba(20,2015);
	s1.t(500);
	s1->output();
	return 0;
}
