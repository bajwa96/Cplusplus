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

using namespace std;
int main()
{
	int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n,a,bl=-1,b,co=0,N;
        cin >> n; 
        N=n;
        while(n>0){
            int lock=0;
            a=n%10;
            if(a!=0){b=N%a;
			}else lock=1;
			
            if((bl==b||b==0)&&lock==0)co++;
            
            n/=10;
            bl=b;
            
            
        }
        cout<<co<<endl;
        
        
    }
    return 0;
}
