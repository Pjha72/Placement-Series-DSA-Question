#include<bits/stdc++.h>
using namespace std;

// T.C : O(nlogn) + O(n) S.C : O(n)
int RemoveDuplicatesFromSortedArray(vector<int>& arr){
    // Step-1 : Create a Hashset to store the unique elements
    set<int> s;
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }
    // Step-2: Place the unique elements in the array
    int i=0;
    for(auto it : s){
        arr[i++] = it;
    }
    // Step-3 : Return the size of the array
    return s.size();
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3};
    RemoveDuplicatesFromSortedArray(arr);
    return 0;
}