#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solve(string &a, string &b,int i, int j,vector<vector<int>>&dp){
        if(i == a.length()){
            return b.length() - j;
        }
        if(j == b.length()){
            return a.length() - i;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int ans = 0;
        if(a[i]==b[j]) 
        {
            return solve(a,b,i+1,j+1,dp);
        }
        else
        {
            int insert = 1 + solve(a,b,i,j+1,dp);
            int deleteA = 1 +  solve(a,b,i+1,j,dp);
            int replace = 1 + solve(a,b,i+1,j+1,dp);
            ans = min(insert, min(deleteA,replace));
        }

        return dp[i][j] = ans;
    }
    int minDistance(string word1, string word2) {

        int m = word1.length();
        int n = word2.length();
       vector<vector<int>> dp(m+1, vector<int>(n+1,-1));

       return solve(word1,word2,0,0,dp);

        // int m = word1.length();
        // int n = word2.length();
        
        // vector<vector<int>> dp(m+1, vector<int>(n+1));
        
        // for (int i = 0; i <= m; i++) {
        //     dp[i][0] = i;
        // }
        
        // for (int j = 0; j <= n; j++) {
        //     dp[0][j] = j;
        // }
        
        // for (int i = 1; i <= m; i++) {
        //     for (int j = 1; j <= n; j++) {
        //         if (word1[i-1] == word2[j-1]) {
        //             dp[i][j] = dp[i-1][j-1];
        //         } else {
        //             dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
        //         }
        //     }
        // }
        
        // return dp[m][n];
    }
};
