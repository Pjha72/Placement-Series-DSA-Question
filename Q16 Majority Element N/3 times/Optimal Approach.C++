// Input : [1,1,1,3,3,2,2,2]
// Output : [1,2]

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n) => Use Freq array S.C : O(n)
// T.C : O(nlogn) => Use Unordered map S.C : O(n)
vector<int> MajorityElement(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    int cnt = 0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    for(auto it : m){
        if(it.second>(n/3)){
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main(){
    vector<int>arr = {1,1,1,3,3,2,2,2};
    MajorityElement(arr);
}