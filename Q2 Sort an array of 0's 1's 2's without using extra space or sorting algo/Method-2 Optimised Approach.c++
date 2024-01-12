// Input : arr = [2, 0, 2, 1, 1, 0]
// Output : [0, 0, 1, 1, 2, 2]

#include<bits/stdc++.h>
using namespace std;

// Method-2 Optimised Approach
// Time Complexity: O(n)
// Space Complexity: O(1)

void sortArray(vector<int>&arr){
    int countFreq[256] = {0};
    for(int i=0;i<arr.size();i++){
        countFreq[arr[i]]++;
    }

    for(int i=0;i<256;i++){
        while(countFreq[i]>0){
            cout<<i<<"";
            countFreq[i]--;
        }
    }
}

int main(){
    vector<int>arr{2, 0, 2, 1, 1, 0};

    sortArray(arr);
}