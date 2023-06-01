#include <bits/stdc++.h>
using namespace std;

int score = 15;



   void a(int& i){
    char ch = 'a';
     cout<<i<<endl;
     b(i);
   }
   void b(int& i){
    cout<<i<<endl;

   }
   int main(){
    int i=5;
    a(i);
    {
        int i=2;
        cout<<i<<endl;
    }
    cout<<i<<endl;

   
    
    return 0;
    }

