#include <bits/stdc++.h>
using namespace std;
#define cout(arr,n) for (int i=0;i<n;i++){cout<<arr[i]<<" "; }
#define v(v) vector<int> v;
#define buggy(c) cout<<"Check "<<c<<": ";for (int i = 0; i < n; i++)cout << arr[i] << " ";cout<<"\n";
#define Yes cout<<"YES";
#define No cout<<"NO";
void reverseArray(vector<int> &arr , int m)
{

  int n=arr.size();
  int arr2[n-m-1];

  for (int i = m+1; i <= n-1; i++)
  {
    arr2[i]=arr[i];
  }
  sort(arr2,arr2+n-m-1,greater<int>());
  for (int i = m+1; i <= n-1; i++)
  {
    arr[i]=arr2[i];
  }



}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int n=0,k=0,x=0,y=0,m=0;
int sum=0,flag=0,count=0,count1=0;
cin>>n>>m;
v(arr)
for (int i=0;i<n; i++)
{
  int c=0;
  cin>>c;
  arr.push_back(c);
}
reverseArray(arr,m);
cout(arr,n)

















    cout<<"\n";
}
return 0;
}