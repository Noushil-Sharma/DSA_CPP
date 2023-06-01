#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
int getSum(int arr[],int n,int sum =0){
    if(n==0)
        return sum;
    
    return(arr,n-1,sum+arr[n-1]);

}
int main() {
   int arr[5]={1,2,3,4,5};
   int n = 5;
   int ans = getSum(arr,n);
   cout<<ans;
    return 0;
}
