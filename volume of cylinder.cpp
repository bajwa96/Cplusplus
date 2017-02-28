#include<iostream>
using namespace std;
class Circle{
	double radius;
	public :
		Circle(double r):radius(r){}
		double area()
		{
			return radius*radius*3.14;
		}
			
};

class Cylinder{
	Circle base;
	double height;
	public:
		Cylinder(double r, double h):
			base(r),height(h){
			}
			double volume(){
				return base.area()*height;
			}
};

int main(){
	Cylinder obj(10,20);
	cout<<obj.volume()<<endl;
}
