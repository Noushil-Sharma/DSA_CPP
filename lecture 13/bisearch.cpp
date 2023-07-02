#include<iostream>
using namespace std;

    int first0cc(int arr[], int n, int key){
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;
        int ans;

        

        while(s<=e){
            if (arr[mid]==key){
                ans = mid;
                e = mid - 1;
            }
            else if(key > arr[mid]){
                s = mid +1;
            }
            else if(key< arr[mid]){
                e = mid - 1;
            }
            mid = s+ (e-s)/2;
        }
        return ans;

        
    }
        int last0cc(int arr[], int n, int key){
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;
        int ans;

        while(s<=e){
            if (arr[mid]==key){
                ans = mid;
                s = mid + 1;
            }
            else if(key > arr[mid]){
                s = mid +1;
            }
            else if(key< arr[mid]){
                e = mid - 1;
            }
            mid = s+ (e-s)/2;
        }
        return ans;
    }
    int main(){
        int even[6]= {1,2,3,3,3,5};
        cout<<"First occurrence of 3 is "<<first0cc(even, 5, 3)<<endl;
        cout<<"Last occurrence of 3 is "<<last0cc(even, 5, 3)<<endl;
        //total no of ocurance will be last - first + 1
        return 0;
    }
