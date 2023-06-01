#include <bits/stdc++.h> 
using namespace std;
long long int solveTab(vector<int> &nums){
    long long int n = nums.size();
    long long int prev2 = 0;
    long long int prev1 = nums[0];

    for(int i =1; i<n; i++){
        long long int incl = prev2 + nums[i];
        long long int excl = prev1 + 0;

        long long int ans = max(excl,incl);
        prev2 = prev1;
        prev1 = ans;
    }


    return prev1;
}

long long int houseRobber(vector<int>& v)
{
    // Write your code here.
    if(v.size()==1) return v[0];
    vector<int>a,b;
    long long int n = v.size();
    for(int i=0; i<v.size(); i++){
        if(i!=0){
          b.push_back(v[i]);
        }
        if(i!=n-1){
            a.push_back(v[i]);
        }
    }
    long long int ans = max(solveTab(a),solveTab(b));
    return ans;
}