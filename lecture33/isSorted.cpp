#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
bool isSorted(int arr[],int size){
    //base case
    if(size == 0|| size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main() {
    int arr[5]={2,4,6,8,9};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans==true){
        cout<<"Array is Sorted";
    }
    else{
        No;
    }
    

    
  
    
    return 0;
}
