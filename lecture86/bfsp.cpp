#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define print(a)  for(auto x : a) cout << x << " "; 
#define Yes cout<<"YES";
#define No cout<<"NO";





int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin>>n;
  unordered_map<int,vector<int>>adj;

  
  for(int i =0; i<n; i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);

  }
  for(auto it: adj){
    cout<<it.first<<" -> ";
    for(auto i: it.second){
        cout<<i<<" ";
    }
    cout<<endl;
  }
   unordered_map<int,bool>visited;
   queue<int>q;
   vector<int>ans;
   q.push(1);
   visited[1]=1;

   while(!q.empty()){
        int f = q.front();
        q.pop();
        ans.push_back(f);
        for(auto it: adj[f]){
            if(!visited[it])
            {
            q.push(it);
            visited[it]  = 1;
            }
        }

   }

   print(ans);
  
  
    
    return 0;
}
