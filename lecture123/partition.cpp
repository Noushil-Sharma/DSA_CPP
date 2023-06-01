#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int solve(int index, int arr[],int N,int target,vector<vector<int>>&dp){
    //base case
    if(index>N)  return 0;
    if(target<0) return 0;
    if(target == 0){
        return 1;
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    bool incl = solve(index+1,arr,N,target-arr[index],dp);
    bool excl = solve(index+1,arr,N,target-0,dp);
    
    dp[index][target] = incl or excl;
    return dp[index][target];
    
}


int solveTab(int N, int arr[],int total){
    vector<vector<int>>dp(N+1,vector<int>(total+1,0));
    
    for(int i =0; i<=N; i++){
        dp[i][0]=1;
    }
    
    for(int index = N-1; index>=0; index--){
        for(int target = 0; target<=total/2; target++){
            
            bool incl = 0;
            if(target-arr[index>=0])
            
            incl = dp[index+1][target-arr[index]];
            bool excl = dp[index+1][target-0];
            
            dp[index][target] = incl or excl;
        }
    }
    return dp[0][total/2];

}


    int equalPartition(int N, int arr[])
    {
        
        int total = 0;
        for(int i =0; i<N; i++){
            total+=arr[i];
        }
        if(total&1) return 0;
        
        int target = total/2;
        
        vector<vector<int>>dp(N+1,vector<int>(target+1,-1));
        return solve(0,arr,N,target,dp);
    }
};