// Input : nums = [1,0,-1,0,-2,2], target = 0
// Output : [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> FourSum(vector<int> &nums, int target)
{
    // For store the unique quadruplets
    set<vector<int>> s;
    // Step-1: Sort the array
    sort(nums.begin(), nums.end());
    // {-2,-1,0,0,1,2}
    // Step-2 : Use the 3 prt
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                // Step-3 : Use binary search to find the next element to match the target-curr_ele;
                for(int l = k+1;l<nums.size();l++){
                    long long  sum = nums[i] + nums[j];
                    sum+= nums[k];
                    sum+= nums[l];

                    if(sum == target){
                        vector<int> dummy = {nums[i],nums[j],nums[k],nums[l]};
                        sort(dummy.begin(),dummy.end());
                        s.insert(dummy);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    FourSum(nums, target);
}