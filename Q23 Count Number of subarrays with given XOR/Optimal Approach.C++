// Input : arr[] = {4,2,2,6,4} and k = 6
// Output : 4

#include<bits/stdc++.h>
using namespace std;

// T.C : (NlogN) S.C : O(N)

int CountNumberOfSubarraysWithGivenXOR(vector<int>&arr, int k){
    // Step-1 : Take a Hashmap to store the prefixSum and count
    unordered_map<int,int>m;
    int count = 0;
    int XOR = 0;
    // Step-2 : Linearly traverse the array
    for(int i=0;i<arr.size();i++){
        XOR = XOR ^ arr[i];
        if(m.find(XOR ^ k) != m.end()){
            count += m[XOR ^ k];
        }
        if(XOR == k){
            count++;
        }

        m[XOR] += 1;
    }
    return count;
}

int main(){
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    CountNumberOfSubarraysWithGivenXOR(arr,k);
    return 0;
}