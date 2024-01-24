// Input : nums = {100,4 ,200,1,3,2}
// Output : 4

#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int> &nums, int num){
    for(int i=0;i<nums.size();i++){
        if(nums[i] == num){
            return true;
        }
    }
    return false;
}

int LongestConsecutiveSequence(vector<int>& nums){
    // Step-1 : Sort the array
    sort(nums.begin(),nums.end());
    // Step-2 : Use 2 pointer approach
    int  maxi = 1;
    for(int i=0;i<nums.size();i++){
        int x = nums[i];
        int cnt = 1;

        while(ls(nums,x+1)==true){
            cnt++;
            x++;
        }
        maxi = max(maxi,cnt);
    }
    return maxi;
}
int main(){
    vector<int> nums = {100,4,200,1,3,2};
    LongestConsecutiveSequence(nums);
    return 0;
}