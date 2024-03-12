#include<bits/stdc++.h>
using namespace std;

// T.C : O(nlogn) + O(n) S.C : O(n)
int RemoveDuplicatesFromSortedArray(vector<int>& arr){
    if(arr.size()==0) return 0;
    // Step-1 : Create a two pointer 
    int i = 0, j = 1;
    // Step-2 : Traverse on the array
    while(j<arr.size()){
        // Step-3 : If the elements are the same than move 
        // j to one step ahead
        if(arr[i]==arr[j]){
            j++;
        }
        // Step-4 : If the elements are different than move
        // i to one step ahead and place the element at i
        // to the element at j
        else{
            i++;
            arr[i] = arr[j];
            j++;
        }
        return i+1;
    }
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3};
    RemoveDuplicatesFromSortedArray(arr);
    return 0;
}