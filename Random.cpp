#include<iostream>
#include <string.h>
using namespace std;

class word{
	char h[100];
	static int rnd;
	public :
		void doran(){
			
			int i,j;
			char a[100];
			cout<<"Please , enter a word or a sentence "<<endl;
			cin.getline(a,100);
			char b[100];
			strcpy(b,a);
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
			cout<<"Please enter Hint over here = ";
			
			cin.getline(h,100);
			system("CLS");
			int yes=0,co=0;
			double marks=0,d=1;
			while(yes==0&&co<2){
					cout<<"SO guess the word from = "<<a<<endl;
					yes=yes+check(b);			
					marks=d;
					d=d-0.5;
					co++;					
					if(yes==0){
					cout<<"You were Not Successful "<<endl;
					marks=0;
					}
					system("CLS");
			}
			
		
			cout<<"Your Marks in the test are = "<<marks<<endl;
			
		}
		int check(char name[100]){
			int c=0,l=strlen(name);
			char t[100];
			cout<<endl<<"Do you want hint the press 1 or press any other key =";
			cin.getline(t,100);

			if(strcmp(t,"1")==0)	cout<<"Hint = "<<h<<endl;
			
			cout<<endl<<endl<<"Please ,enter your word"<<endl;
			char hj[100];
			int i,j;
			cin.getline(hj,100);
			if(strlen(hj)==l){
			
			for(i=0;i<strlen(hj);i++){
				for(j=0;j<l;j++){
						if(hj[j]==name[i]){
						name[i]='@';
						c++;
						if(i+1<strlen(hj))i++;
						}
					}
				
				}
			}
			if(c==l)return 1;
			else return 0;
			
		}
		
};

int word::rnd=0;
int main(){
	
	word a,b,c;
	a.doran();
	
}
