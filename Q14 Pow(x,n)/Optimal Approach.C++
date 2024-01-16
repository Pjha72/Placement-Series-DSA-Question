// Input : x = 2.00000, n = 10
// Output: 1024.00000

#include<bits/stdc++.h>
using namespace std;

double Power(int x, int n){
    double ans = 1.0;
    long long nn = n;
    if(nn<0){
        nn = -1*nn;
    }
    while(nn > 0){
        if(nn%2==1){
            ans = ans*x;
            nn = nn-1;
        }
        else{
            x = x*x;
            nn = nn/2;
        }
    }
    if(n<0){
        ans = (double)(1.0)/(double)(ans);
    }
    return ans;
}

int main(){
    int x,n;
   cin>>x>>n;
   Power(x,n); 
}