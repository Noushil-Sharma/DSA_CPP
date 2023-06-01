#include <bits/stdc++.h> 
using namespace std;
int solve(vector<int> &nums,int n,vector<int> &dp){
    if(n<0) return 0;
    if(n==0) return nums[0];

    if(dp[n]!= -1){
        return dp[n];
    }

    int incl = solve(nums,n-2,dp) + nums[n];
    int excl = solve(nums,n-1,dp) + 0;


    dp[n] = max(incl,excl);
    return dp[n];
}

int solveTab(vector<int> &nums){
    int n = nums.size();
    int prev2 = 0;
    int prev1 = nums[0];

    for(int i =0; i<n; i++){
        int incl = prev2 + nums[i];
        int excl = prev1 + 0;

        int ans = max(excl,incl);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;

}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int>dp(n,-1);
    return solve(nums,n-1,dp);

}