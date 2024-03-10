#include<bits/stdc++.h>
using namespace std;

// T.C : O(n) S.C : O(n)
int MajorityElement(vector<int>&nums, int n){
    // Step-1 : Create amap to store the frequency
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    // Step-2 : Traverse the map and check if the
    // frequency of any element is greater than n/2
    for(auto it : mp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={3,2,3};
    int n=nums.size();
    MajorityElement(nums,n);
}