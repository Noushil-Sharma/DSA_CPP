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
  queue<string>q;
  q.push("love");
  q.push("babbar");
  q.push("kumar");
  cout<<"Size before pop"<<q.size()<<endl;
  q.pop();
  cout<<"First Element"<<q.front()<<endl;
  cout<<"size after pop"<<q.size()<<endl;
    return 0;
}
