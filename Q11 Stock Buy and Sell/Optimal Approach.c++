// Input : arr = [7,1,5,3,6,4]
// Output : 7

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n) S.C : O(1)

int StockAndSell(vector<int>&arr){
    int mini = INT_MAX;
    int profit = 0;
    for(int i=0;i<arr.size();i++){
        mini = min(mini,arr[i]);
        profit = max(profit,arr[i]-mini);
    }
    return profit;
}

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    StockAndSell(arr);
}