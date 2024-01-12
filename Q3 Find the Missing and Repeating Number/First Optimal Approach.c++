// Input : arr[] = {3, 1, 3}
// Output : Missing = 2, Repeating = 3

#include<bits/stdc++.h>
using namespace std;

// Method 1: Naive Approach : 
// Time Complexity : O(n) + O(n) = O(n)
// Space Complexity : O(n)

// Step-1 : First Find the sum of all Numbers from 1 to n
// Step-2 : Then find the Square Sum of all Numbers from 1 to n
// Step-3 : Then Subtract the sum of all Numbers from 1 to n from the Sum of array elements.
// Step-4 : Then Subtract the Square Sum of all Numbers 
//from 1 to n from the Square Sum of array elements.
// Step-5 : Then Add both the equations and find the values of X and Y.

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