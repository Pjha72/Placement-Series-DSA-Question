// Input : {{1,2,3},{4,5,6},{7,8,9}}
// Output : {{7,4,1},{8,5,2},{9,6,3}}

#include<bits/stdc++.h>
using namespace std;

// T.C : O(N^2) S.C : O(N^2)

vector<vector<int>> RotateImage(vector<vector<int>>&matrix){
    int n = matrix.size();
    vector<vector<int>> temp(n, vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[j][n-i-1] = matrix[i][j];
        }
    }
    return temp;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    RotateImage(matrix);
}