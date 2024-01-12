// Input : arr[] = {3, 1, 3}
// Output : Missing = 2, Repeating = 3

#include<bits/stdc++.h>
using namespace std;

// Method 1: Naive Approach : 
// Time Complexity : O(n) + O(n) = O(n)
// Space Complexity : O(n)

// Steps 1: XOR all the array elements, let the result of XOR be X.
// Steps 2: X with XOR of all numbers from 1 to n.
// Steps 3: In the result, X^Y = num
// Steps 4: Separate in two baskets
// Steps 5: Separate 1 to n in two baskets
// Steps 6: XOR both the baskets separately. to find the numbers

// Time Complexity : O(n)
// Space Complexity : O(1)

void MissingAndRepeating(vector<int>&arr){
    int n = arr.size();
    int count[n+1] = {0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int missing = 0, repeating = 0;
    for(int i=1;i<=n;i++){
        if(count[i]==0){
            missing = i;
        }
        if(count[i]>1){
            repeating = i;
        }
    }
    cout<<"Missing Number is : "<<missing<<" "<<"REpeating Number is : "<<repeating<<endl;
}


int main(){
    vector<int>arr{3,1,3};
    MissingAndRepeating(arr);
}