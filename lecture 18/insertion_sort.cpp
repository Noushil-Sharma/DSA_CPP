#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin>>n;
  vector<int>arr;
  for(int i =0; i<n;i++){
    cin>>arr[i];
  }
  //Noushil Sharma
  for(int i =1; i<n; i++){
      int temp = arr[i];
      int j = i-1;
      for(; j>=n; j--){
          if(arr[j]>temp){
              arr[j+1]=arr[j];
          }
          else{
            break;
          }
      }
      arr[j+1]=temp;
  }
  
    
    return 0;
}
