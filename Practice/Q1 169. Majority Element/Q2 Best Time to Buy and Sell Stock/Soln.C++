#include<bits/stdc++.h>
using namespace std;

// T.C : O(N) S.C : O(1)
int BestTimeToBuyAndSellStock(vector<int>& prices){
    int mini = INT_MAX , profit = 0;
    for(int i=0;i<prices.size();i++){
        mini = min(mini,prices[i]);
        profit = max(profit,prices[i]-mini);
    }
    return profit;
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    BestTimeToBuyAndSellStock(prices);
    return 0;
}