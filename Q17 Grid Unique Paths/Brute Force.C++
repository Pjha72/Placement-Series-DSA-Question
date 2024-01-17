// Input : 
// Output : 

#include<bits/stdc++.h>
using namespace std;

// T.C : exponential S.C : exponential
int countPaths(int i, int j, int n, int m){
    // Base Case
    if(i>=n || j>=m){
        return 0;
    }
    if(i==n && j==m){
        return 1;
    }

    return countPaths(i+1,j,n,m) + countPaths(i,j+1,n,m);
}

int main(){
    int n,m;
    cin>>n>>m;
    int start = 0, end = 0;
    countPaths(start,end,n,m);
}