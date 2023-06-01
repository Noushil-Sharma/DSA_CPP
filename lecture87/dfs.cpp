#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";



void dfs(int node, unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj,vector<int>&component){
    component.push_back(node);
    visited[node]=true;
    
    //hr connected node k liye recursuve call
    for(auto i: adj[node]){
        if(!visited[i]){
           dfs(i,visited,adj,component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edge)
{
    //prepare adj list
    unordered_map<int,list<int>>adj;
    
    for(int i=0;i<edge.size();i++){
        int u=edge[i][0];
        int v=edge[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>>ans;
    unordered_map<int,bool>visited;
    
    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int>component;
            dfs(i,visited,adj,component);
            ans.push_back(component);
        }
    }
    return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //Noushil Sharma
  
    
    return 0;
}