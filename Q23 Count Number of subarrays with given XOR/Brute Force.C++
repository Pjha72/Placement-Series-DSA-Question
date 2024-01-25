// Input : arr[] = {4,2,2,6,4} and k = 6
// Output : 4

#include<bits/stdc++.h>
using namespace std;

// T.C : O(N^3) S.C : O(1)

int CountNumberOfSubarraysWithGivenXOR(vector<int>&arr, int k){
    // Step-1 : Generate all Subarrays
    int count = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            int XOR = 0;
            for(int k=i;k<=j;k++){
                XOR = XOR ^ arr[k];
            }

            if(XOR == k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    CountNumberOfSubarraysWithGivenXOR(arr,k);
    return 0;
}