// Input : N = 5
// Output : 1
//           1   1
//         1   2   1
//     1    3    3   1
//  1    4    6    4   1
// 1    5   10   10   5   1

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> PascalTriangle(int n){
    vector<vector<int>> res(n);
    for(int i=0;i<n;i++){
        res[i].resize(i+1);
        res[i][0] = res[i][i] = 1;

        for(int j=1;j<i;j++){
            res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
    }
    return res;
}


int main(){
    int n = 5;
    PascalTriangle(n);
}