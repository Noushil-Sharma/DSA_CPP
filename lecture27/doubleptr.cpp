#include <bits/stdc++.h>
using namespace std;

void update(int **p){
    //p=p+1;//No change



    //*p = *p+1;// yes change hoga

    **p = **p+1;// Yes change hoga
    
}

int main() {
    int i =5;
    int *p = &i;
    int **p2 = &p;

    // cout<<endl<<endl<<"correct"<<endl<<endl;
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;
    
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // cout<<&p<<endl;
    // cout<<p2<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"After"<<i<<endl;
    cout<<"After"<<p<<endl;
    cout<<"After"<<p2<<endl;
    return 0;
}
