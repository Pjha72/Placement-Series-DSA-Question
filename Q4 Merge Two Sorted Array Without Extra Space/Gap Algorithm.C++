// Input: arr1 : {10}
//        arr2 : {2, 3}
// Output: arr1 : {2}
//         arr2 : {3, 10}

#include<bits/stdc++.h>
using namespace std;

// Step-1 : Find the gap
// Step-2 : Compare the element with gap
// Step-3 : Swap the element if arr1[i]>arr2[i]
// Step-4 : Compare the element with gap/2
// Step-5 : Swap the element if arr1[i]>arr2[i]
// Step-6 : Repeat the step-4 and step-5 until gap becomes 1

// Time Complexity : O(nlogn)
// Space Complexity : O(1)

void MergeTwoSortedArrayWithoutExtraSpace(vector<int>&arr1, vector<int>&arr2){
    int n = arr1.size(), m=arr2.size();
    int gap = ceil((n+m)/2);
    while(gap>=1){
        int i=0,j=gap;
        while(j<n+m){
            if(i<n && j<n){
                if(arr1[i]>arr2[j]){
                    swap(arr1[i],arr2[j]);
                }

            }
            else if(i<n && j>=n){
                if(arr1[i]>arr2[j-n]){
                    swap(arr1[i],arr2[j-n]);
                }
            }
            i++;
        }
        gap = ceil(gap/2);

    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr1{10};
    vector<int> arr2{2,3};
    MergeTwoSortedArrayWithoutExtraSpace(arr1,arr2);
}