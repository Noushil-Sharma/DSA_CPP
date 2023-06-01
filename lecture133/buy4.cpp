#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solveTab(vector<int>&prices,int k){
        int n = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        for(int index = n-1; index>=0; index--){
            for(int buy = 0; buy<2; buy++){
               for(int limit = 1; limit<k+1; limit++){
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
                    return dp[0][1][k];
    }


    int maxProfit(int k, vector<int>& prices){
        return solveTab(prices,k);
    }
};