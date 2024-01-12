// Input : arr = [2, 5, 9, 6, 9, 3, 8, 9, 7, 1]
// Output : 9

// By Using Sorting Method - Naive Approach

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }

}

int main(){
    vector<int>arr{2, 5, 9, 6, 9, 3, 8, 9, 7, 1};
    int ans  = findDuplicate(arr);
    cout<<ans<<endl;
}