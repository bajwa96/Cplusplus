 
#include <iostream>

using namespace std;
int main(){
    float a=1,b,l;
    do{
	try{
		cout<<"Enter any no to find 1/x = ";
		cin>>b;
    	if(b==0)throw b;
    	cout<<a/b;
    	l=0;
	}
	catch(float n){
		l=1;
		cout<<"\nYour entered this wrong no ="<<n<<endl;
	}
	}while(l==1);
    return 0;
}
