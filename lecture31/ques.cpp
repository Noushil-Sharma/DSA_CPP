#include <bits/stdc++.h>
using namespace std;
int seq(int n){
    if(n==0){
        return 0;
    }
    
    cout<<n<<endl;
    seq(n-1);
    
}
int main() {
    int n;
    cin>>n;
    seq(n);

 
    
    return 0;
}
