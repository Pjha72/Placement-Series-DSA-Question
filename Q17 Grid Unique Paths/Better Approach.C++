// Input : 
// Output : 

#include<bits/stdc++.h>
using namespace std;

// T.C : exponential S.C : exponential
int countPaths(int n, int m){
    int N = m+n-2;
    int r = m-1;
    double res = 1;

    for(int i=1;i<=r;i++){
        res = res*(N-r+i)/i;
    }
    return (int)res;
}

int main(){
    int n,m;
    cin>>n>>m;
    countPaths(n,m);
}