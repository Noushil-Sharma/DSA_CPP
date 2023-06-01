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
    int x,y;
    cin>>x>>y;
    ll n=x+y,c=0;
    if(x<y){
        if(y/x>=2){
            for(int i =0; i<x; i++){
                cout<<"0";
            }
            for(int i =x; i<n;i++){
                cout<<"1";
            }
            cout<<"\n";
        }
        else {
            for(int i = 0 ; i<x; i++){
                cout<<"10";
            }
            for(int i=x;i<y;i++){
                cout<<"1";
            }
            cout<<endl;
        }
    }else{
        if(x/y>=2){
            for(int i =0; i<y; i++){
                cout<<"1";
            }
            for(int i =y; i<n;i++){
                cout<<"0";
            }
            cout<<"\n";
        }
        else {
            for(int i = 0 ; i<y; i++){
                cout<<"01";
            }
            for(int i=y;i<x;i++){
                cout<<"0";
            }
            cout<<endl;
        }
    }
    

  }
    
    return 0;
}
