// Input : arr = [2, 5, 9, 6, 9, 3, 8, 9, 7, 1]
// Output : 9

// By using Linked List Cycle Method

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&arr){
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);
    fast = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main(){
    vector<int>arr{2, 5, 9, 6, 9, 3, 8, 9, 7, 1};
    int ans  = findDuplicate(arr);
    cout<<ans<<endl;
}