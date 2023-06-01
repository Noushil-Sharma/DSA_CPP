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
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int minindex = i;
    
    for(int j=i+1;j<n;i++){
    if(v[j]<minindex){
        minindex=j;
    }
    swap(v[minindex],v[i]);
    }
    
  }
   for (int i = 0; i < n; i++)
    {       
        cout<<v[i]<<" ";
    }
    cout<<"\n";
  }
    return 0;
}

