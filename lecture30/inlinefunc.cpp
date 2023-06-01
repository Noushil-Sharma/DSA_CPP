#include <bits/stdc++.h>
using namespace std;

inline int getMax(int& a, int& b){
    return (a>b)? a:b;

}
int main() {
    //inline functions - are used to reduce
    //the function call
   int a=1,b=2;
   int ans = 0;
   ans = getMax(a,b);
   cout<<ans<<endl;
   a = a+3;
   b = b+1;

   ans = getMax(a,b);
   cout<<ans<<endl; 
   cout<<  abs(3-5);
    
    return 0;
}
