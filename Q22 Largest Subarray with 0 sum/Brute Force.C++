// Input : arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
// Output : 5

#include<bits/stdc++.h>
using namespace std;

// T.C : O(N^3) S.C : O(1)

int LargestSubarrayWithZeroSum(vector<int>&nums){
    int n = nums.size();
    if(n==1) return 1;
    int maxLen = 0;
    // Step-1 : Use 2 pointers Approach
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // Step-2 : Calculate the sum of the subarray
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum+=nums[k];
            }

            if(sum==0){
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};
    LargestSubarrayWithZeroSum(nums);
    return 0;
}