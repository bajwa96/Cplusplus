#include"testCIrcle.cpp"
int main(){
	MyCircle obj1(10.0);
	MyCircle obj2=10.0;
	MyCircle obj3{30.0};
	MyCircle obj4{40.0};
	cout<<obj1.circumference()<<endl;
	cout<<obj2.circumference()<<endl;
	cout<<obj3.circumference()<<endl;
	cout<<obj4.circumference()<<endl;
	return 0;
}
