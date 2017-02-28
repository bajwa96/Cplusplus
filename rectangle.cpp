#include<iostream>
using namespace std;
class rectangle{
	int width,height;
	public :
	rectangle(){
	width=0;height=0;	
	}
	rectangle(int x,int y){
	width=x;height=y;	
	}	
	int area(){
	return width*height;
	}
}obj1(3,4),obj2;
rectangle::rectangle(){
	cout<<"Enter width and height";
	cin>>width>>height;
}
rectangle::rectangle()
