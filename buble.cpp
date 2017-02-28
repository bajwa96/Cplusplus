#include<iostream>
using namespace std;
template <class arr>
void bublesort(arr n){
	arr ar[n];arr i,j;
	for(i=0;i<n;i++){
		cin>>ar[i];
	}
	
	arr t;
	for(i=0;i<n;i++){
		
		for(j=i;j<n;j++){
			if(ar[i]>ar[j]){
			t=ar[i];
			ar[i]=ar[j];
			ar[j]=t;
			}
			
		}cout<<ar[i]<<" ";
	}

}
int main(){
	int n;
	cin>>n;
	
	bublesort(n);
	return 0.0;
} 
