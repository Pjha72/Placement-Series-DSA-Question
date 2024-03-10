#include<bits/stdc++.h>
using namespace std;

// T.C: O(n^2 * logm) S.C: O(n)
vector<vector<int>> ThreeSum(vector<int>&nums){
    
    // Step-1 : Create a hashmap to store the
    // frequency of each element in the array
    set<vector<int>> st;
    // Step-2 : Use two for loops to iterate over
    // all possible pairs of elements in the array
    for(int i=0;i<nums.size();i++){
        set<int> hashset;
        for(int j=i+1;j<nums.size();j++){
            // Step-3 : Check if the third element
            // required to make the sum 0 is persent
            // in the hashmap
            int third = -(nums[i]+nums[j]);

            if(hashset.find(third)!=hashset.end()){
                vector<int> temp = {nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> res{st.begin(),st.end()};
    return res;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    ThreeSum(nums);
}