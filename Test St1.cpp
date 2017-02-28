#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
class abc{
	string nam;
		
	public:		
		abc();
			
		void sort(abc[] ,int);
		void disp();
};
abc::abc(){
	
}
void abc::disp(){
	
}
void abc::sort(abc a[],int n){
	int a[130]={0};
		
	int i,get,row;
	char last[130]={'\0'};
	
	for(i=0;i<n;i++){
		cout<<"Enter your name\n";
		cin>>nam;
		cin.clear();
		get=0;
		row=0;
		
		while(get==0&&row<130){
		if(this->nam.at(0)!=last[row]||last[row]==NULL){
				get=1;
				a[row]=a[row]+1;
				last[row]=nam.at(0);
				a[row]
				
		}else row++;
			
		}
		
	}
}
int main(){
	abc *d;
	
	int n;
	cin>>n;
	d = new abc[n];
	d[0].sort(d,n);
	d[0].disp();
}
