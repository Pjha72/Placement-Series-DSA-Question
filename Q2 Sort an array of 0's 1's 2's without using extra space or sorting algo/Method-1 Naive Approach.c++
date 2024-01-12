// Input : arr = [2, 0, 2, 1, 1, 0]
// Output : [0, 0, 1, 1, 2, 2]

#include<bits/stdc++.h>
using namespace std;

// Method 1: Naive Approach
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

int main(){
    vector<int>arr{2, 0, 2, 1, 1, 0};

    // Method 1: Naive Approach
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}