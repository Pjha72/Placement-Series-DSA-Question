#include <bits/stdc++.h>
using namespace std;

// T.C: O(n^2 * logm) S.C: O(n)
vector<vector<int>> ThreeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    // Step-1 : Set a pointer to the first element
    // of the array
    for (int i = 0; i < nums.size(); i++)
    {
        if (i != 0 && nums[i] == nums[i - 1]) continue;
            int low = i + 1, high = nums.size() - 1;

            while (low < high)
            {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum < 0)
                    low++;
                else if(sum > 0){
                    high--;
                }
                else
                {
                    vector<int> temp= {nums[i], nums[low], nums[high]};
                    res.push_back(temp);
                    low++, high--;
                    while (low < high && nums[low] == nums[low - 1])
                        low++;
                    while (low < high && nums[high] == nums[high + 1])
                        high--;

                }    
            }
        return res;
    }
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    ThreeSum(nums);
}