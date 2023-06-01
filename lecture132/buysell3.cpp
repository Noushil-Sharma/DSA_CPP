#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int index, int buy, vector<int> &prices,vector<vector<vector<int>>>&dp,int limit){
        if(index == prices.size()) return 0;
        if(limit == 0) return 0;
        if(dp[index][buy][limit]!=-1){
            return dp[index][buy][limit];
        }

        int profit = 0;
        if(buy){
            int buyK = -prices[index]+solve(index+1,0,prices,dp,limit);
            int skip =  0+solve(index+1,1,prices,dp,limit);
            profit = max(buyK,skip);
        }
        else{
            int sell = prices[index] + solve(index+1,1,prices,dp,limit-1);
            int skip = 0+solve(index+1,0,prices,dp,limit);
            profit = max(sell,skip);
        }

        return dp[index][buy][limit] = profit;
    }
    int solveTab(vector<int>&prices){
        int n = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int index = n-1; index>=0; index--){
            for(int buy = 0; buy<2; buy++){
               for(int limit = 1; limit<3; limit++){
                    int profit = 0;
                    if(buy){
                        int buyK = -prices[index]+dp[index+1][0][limit];
                        int skip =  0+dp[index+1][1][limit];
                        profit = max(buyK,skip);
                    }
                    else{
                        int sell = prices[index] + dp[index+1][1][limit-1];
                        int skip = 0+dp[index+1][0][limit];
                        profit = max(sell,skip);
                    }
            
                    dp[index][buy][limit] = profit;
                            }
                        }
                    }
                    return dp[0][1][2];
    }
    int maxProfit(vector<int>& prices){
        int n = prices.size();
        int limit = 2;
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));

        return solveTab(prices);
        // return solveTab(prices);
    }
};