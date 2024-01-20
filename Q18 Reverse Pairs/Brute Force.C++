// Input : [1,3,2,3,1]
// Output : 2


#include<bits/stdc++.h>
using namespace std;

// T.C : O(n^2) S.C : O(1)

int ReversePairs(vector<int>&arr){
    int count = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>2*arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int>arr = {1,3,2,3,1};
    ReversePairs(arr);

    return 0;
}