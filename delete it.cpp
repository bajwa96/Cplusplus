#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
int main(){
	int n;
	string nam;
	cin>>n;
	int a[130]={0};
int i,get,row,max=0,in=0;

	char last[130]="\0";
	string m;
	for(i=0;i<n;i++){
		
		cout<<"Enter your name\n";
		cin>>m;
	
		get=0;
		row=0;
		
		while(get==0&&row<130){
		if(m.at(0)!=last[row]||last[row]=='\0'&&a[row]<=10){
			
				a[row]=a[row]+1;
				last[row]=m.at(0);
				cout<<last[row]<<endl;
				get=1;
				
		}else row++;
			if(max<row)max=row;
		}
	}
	
	cout<<max+1;
	system("PAUSE");
	}
