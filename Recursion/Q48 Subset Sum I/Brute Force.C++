#include <bits/stdc++.h>
using namespace std;

// T.C : O(2^n) S.C : O(2^n)
vector<int> SubsetSum(vector<int> &arr, int n)
{
    // By using power set
    vector<int> res;
    for(int i=0;i<(1<<n);i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sum += arr[j];
            }
        }
        res.push_back(sum);
    }
    return res;
}

int main()
{
    int n = 2;
    vector<int> arr = {2, 3};
    SubsetSum(arr, n);
    return 0;
}