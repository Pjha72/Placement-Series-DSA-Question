#include<bits/stdc++.h>
using namespace std;

// T.C : O(n^2) and S.C : O(1)
int TrappingWater(vector<int> height){
    int n = height.size();
    int water = 0;
    for(int i=0;i<n;i++){
        int left = height[i];
        for(int j=0;j<i;j++){
            left = max(left,height[j]);
        }
        int right = height[i];
        for(int j=i+1;j<n;j++){
            right = max(right, height[j]);
        }
        water += min(left,right) - height[i];
    }
    return water;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    TrappingWater(height);
}