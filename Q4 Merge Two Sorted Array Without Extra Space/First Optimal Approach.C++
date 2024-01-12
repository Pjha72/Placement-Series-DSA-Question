// Input: arr1 : {10}
//        arr2 : {2, 3}
// Output: arr1 : {2}
//         arr2 : {3, 10}

#include<bits/stdc++.h>
using namespace std;

// Step-1 : Compare both array element and Which one is bigger Swap it;
// Step-2 : Reorder the second array Element
// Step-3: Fllow the setps until the first array is sorted

// Time Complexity : O(n*m)
// Space Complexity : O(1)

void MergeTwoSortedArrayWithoutExtraSpace(vector<int>&arr1, vector<int>&arr2){
    int n = arr1.size(), m=arr2.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            sort(arr2.begin(),arr2.end());
        }
    }
}


int main(){
    vector<int> arr1{10};
    vector<int> arr2{2,3};
    MergeTwoSortedArrayWithoutExtraSpace(arr1,arr2);
}