#include<iostream>
using namespace std;
template <class arr>
arr max(arr ar,arr *n){
	arr max=0;arr i;
	for(i=0;i<n;i++){
		if(max<ar[i])max=ar[i];
	}
	cout<<max;
}
int main(){
	int i,n;
	cin>>n;
	
	double ar[n];
	for(i=0;i<n;i++){
		cin>>ar[i];
	}
	max(ar,n);
	cout<<"Hence max is = "<<max;
}
