// Input : arr = [7,1,5,3,6,4]
// Output : 7

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n^2) S.C : O(1)

int StockAndSell(vector<int>&arr){
    int diff = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]<arr[j]){
                diff = max(diff,arr[j]-arr[i]);
            }
        }
    }
    return diff;
}

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    StockAndSell(arr);
}