#include<iostream>
using namespace std;
int main(){
    // int arr[10] = {2,5,6};
    // cout<<"address of memory block: "<<arr;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // int temp[10];
    // cout<<sizeof(temp)<<endl;

    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    int arr[10];
    //Error
    //arr = arr+1
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;
    
    return 0;
}