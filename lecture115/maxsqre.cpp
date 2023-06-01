#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int solve(vector<vector<int>> &mat,int i, int j,int &maxi,vector<vector<int>>&dp){
        if(i>=mat.size() || j>=mat[0].size())  return 0;
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int r = solve(mat,i,j+1,maxi,dp);
        int d = solve(mat,i+1,j+1,maxi,dp);
        int dw = solve(mat,i+1,j,maxi,dp);
        
        if(mat[i][j]==1){
            dp[i][j] = 1 + min(r, min(d,dw));
            maxi = max(maxi,dp[i][j]);
            return dp[i][j];
        }
        else{
            return dp[i][j]=0;
        }
    }
    
    
    int solveTab(vector<vector<int>> &mat,int &maxi){
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>>dp(row+1,vector<int>(col+1,0));
        
        for(int i = row-1 ; i>=0; i--){
            for(int j = col - 1; j>=0; j--){
                int r = dp[i][j+1];
                int d = dp[i+1][j+1];
                int dw =dp[i+1][j];
                
                if(mat[i][j] == 1){
                    dp[i][j] = 1 + min(r,min(d,dw));
                    maxi = max(maxi,dp[i][j]);
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        
        return dp[0][0];
    }

    int maxSquare(int n, int m, vector<vector<int>> mat){
        int maxi = 0;
        // vector<vector<int>>dp(n,vector<int>(m,-1));
        // solve(mat,0,0,maxi,dp);
        // return maxi;
        solveTab(mat,maxi);
        return maxi;
    }
}
