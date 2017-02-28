#include<iostream>
using namespace std;
class basket
{
  int apples;
  int mangoes;
    int sum;
  public:
  basket();
  void getapplesData();
    void getmangoesData();
  void show();
  basket operator +(basket&);
    	
};

 basket::basket(){
	sum=0;
}
void basket::getapplesData(){
	cin>>apples;
}
void basket::getmangoesData(){
	cin>>mangoes;
}
basket basket::operator +(basket &a){
	basket t;
	t.sum=apples+a.mangoes;
	return t;
}
void basket::show(){
	cout<<sum<<endl;
}

int main()
{
	basket basket1,basket2,basket3;
    basket1.getapplesData();
    basket2.getmangoesData();
    basket3=basket1+basket2;
    basket3.show();
	return 0;
}
