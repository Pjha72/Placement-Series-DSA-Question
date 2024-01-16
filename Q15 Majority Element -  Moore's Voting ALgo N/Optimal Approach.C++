// Input : [3,2,3]
// Output : 3

#include <bits/stdc++.h>
using namespace std;

int MajorityElement(vector<int> &arr)
{
    int n = arr.size();

    map<int,int>m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    for(auto it : m){
        if(it.second > n/2){
            return it.first;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {3, 2, 3};
    MajorityElement(arr);
}