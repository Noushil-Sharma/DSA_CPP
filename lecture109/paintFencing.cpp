#include <bits/stdc++.h> 
using namespace std;
#define MOD 1000000007 

int solve(int n,int k, vector<int>&dp){
    if(n==1){
        return k;
    }
    if(n==2){
        return (k + k*(k-1));
    }

    if(dp[n]!=-1) return dp[n];
    else dp[n] = dp[n] = ((k-1))*(solve(n-1,k,dp)+ solve(n-2,k,dp));
    return dp[n];
}

int numberOfWays(int n, int k) {
    vector<int>dp(n+1,-1);
    return solve(n,k,dp);
    //return ans;
}



