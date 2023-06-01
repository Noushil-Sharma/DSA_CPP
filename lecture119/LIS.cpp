#include<bits/stdc++.h>
using namespace std;
int solve(int n,int a[],int curr,int prev,vector<vector<int>>&dp){
        if(curr==n){
            return 0;
        }
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        int take = 0;
        if(prev==-1 || a[curr]>a[prev]){
            take = 1 + solve(n,a,curr+1,curr,dp);
        }
        int notTake = 0 + solve(n,a,curr+1,prev,dp);
        
        return dp[curr][prev+1] = max(take,notTake);
    }

    int longestSubsequence(int n, int a[])
    {
        //Include-Exclude
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int curr = n-1; curr>=0; curr--){
            for(int prev = curr-1;prev>=-1;prev--){
                int take = 0;
                if(prev==-1 || a[curr]>a[prev]){
                take = 1 + dp[curr+1][curr+1];
                }
                int notTake = 0 + dp[curr+1][prev+1];
        
                dp[curr][prev+1] = max(take,notTake);
            }
        }
        return dp[0][0];
       
    }
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        //Include-Exclude
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(n,a,0,-1,dp);
       
    }