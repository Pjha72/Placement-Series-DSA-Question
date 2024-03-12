#include<bits/stdc++.h>
using namespace std;

// T.C : O(N) S.C : O(1)
int MaxConsecutiveOnes(vector<int>& nums){
    // Step-1 : Create a two pointer 
    int Maxi = 0, cnt = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
            Maxi = max(cnt,Maxi);
        }
        else{
            cnt = 0;
        }
    }
    return Maxi;
}
int main(){
    vector<int> nums = {1,1,0,1,1,1};
    MaxConsecutiveOnes(nums);
    return 0;
}