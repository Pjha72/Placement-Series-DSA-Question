#include <bits/stdc++.h>
using namespace std;

// T.C : O(n^2) and S.C : O(1)
int TrappingWater(vector<int> height)
{
    int n = height.size();
    // Step-1 : Create a PrefixMax and SuffixMax array
    vector<int> prefixMax(n,0) , suffixMax(n,0);
    prefixMax[0] = height[0];
    for(int i=1;i<n;i++){
        prefixMax[i] = max(prefixMax[i-1],height[i]);
    }
    suffixMax[n-1] = height[n-1];
    for(int i=n-2;i>=0;i--){
        suffixMax[i] = max(suffixMax[i+1], height[i]);
    }
    // Step-2 : Calculate the water
    int water = 0;
    for(int i=0;i<n;i++){
        water += min(prefixMax[i], suffixMax[i]) - height[i];
    }
    return water;
}

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    TrappingWater(height);
}