#include<iostream>
using namespace std;
class MyPoint{
	int X,Y;
	public:MyPoint(int i=0, int j=0){
			X=i;
			Y=j;
		}
		int getX()const{
		return X;
		}
		int getY()const{
		return Y;
		}
};
int main(){
	MyPoint t1;
	MyPoint t2(1);
	MyPoint t3(2,5);
	cout<<t1.getX()<<"  "<<t1.getY()<<endl;
	cout<<t2.getX()<<"  "<<t2.getY()<<endl;
	cout<<t3.getX()<<"  "<<t3.getY()<<endl;
	
}
