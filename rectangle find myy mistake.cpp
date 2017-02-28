#include<iostream>
using namespace std;
class Rectangle{
	int width,height;
	public:
		Rectangle(int x, int y):width(x),height(y){
		}
		int area(){
			return width*height;
		}
};

int main(){
	Rectangle obj1(3,4);
	Rectangle *obj2,*obj3,*obj4;
	obj2=&obj1;
	obj3=new Rectangle(5,6);
	obj4 = new Rectangle[2]{{2,5},{3,6}};
	cout<<obj1.area()<<endl;
	cout<<obj2->area()<<endl;
	cout<<obj3->area()<<endl;
	cout<<obj4[0].area()<<endl;
	cout<<obj4[1].area()<<endl;
	delete obj3;
	delete[] obj4;
}
