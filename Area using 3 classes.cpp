#include<iostream>
using namespace std;
class shape{
	public :
		double area;
		double b,l;
		void getdata(){
			cin>>b>>l;
		}
		void dis(){
			cout<<area<<endl;
			
		}
	
		
		
};
/*wap to write sper class fig namred as tri and rec
create a memeber function of same name which will calculate area of shape by making memnbers of superclass*/
class tri:public shape{
	public:
		shape art(shape a){
			a.area=a.b*a.l*0.5;
			return a;
		}
		
};
class rec :public shape{
	public:
		shape arr(shape a){
			a.area=a.b*a.l;
			return a;
		}
		
};
int main(){
	shape a,temp;
	int n;
	 cout<<"For tri 1 \nFor Rec 2\n";
	 cin>>n;
	 a.getdata();
	 rec b;
	 tri c;
	 if(n==1)temp=c.art(a);
	 else if(n==2)temp=b.arr(a);
	 else cout<<"You Entered wrong option\n";
	 temp.dis();
}
