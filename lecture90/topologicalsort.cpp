#include <bits/stdc++.h> 
using namespace std;

void topoSort(int node, unordered_map<int,bool> &visited,stack<int> &s, unordered_map<int,list<int>> &adj){
     visited[node]=1;

     for(auto neighbour: adj[node]){
        if(!visited[neighbour])
              topoSort(neighbour,visited,s,adj);
     }

     s.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    //adj list
    unordered_map<int,list<int>>adj;
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }
    unordered_map<int,bool>visited;
    stack<int>s;
    for(int i = 1; i<v;i++){
        if(!visited[i])
            topoSort(i,visited,s,adj);

    }
    vector<int>ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;    
}