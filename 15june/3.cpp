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
    ll n;
    cin>>n;
    string str;
    cin>>str;
    char arr[n/2];
    int j=0;
    for(int i=0;i<n;i+=2){
        if(str[i]=='0' && str[i+1]=='0'){
            arr[j]='A';
            j++;
        }else if(str[i]=='0' && str[i+1]=='1'){
            arr[j]='T';
            j++;
        }else if(str[i]=='1' && str[i+1]=='0'){
            arr[j]='C';
            j++;
        }else if(str[i]=='1' && str[i+1]=='1'){
            arr[j]='G';
            j++;
        }
        cout<<arr[j-1];
    }
    cout<<endl;
  }
    
    return 0;
}
