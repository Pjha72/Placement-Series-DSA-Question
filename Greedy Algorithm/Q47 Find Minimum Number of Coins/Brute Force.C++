#include<bits/stdc++.h>
using namespace std;

// T.C : O(V) S.C : O(1)

int MinimumNumberOfCoins(int V){
    int coins[] = {1,2,5,10,20,50,100,500,1000};
    vector<int> ans;
    int n = sizeof(coins)/sizeof(coins[0]);
    for(int i=n-1;i>=0;i--){
        while(V>=coins[i]){
            V -= coins[i];
            ans.push_back(coins[i]);
        }
    }
    return ans.size();
}

int main(){
    int V = 70;
    MinimumNumberOfCoins(V);
    return 0;
}