#include<iostream>
#include<iomanip>
using namespace std;
class Complex
{
	double real;
	 double imag;
	 public:
	 Complex();
	 Complex(double,double);
	 void getComplexNumber();
	 void DisplayComplexNumber();
	Complex operator+(Complex&);
	 Complex operator-(Complex&);
	 Complex operator*(Complex&);
 	friend Complex operator/(Complex&,Complex&);	
};

Complex::Complex(){
	
}
Complex::Complex(double a,double b){
	
}
void Complex::DisplayComplexNumber(){
	cout<<real<<"+"<<imag<<endl;
}
void Complex::getComplexNumber(){
	cin>>real>>imag;
}
Complex Complex::operator*(Complex &b){
	Complex t;
        t.real = (real*b.real) - (imag*b.imag);
        t.imag = (real*b.imag) + (imag*b.real);
        return(t);
}
Complex Complex::operator+(Complex &a){
	Complex temp;
    temp.real=real+a.real;
    temp.imag=imag-a.imag;
    return temp;
}
Complex Complex::operator-(Complex &a){
	Complex temp;
    temp.real=real-a.real;
    temp.imag=imag-a.imag;
    return temp;
}
 Complex Complex::operator /(Complex a, Complex b){
    Complex t;
        t.real = ((a.real*b.real) + (a.imag*b.imag))/(b.real*b.real + b.imag*b.imag);
        t.imag = ((a.real*b.imag) - (a.imag*b.real))/(b.real*b.real + b.imag*b.imag);
        return(t);
}

int main()
{
		Complex obj1,obj2,obj3;
		obj1.getComplexNumber();
		obj2.getComplexNumber();
		obj3=obj1+obj2;
		obj3.DisplayComplexNumber();
		obj3=obj1-obj2;
		obj3.DisplayComplexNumber();
		obj3=obj1*obj2;
		obj3.DisplayComplexNumber();
		obj3=obj1/obj2;
		obj3.DisplayComplexNumber();
		return 0;
}
