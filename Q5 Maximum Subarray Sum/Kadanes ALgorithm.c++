// Input : [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// Output : 6

#include<bits/stdc++.h>
using namespace std;

// Kadanes Algorithm : T.C : O(n) S.C : O(1)
int MaximumSubarraySum(vector<int>&arr){
    int n = arr.size();
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi = max(maxi,sum);
        if(sum<0) sum = 0;
    }
    return maxi;
}

int main(){
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<MaximumSubarraySum(arr);
}