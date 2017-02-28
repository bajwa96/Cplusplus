#include<iostream>
using namespace std;
class Point{
	int x,y;
	public:
		Point(int x1=0, int y1=0){
			x=x1;
			y=y1;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
		
};
int main(){
	Point p1(10,15);
	Point p;
	cout<<p1.getx()<<"  "<<p1.gety()<<endl;
	cout<<p.getx()<<"  "<<p.gety()<<endl;
	p=p1;
	cout<<p.getx()<<"  "<<p.gety()<<endl;
	return 0;
	
}
