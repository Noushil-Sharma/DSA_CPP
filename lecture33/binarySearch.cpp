#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int s,int e,int k){
    if(s>e){
        return -1;
    }
    int mid = s +(s-e)/2;
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int ans = binarySearch(arr,0,n-1,k);
    if(ans) {
        cout<<"Element Found";
    }
    else {
        cout<<"Not Found";
    }


    
    
    return 0;
}
