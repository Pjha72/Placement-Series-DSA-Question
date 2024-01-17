// Input : [1,1,1,3,3,2,2,2]
// Output : [1,2]

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n^2) S.C : O(1)
vector<int> MajorityElement(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(ans.size()==0 || ans[0]!=arr[i]){
            cnt = 0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }
            }
            if(cnt>(n/3)){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()==2){
            break;
        }
    }

    return ans;
}

int main(){
    vector<int>arr = {1,1,1,3,3,2,2,2};
    MajorityElement(arr);
}