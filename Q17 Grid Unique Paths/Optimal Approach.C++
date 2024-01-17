// Input : 
// Output : 

#include<bits/stdc++.h>
using namespace std;

// T.C : exponential S.C : exponential
int countPaths(int i, int j, int n, int m,vector<vector<int>>&dp){
    // Base Case
    if(i>=n || j>=m){
        return 0;
    }
    if(i==n && j==m){
        return 1;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j] = countPaths(i+1,j,n,m,dp) + countPaths(i,j+1,n,m,dp);
}

int main(){
    int n,m;
    cin>>n>>m;
    int start = 0, end = 0;
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    countPaths(start,end,n,m,dp);
}