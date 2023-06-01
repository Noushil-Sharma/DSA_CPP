#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solve(int index, int buy, vector<int> &prices,vector<vector<int>>&dp){
        if(index == prices.size()) return 0;
        if(dp[index][buy]!=-1){
            return dp[index][buy];
        }
        int profit = 0;
        if(buy){
            int buyK = -prices[index]+solve(index+1,0,prices,dp);
            int skip =  0+solve(index+1,1,prices,dp);
            profit = max(buyK,skip);
        }
        else{
            int sell = prices[index] + solve(index+1,1,prices,dp);
            int skip = 0+solve(index+1,0,prices,dp);
            profit = max(sell,skip);
        }

        return dp[index][buy] = profit;
    }
    int solveTab(vector<int>&prices){
        int n = prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        for(int index = n-1; index>=0; index--){
            for(int buy = 0; buy<=1; buy++){
                int profit = 0;
                        if(buy){
                        int buyK = -prices[index]+dp[index][0];
                        int skip =  0+dp[index+1][1];
                        profit = max(buyK,skip);
                    }
                    else{
                        int sell = prices[index] + dp[index+1][1];
                        int skip = 0+dp[index+1][0];
                        profit = max(sell,skip);
                    }

                    dp[index][buy] = profit;
            }
        }
        return dp[0][1];
    }
    int maxProfit(vector<int>& prices){
        // int n = prices.size();
        // vector<vector<int>>dp(n,vector<int>(2,-1));
        return solveTab(prices);
    }
};