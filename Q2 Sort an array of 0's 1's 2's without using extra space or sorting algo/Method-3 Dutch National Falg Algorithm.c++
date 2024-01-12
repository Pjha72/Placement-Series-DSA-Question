// Input : arr = [2, 0, 2, 1, 1, 0]
// Output : [0, 0, 1, 1, 2, 2]

#include<bits/stdc++.h>
using namespace std;

// Method-3 Dutch National Flag Algorithm 
// Time Complexity: O(n)
// Space Complexity: O(1)


void sortArray(vector<int>&arr){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++,mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }

    }
}

int main(){
    vector<int>arr{2, 0, 2, 1, 1, 0};

    sortArray(arr);
}