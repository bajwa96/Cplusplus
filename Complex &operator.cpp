#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<math.h>
using namespace std;
class Complex
    {
   int real,img;
    public:
    void getdata()
        {
        cin>>real>>img;
    }
    void display()
        {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    Complex &compare(Complex &);
    Complex &add(Complex &);
   
};

Complex &Complex::compare(Complex &a){
    Complex b;
    
    if(real>a.real){
        b.real=real;
        b.img=img;
    }
    else{
        b.real=a.real;
        b.img=a.img;
    }
    
    return b;
}
Complex &Complex::add(Complex &a){
    Complex temp;
    temp.real=a.real+this->real;
    temp.img=a.img+this->img;
    return temp;
}

    int main() {
     Complex c1,c2,c3;
        c1.getdata();
        c2.getdata();
        c3=c1.compare(c2);
        c3.display();
        c3=c1.add(c2);
        c3.display();

        return 0;
    }

