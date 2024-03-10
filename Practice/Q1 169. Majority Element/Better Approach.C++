#include<bits/stdc++.h>
using namespace std;

// T.C : O(n) S.C : O(1)
int MajorityElement(vector<int>&nums, int n){
   int count = 0;
   int candidate = 0;
   for(int i=0;i<n;i++){
        if(count==0){
            candidate = nums[i];
        }
        if(nums[i]==candidate){
            count++;
        }
        else{
            count--;
        }
   }
   return candidate;
}
int main(){
    vector<int> nums={3,2,3};
    int n=nums.size();
    MajorityElement(nums,n);
}