#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
bool isCycleBFS(int src, unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj,unordered_map<int,int>&parent){
    parent[src] = -1;
    visited[src] = 1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        for(auto neighbour: adj[frontNode]){

            if(visited[neighbour] == true && neighbour != parent[frontNode]){
                    return true;
            }
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = frontNode;
            }

        }
    }
}; 

string cycleDetection(vector<vector<int>>&edges , int n, int m){
    //create adjacency list
    unordered_map<int,list<int>>adj;
    unordered_map<int,int>parent;
    for(int i=0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //to handle disconnected components 
    unordered_map<int,bool>visited;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            bool ans = isCycleBFS(i,visited,adj,parent);
            if(ans == 1) return "Yes";
        }   
    }
    return "No";


}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin>>n;
  vector<vector<int>>v;
  for(ll i = 0; i<n; i++){
    vector<int>temp;

        for(ll j =0; j<2; j++){
            int g;
            cin>>g;
            temp.push_back(g);
            


        }
        v.push_back(temp);
  }
   

   unordered_map<int,list<int>>adj;
   unordered_map<int,int>parent;
    for(int i=0;i<n;i++){
        int u = v[i][0];
        int g = v[i][1];

        adj[u].push_back(g);
        adj[g].push_back(u);
    }

    for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<<j<< ", ";
            }
            cout<<endl;
    }
  string s1 = cycleDetection(v,2,n);

  cout<<s1<<endl;

  
    
    return 0;
}
