#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
class Vegan{
	static int count;
	int cap=100;
	public:
		void cusin(){
			if(count<cap)count++;
			else cout<<"Restuarant was running under full capacity";	
		}
		void cusout(){
			if(count>0)count--;
			else cout<<"Your choice was not valid"<<endl;
		}
		static void showcode(){
			cout<<"Count ="<<count<<endl;
		}
};
int Vegan::count;
int main(){
	int i,j,k,opt=0;
	Vegan a,b;
	while(opt!=-1){
	cout<<"\n\nIf You Want To Exit enter -1 else select the desired option\n1)Customer In\n2)Customer out\n3)If you want to know about no. of customers inside restaurant"<<endl;
	cin>>opt;
	if(opt==-1)break;
	if(opt==1)a.cusin();
	if(opt==2)a.cusout();
	if(opt==3)a.showcode();
	
	}
	system("PAUSE");
}
