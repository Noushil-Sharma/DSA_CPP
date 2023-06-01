#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  stack<string> s;
  s.push("love");
  s.push("babbar");
  s.push("kumar");
  cout<<"Top Element->"<<s.top()<<endl;
  s.pop();
  cout<<"Top Element->"<<s.top()<<endl;
  cout<<"size od stack"<<s.size()<<endl;
  
    
    return 0;
}
