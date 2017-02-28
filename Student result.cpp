#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

class student{
	int sub1,sub2,sub3,tm,rollnum;
	string name;	
	public:
		void input(){
			cout<<"Please enter your name";
			cin>>name;
			cout<<"Please enter your roll number";
			cin>>rollnum;
			cout<<"Please enter marks in sub 1"<<endl;
			cin>>sub1;
			cout<<"Please enter marks in sub 2"<<endl;
			cin>>sub2;
			cout<<"Please enter marks in sub 3"<<endl;
			cin>>sub3;
		}
		void sum(){
			this->tm=sub1+sub2+sub3;
		}		
		void output(){
			cout<<"The name of student is "<<name<<"\nThe Total marks of studnet is="<<tm<<"\nThe roll no of student is="<<rollnum<<endl;
		}
		student &max(student &s1,student &s2,student &s3){
			if(s1.tm>s2.tm){
				if(s1.tm>s3.tm)return *this;
			}
			else if(s2.tm>s3.tm){
				if(s2.tm>s1.tm)return s2;
			}
			else return s3;
		};
};

int main(void){
	
	student s1,s2,s3,s4;
	s1.input();
	s2.input();
	s3.input();
	s1.sum();
	s2.sum();
	s3.sum();
	
	s4=s1.max(s1,s2,s3);
	s4.output();
}
