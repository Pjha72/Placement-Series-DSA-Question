// Input : arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
// Output : 5

#include<bits/stdc++.h>
using namespace std;

// T.C : O(N^3) S.C : O(1)

int LargestSubarrayWithZeroSum(vector<int>&nums){
    // Step-1 : Take a hashmap and sum
    unordered_map<int,int>m;
    int sum = 0;
    int maxLen = 0;

    // Step-2 : Lineraly traverse the array
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        // Step-3 : Check if sum==0 then update the maxLen
        if(sum==0){
            maxLen = i+1;
        }
        // Step-4 : If sum is not equal to 0 then check if sum is persent in hashmap or not
        else{
            if(m.find(sum)!= m.end()){
                maxLen = max(maxLen, i-m[sum]);
            }
            else{
                m[sum] = i;
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