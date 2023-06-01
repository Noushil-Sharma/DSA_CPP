#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Yes cout<<"YES";
#define No cout<<"NO";
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i =0,j=0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }

}
void print(int ans[], int n){
    for(int i =0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //Noushil Sharma
  int arr1[5]={1,3,5,7,9};
  int arr2[3]={2,4,6};
  int arr3[8]={0};
 
}
