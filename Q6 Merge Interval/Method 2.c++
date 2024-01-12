// Input : [[1,3],[2,6],[8,10],[15,18]]
// Output : [[1,6],[8,10],[15,18]]

#include<bits/stdc++.h>
using namespace std;

// Method 2 : T.C = O(nlogn) + O(n) S.C = O(n)
vector<vector<int>> MergeIntervals(vector<vector<int>>&arr){
    vector<vector<int>>ans;
    if(arr.size()==0){
        return ans;
    }
    sort(arr.begin(),arr.end());
    vector<int> temp = arr[0];
    for(auto it : arr){
        if(it[0]<=temp[1]){
            temp[1] = max(it[1], temp[1]);
        }
        else{
            ans.push_back(temp);
            temp = it;
        }
    }
    ans.push_back(temp);
    return ans;  
}

int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    MergeIntervals(intervals);
}