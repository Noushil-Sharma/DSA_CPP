#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
void reverse(char name[],int n){
    int s =0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int count = 0;
    for(int i =0; name[i]!='\0';i++){
        count++;
    }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //Noushil Sharma
  char name[20];
  cout<<"Enter your name"<<endl;
  cin>>name;
  cout<<"Your name is: ";
  cout<<name<<endl;
  int len = getlength(name);
  reverse(name,len); 
  cout<<name;

    
    return 0;
}
