#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int solve(vector<int>&v,int index,int time,vector<vector<int>>&dp){
    if(index==v.size()) return 0;
    if(dp[index][time]!=0) return dp[index][time];
    int include = v[index]*(time+1) + solve(v,index+1,time+1,dp);
    int exclude = 0 + solve(v,index+1,time,dp);

    dp[index][time] =  max(include,exclude);

    return dp[index][time];
}
int maxSatisfaction(vector<int>& satisfaction) {
    int n = satisfaction.size();
      vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        sort(satisfaction.begin(),satisfaction.end());
        return solve(satisfaction,0,0,dp);
    }
};