#include<bits/stdc++.h>
using namespace std;

bool checkCycleDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,int> &parent, unordered_map<int,list<int>> &adj){
    visited[node] = true;
    parent[node]=-1;
    
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = checkCycleDFS(neighbour,visited,parent,adj);
            if(cycleDetected) return true;
        }
        else if(parent[neighbour]){
            return true;
            
        }
    }
     
    parent[node]=false;
    return false;

}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  unordered_map<int,list<int>>adj;
   for(int i=0;i<edges.size();i++){
       int u = edges[i].first;
       int v = edges[i].second;
       
       adj[u].push_back(v);
   }
    
    unordered_map<int,bool>visited;
    unordered_map<int,int>parent;
    for(int i =1; i<=n;i++){
        if(!visited[i]){
            bool cycleFound = checkCycleDFS(i,visited,parent,adj);
            if(cycleFound)
                return true;
        }
    }
}