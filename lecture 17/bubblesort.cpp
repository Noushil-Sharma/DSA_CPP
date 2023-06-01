#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //Noushil Sharma
  int n;
  cin>>n;
  vector<int>arr;
  for(int i =0; i<n;i++){
    cin>>arr[i];
  }
  for(int i = 1; i<n;i++){
    for(int j =0;j<n-i;j++){
    if(arr[j]>arr[j+1]){
      swap(arr[j],arr[j+1]);
    }
  }
  }
    
    return 0;
}
