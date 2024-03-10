#include<bits/stdc++.h>
using namespace std;

// T.C: O(n^3) + O(nlogn) S.C: O(n)
vector<vector<int>> ThreeSum(vector<int>&nums){
    vector<vector<int>> res;
    if(nums.size()<3){
        return res;
    }
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<nums.size();j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            for(int k=j+1;k<nums.size();k++){
                if(k>j+1 && nums[k]==nums[k-1]) continue;
                if(nums[i]+nums[j]+nums[k]==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                }
            }
        }
    }
    return res;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    ThreeSum(nums);
}