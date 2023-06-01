//Reverse a string
#include <bits/stdc++.h>
using namespace std;
void reverse(string& str,int i,int j){
    //base case
    if(i>j) return ;
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str ,i,j);
}
int main(){
   string s;
   cin>>s;
   reverse(s,0,s.length()-1);
   cout<<s<<endl;    
   return 0;
} 
               
