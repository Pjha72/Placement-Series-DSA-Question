// Input : N = 5
// Output : 1
//           1   1
//         1   2   1
//     1    3    3   1
//  1    4    6    4   1
// 1    5   10   10   5   1

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int row){
    vector<int> ans;
    int val = 1;
    ans.push_back(val);
    for(int i=1;i<=row;i++){
        val = val*(row-i);
        val = val/i;
        ans.push_back(val);
    }
    return ans;
}

vector<vector<int>> PascalTriangle(int n){
    vector<vector<int>> res;
    for(int i=1;i<=n;i++){
        res.push_back(solve(i));
    }
    return res;
}


int main(){
    int n = 5;
    PascalTriangle(n);
}