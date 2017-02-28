#include<iostream>
#include<string>

using namespace std;
int main(){
	
	string a;
	getline(cin,a);
	string b=a;
	int f=a.find_first_of("aeiou");
	while(f<a.length()){
		a[f]='#';
		f=f+1;
		f=a.find_first_of("aeiou",f);
	}
	int l=b.find_last_of(" ");
	b.insert(l,"( Here was the  last space )");
	cout<<a<<endl<<l<<b<<endl;
	system("PAUSE");
}


