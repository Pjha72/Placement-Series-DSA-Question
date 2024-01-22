// Input : 
// Output : 

#include<bits/stdc++.h>
using namespace std;
// T.C : O(n) S.C : O(n)
vector<int> TwoSum(vector<int>&arr, int target){
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        if(m.find(target-arr[i]) != m.end()){
            ans.push_back(m[target-arr[i]]);
            ans.push_back(i);
            return ans;
        }
        m[arr[i]] = i;
    }
    return ans;
}
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    TwoSum(arr, target);
    return 0;
}