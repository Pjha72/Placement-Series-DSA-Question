// Input : arr = [2, 5, 9, 6, 9, 3, 8, 9, 7, 1]
// Output : 9

// By Using Count Frequency Method

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&arr){
    int countFreq[256] = {0};
    for(int i=0;i<arr.size();i++){
        countFreq[arr[i]]++;
    }
    for(int i=0;i<256;i++){
        if(countFreq[i]>1){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr{2, 5, 9, 6, 9, 3, 8, 9, 7, 1};
    int ans  = findDuplicate(arr);
    cout<<ans<<endl;
}