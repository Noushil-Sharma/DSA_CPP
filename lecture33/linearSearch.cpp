#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
bool linearSearch(int arr[],int n,int k){
    if(n==0){
       return false; 

    }
    if(arr[0]==k){
        return true;
    }
    return linearSearch(arr+1,n-1,k);
    // arr+1 karne se array second element se start
    // hokar paas hui hai

}
int main() {
  
    
    return 0;
}
