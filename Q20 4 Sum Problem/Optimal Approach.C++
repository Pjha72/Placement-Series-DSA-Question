// Input : nums = [1,0,-1,0,-2,2], target = 0
// Output : [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> FourSum(vector<int> &nums, int target)
{
    // For store the unique quadruplets
    vector<vector<int>> ans;
    if(nums.empty()){
        return ans;
    }
    // Step-1: Sort the array
    sort(nums.begin(), nums.end());
    // {-2,-1,0,0,1,2}
    // Step-2 : Use the 3 prt
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int left = j + 1, right = nums.size() - 1;
            while (left < right)
            {
                long long sum = nums[i];
                    sum+=nums[j];
                    sum+=nums[left];
                    sum+=nums[right];
                if (sum == target)
                {
                    vector<int> temp(4,0);
                    temp[0] = nums[i];
                    temp[1] = nums[j];
                    temp[2] = nums[left];
                    temp[3] = nums[right];
                    ans.push_back(temp);

                    // Processing the duplicates of number 3
                    while(left < right && nums[left] == temp[2]){
                        left++;
                    }
                    // Processing the duplicates of number 4
                    while(left < right && nums[right] == temp[3]){
                        right--;
                    }
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
            // Processing the duplicates of number 2
            while(j+1<nums.size() && nums[j+1] == nums[j]){
                j++;
            }
        }
        // Processing the duplicates of number 1
        while(i+1<nums.size() && nums[i+1] == nums[i]){
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    FourSum(nums, target);
}