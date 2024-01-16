// Input : x = 2.00000, n = 10
// Output: 1024.00000

#include<bits/stdc++.h>
using namespace std;

double Power(int x, int n){
    double ans = 1.0;
    for(int i=1;i<=n;i++){
        ans = ans*x;
    }
    if(n<0){
        ans = 1.0/ans;
    }
    return ans;
}

int main(){
    int x,n;
   cin>>x>>n;
   Power(x,n); 
}