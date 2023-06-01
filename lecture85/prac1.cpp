#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Yes cout<<"YES";
#define No cout<<"NO";


int main(){
    unordered_map<int,vector<int>>adj;
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    for(auto it: adj){
        cout<<it.first<<" -> ";
        for(auto i: it.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
//    Yes



    return 0;
}