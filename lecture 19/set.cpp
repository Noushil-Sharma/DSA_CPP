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
  set<int>s;
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(5);
  s.insert(5);
  for(auto i : s){
    cout<<i<<endl;
  }cout<<endl;
  set<int>::iterator it = s.begin();
  it++;
  s.erase(it);
  for(auto i : s){
    cout<<i<<endl;
  }
  cout<<endl;
  cout<<"5 is present or not -->"<<s.count(5)<<endl;
  set<int>::iterator itr = s.find(5);
  for(auto it = itr; it!=s.end();it++){
    cout<<*it<<" ";
  }  cout<<endl;
    return 0;
}
