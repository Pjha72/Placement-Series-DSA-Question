// Input : [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// Output : 6

#include<bits/stdc++.h>
using namespace std;

// First Optimised Approached : T.C : O(n^2) S.C : O(1)
int MaximumSubarraySum(vector<int>&arr){
    int n = arr.size();
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=arr[j];
        }
        maxi = max(maxi, sum);
    }
    return maxi;
}

int main(){
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<MaximumSubarraySum(arr);
}