#include<iostream>
using namespace std;
int main(){
int x,y,add=0;
        cin>>x;
        while(x){
            y=x%10;
            add = add*10 + y;
            x = x/10;
                
        }
        cout<<add;
        return 0;
}