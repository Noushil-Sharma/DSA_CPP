#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  vector<int>v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;
//   string abcd ="abcd";


  rotate(v.begin(),v.begin()+2,v.end());
  cout<<"After rotate"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }

  return 0;
}
