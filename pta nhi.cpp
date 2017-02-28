/* write a program using friend function and find largest of 2 objects*/
#include<iostream>
using namespace std;
class large{
		public:
	int a;

		large(int x){a=x;}
		
		friend void great();
};
void great(large& obj1,large& obj2)
{
	if(obj1.a>obj2.a)
	cout<<"large obj1"<<endl;
	else 
	cout<<"large obj2"<<endl;
}
int main(){
 large obj1(3);
 large obj2(5);
 great(obj1,obj2);
 return 0;
}
