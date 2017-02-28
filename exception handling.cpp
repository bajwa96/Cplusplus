//wap a programe to check if the divison of 2 no reaches infinity handle the error
#include <iostream>
using namespace std;


int main () {
	int n,i;
   double mean,sum=0;
   double *da;
   cout<<"Enter Size of array\n";
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
   	cout<<"Enter "<<i+1<<" element in array\n";
   	cin>>a[i];
   	sum=sum+a[i];
   }
   try{
   mean=sum/n;
   if(mean-1==0){
   	da=new double[1];
   if(da==NULL) throw ;
   *da=sum/mean;
   cout<<"Hence the ans is ="<<da;
   }
   else throw mean;
   
   
}catch(double e){
	cout<<"Your mean didn't match the requirement ="<<e<<endl;
}
catch(...){
	cout<<"There was some error\n"<<endl;
}
   
   

   return 0;
}
