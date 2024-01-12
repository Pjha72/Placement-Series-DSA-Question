// Input : [[1,3],[2,6],[8,10],[15,18]]
// Output : [[1,6],[8,10],[15,18]]

#include<bits/stdc++.h>
using namespace std;

// Method 1 : 
void MergeIntervals(vector<vector<int>>&arr){
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    int start = arr[0][0];
    int end = arr[0][1];
    for(int i=1;i<arr.size();i++){
        if(arr[i][0]<=end){
            end = max(end,arr[i][1]);
        }
        else{
            ans.push_back({start,end});
            start = arr[i][0];
            end = arr[i][1];
        }
    }
}

int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    MergeIntervals(intervals);
}