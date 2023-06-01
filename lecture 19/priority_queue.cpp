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
  priority_queue<int>maxi;
  priority_queue<int,vector<int>,greater<int>>mini;
  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);
  cout<<"size"<<maxi.size()<<endl;
  int n = maxi.size();

  for(int i =0; i<n; i++){
     cout<<maxi.top()<<" ";
     maxi.pop();
  }
    
    return 0;
}
