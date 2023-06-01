#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
vector<int>reverse(vector<int>v){
    int s = 0, e = v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int>v){
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //Noushil Sharma
  vector<int>v;
  v.push_back(11);
  v.push_back(7);
  v.push_back(3);
  v.push_back(12);
  v.push_back(4);
  vector<int>ans = reverse(v);
  cout<<"Printing array "<<endl;
  print(v);


    
    return 0;
}
