#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int m = start + (end - start)/2;
    while(start<=m){
        if(arr[m]==key) {
            return m;
        }
        else if(arr[m]<key){
            start = m + 1;
        }
        else{
            end = m - 1;
        }
        m = start + (end - start) /2;

    }
    return -1;

}
int main() {
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int  b = binarySearch(arr,n,k);
    cout<<b;
    
    return 0;
}
