// Input: arr1 : {10}
//        arr2 : {2, 3}
// Output: arr1 : {2}
//         arr2 : {3, 10}

#include<bits/stdc++.h>
using namespace std;


void MergeTwoSortedArrayWithoutExtraSpace(vector<int>&arr1, vector<int>&arr2){
    int n = arr1.size(), m=arr2.size();
    int arr3[n+m];
    for(int i=0;i<n;i++){
        arr3[i] = arr1[i];
    }
    for(int i=0;i<m;i++){
        arr3[i] = arr2[i];
    }
    sort(arr3,arr3+n+m);
    for(int i=0;i<n;i++){
        arr1[i] = arr3[i];
    }
    for(int i=0;i<m;i++){
        arr2[i] = arr3[i+n];
    }
}


int main(){
    vector<int> arr1{10};
    vector<int> arr2{2,3};
    MergeTwoSortedArrayWithoutExtraSpace(arr1,arr2);
}