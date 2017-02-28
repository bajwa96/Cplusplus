#include <iostream>
using namespace std ;
/*Write Program to demonstrate use of constructors and destructors for performing dynamic operations
//write code here
int main()
{
data d1("obfuscation");
data d2("obstruction");
d1.show();
d2.show();
d1.compare(d2);
return 0;
}
Expected output:
Data 1= Obfuscation
Data 2= Obstruction
Both Objects have different text
Release memory allocated to Obfuscation
Release memory allocated to Obstructio*/
#include <string.h>
class data{
	int l;
	char name[100];
	public:
		data(char a[100]){
			int i;
			l=strlen(a);
			for(i=0;i<strlen(a);i++){
				name[i]=a[i];
			}
			name[i]='\0';
		}
		void show(){
			cout<<name<<endl;
		}
		void compare(data d){
			if(l>d.l){
				cout<<"Obj 1 is large\n";
			}
			else if(l==d.l)cout<<"These are same\n";
			else 
			cout<<"Obj 2 is large\n";
		}
		
};
int main()
{
data d1("obfuscation");
data d2("obstruction");
d1.show();
d2.show();
d1.compare(d2);

return 0;
}
