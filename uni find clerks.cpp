#include<iostream>
#include <string.h>
using namespace std;

class uni{
	
	public:
			    static int emp;
	char empname[100],empdept[100],empstatus[100];
	
	int empid;
		void getemp(){
			cout<<"Enter name of emp no "<<emp+1<<endl;
			cin>>empname;
			cout<<"Enter id of emp no "<<emp+1<<endl;
			cin>>empid;
			cout<<"Enter rank of emp no "<<emp+1<<endl;
			cin>>empstatus;
			cout<<"Enter department of emp no "<<emp+1<<endl;
			cin>>empdept;
			emp++;
		}
		
		
	
};

class cse:public uni{
	char b[100]="clerk",c[100]="cse";
	public :
		void dis(uni a[],int n){
			int i;
			for(i=0;i<n;i++)cout<<"Name ="<<a[i].empname<<"\t"<<"ID = "<<a[i].empid<<"\t"<<"emp rank ="<<a[i].empstatus<<"\t"<<"Departmrnt ="<<a[i].empdept<<endl;
		}
		void disp(uni a[],int n){
			int i;
			for(i=0;i<n;i++){
		if(!strcmp(a[i].empstatus,b)&&!strcmp(a[i].empdept,c)){
			cout<<"CSE\n";
			cout<<"Search Results are\n"<<a[i].empname<<"\t"<<a[i].empid<<endl;
		}
		
		}
		
		}
};
class ece:public uni{
	
};
int uni::emp=0;
int main(void){
	cse b;
	int i,n;
	cout<<"Enter no of employees\n";
	cin>>n;
	uni a[n];
	for(i=0;i<n;i++)a[i].getemp();
	cout<<"If you want to display clerks then press 1 .. ";
	cin>>i;
	
	if(i==1)b.disp(a,n);
	b.dis(a,n);
	
}

