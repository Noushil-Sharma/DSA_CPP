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
  list<int>l;
  l.push_back(1);
  l.push_front(2);
  l.erase(l.begin());
  for(int i:l){
    cout<<i<<" ";
  }
    cout<<"size of"<<l.size()<<endl;
    return 0;
}

