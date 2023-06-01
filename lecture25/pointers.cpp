#include<iostream>
using namespace std;
int main(){
    int num =5;
    //address of Operator - &
    cout<<"address of num is "<<&num<<endl;
    //pointer - Stores the address
    int *ptr = &num;
    // * -- dereference operator
    // *p is value of address
    cout<<"ptr";
    cout<<"value is :"<<(*ptr);
    
    cout<<"size of integer "<<sizeof(num)<<endl;
    cout<<"size of integer "<<sizeof(ptr)<<endl;

}