#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
#define print(a)  for(auto x : a) cout << x << " "; 


void dfs(int node,unordered_map<int,vector<int>> &adj,unordered_map<int,bool>&visited, vector<int>&ans){
      visited[node] = 1;
      ans.push_back(node);
    //   cout<<node<<" ";
      for(auto it: adj[node]){
        if(!visited[it]){
            dfs(it,adj,visited,ans);
        }
      }
}



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //Noushil Sharma


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

  vector<int>ans;
  unordered_map<int,bool>visited;
  int node = 1;
  dfs(node,adj,visited,ans);

  print(ans);




    
    
    return 0;
}