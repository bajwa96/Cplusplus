#include<iostream>
using namespace std;
class MyPoint{
	const int t;
	public:
		MyPoint(int t):t(t){
			//cout<<t;
		}
		int getx()const{
		return t;
		}
};

int main(){
	int x=10;
	MyPoint t1(x);
	cout<<t1.getx()<<endl;
	return 0;
}
