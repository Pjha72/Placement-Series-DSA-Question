#include <bits/stdc++.h>
using namespace std;

// T.C : O(2^n + 2^nlog(2^n)) S.C : O(2^n)
void Fun(int ind, int sum, vector<int> &arr, int n, vector<int>&res)
{
    
    // Step-1 : Base case
    if(ind == n){
        res.push_back(sum);
        return ;
    }

    // Step-3 : Recursive case - 1 : Pick the element
    Fun(ind+1, sum+arr[ind], arr, n, res);

    // Step-4 : Recursive case - 2 : Do not pick the element
    Fun(ind+1,sum, arr, n, res);

}

vector<int> SubsetSum(vector<int> &arr, int n){
    vector<int> res;
    Fun(0,0,arr,n,res);
    sort(res.begin(),res.end());
    return res;
}
int main()
{
    int n = 2;
    
    vector<int> arr = {2, 3};
    SubsetSum(arr, n);
    return 0;
}