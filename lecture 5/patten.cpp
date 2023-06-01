#include<iostream>
using namespace std;
int main()
{
    cout<<"enter "<<endl;
    int n=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
            
        }
       for(int k=1;k<=i;k++)
       {
           cout<<k;
       }
       for(int h=i-1;h>=1;h--)
       {
           cout<<h;
       }
       cout<<endl; 
    }
 for(int a=1;a<=n-1;a++)
 {
     for(int b=1;b<=a;b++)
     {
         cout<<" ";
     }
    for(int c=1;c<=n-a;c++)
    {
        cout<<c;
    }
    for(int d=n-a-1;d>=1;d--) 
    {
            cout<<d;
        
        
    }
    cout<<endl;
 

    
}}