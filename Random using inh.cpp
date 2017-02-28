#include<iostream>
#include <string.h>
using namespace std;

class word{
	
	static int rnd;
		
	public :int yes;
		int i,j,co=0;
		double marks=0;
		char h[100],a[100],b[100],temp[100];
	
		void getv(){
			
			cout<<"Please enter the word or sentence"<<endl;
			cin.getline(a,100);
			strcpy(b,a);
			cout<<"Please enter Hint over here = ";
			cin.getline(h,100);
			}
			
		void doran(){
			int l=strlen(a);
			j=rand();
			
			while(j>l&&rnd!=j){
				j=rand();
			}	
			
			rnd=j;
			
			for(i=0;i<l;i++){
				
					char t=a[i];
					a[i]=a[j];
					a[j]=t;
						while(j>l&&rnd!=j){
						j=rand();
						}
							}
			cout<<"Orignal Array = "<<b<<endl<<"Your word after shuffled = "<<a<<endl;
			
			
			
			}
			
		void inpu(){
			char name[100];
			strcpy(name,b);
			int l=strlen(name);
			char t[100];
			cout<<endl<<"Do you want hint the press 1 or press any other key =";
			cin.getline(t,100);

			if(strcmp(t,"1")==0)	cout<<"Hint = "<<h<<endl;
			cin.clear();
			cout<<endl<<"Please ,enter your word"<<endl;
			cin.getline(temp,100);
			int c=0;
			if(strlen(temp)==l){
			for(i=0;i<strlen(temp);i++){
				for(j=0;j<l;j++){
						if(temp[j]==name[i]){
						name[i]='@';
						c++;
						if(i<strlen(temp))i++;
						}
					}
				
				}
			}
			if(c==l){yes=1;
				marks=1;}
				else marks=0;
			if(yes==0){
			cout<<endl<<"Please ,enter your word"<<endl;
			cin.getline(temp,100);
			for(i=0;i<strlen(temp);i++){
				for(j=0;j<l;j++){
						if(temp[j]==name[i]){
						name[i]='@';
						c++;
						if(i<strlen(temp))i++;
						}
					}
				
				}
				if(c==l){yes=1;
				marks=0.5;}
				else marks=0;
			}
			
			
			
		}
		
		void show(){
			int d;
			if(yes==0){cout<<"You were Not Successful "<<endl;d=0;cout<<"Your Marks in the test are = 0"<<endl;}
			else {cout<<"You were successful"<<endl;d=marks;
			cout<<"Your Marks in the test are = "<<d<<endl;}
		}
		
};

int word::rnd=0;
int main(){
	
	word a,b,c;
	a.getv();
	a.doran();
	a.inpu();
	a.show();
}
