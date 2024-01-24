// Input : nums = {100,4 ,200,1,3,2}
// Output : 4

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n) + O(n) + O(n) = O(3n) = O(n)
// S.C : O(n)

int LongestConsecutiveSequence(vector<int>& nums){
    if(nums.empty()) return 0;
    int maxi = 0;
    // Step-1 : insert the elements in the set
    unordered_set<int> s;
    for(auto it : nums){
        s.insert(it);
    }
    // Step-2 : Linear iterate over an array and check if the ele-1 is persent into the set or not
    // if not then it is the starting point is the ele and after that to increment the curr ele and check if it is persent into the set or not and also keep the count variable.
    // if the ele is persent into the set then we will not do anything.
    for(int i=0;i<nums.size();i++){
        if(!s.count(nums[i]-1)){
            int cnt = 1;
            int x = nums[i];
            while(s.find(x+1) != s.end()){
                cnt++;
                x++;
            }
            maxi = max(maxi,cnt);
        }
    }
    return maxi;
}
int main(){
    vector<int> nums = {100,4,200,1,3,2};
    LongestConsecutiveSequence(nums);
    return 0;
}