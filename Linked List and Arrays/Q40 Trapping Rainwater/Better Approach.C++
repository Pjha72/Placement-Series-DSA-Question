#include <bits/stdc++.h>
using namespace std;

// T.C : O(n) and S.C : O(1)
int TrappingWater(vector<int> height)
{
    int n = height.size();
    // Step-1 : Initialize the some variable
    int left = 0, right = n-1, water = 0, left_max = 0, right_max = 0;
    // Step-2 : Run the loop until left<=right
    while(left<=right){

        if(height[left]<=height[right]){
            if(height[left]>=left_max){
                left_max = height[left];
            }
            else{
                water += left_max - height[left];
            }
            left++;
        }
        else{
            if(height[right] >= right_max){
                right_max = height[right];
            }
            else{
                water += right_max - height[right];
            }
            right--;
        }
    }
    return water;
}

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    TrappingWater(height);
}