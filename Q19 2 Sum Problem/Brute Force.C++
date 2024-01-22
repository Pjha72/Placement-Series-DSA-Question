// Input : 
// Output : 

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n^2) S.C : O(1)
void TwoSum(vector<int>&arr, int target){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(target-arr[j]==arr[i]){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<-1<<endl;
}
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    TwoSum(arr, target);
    return 0;
}