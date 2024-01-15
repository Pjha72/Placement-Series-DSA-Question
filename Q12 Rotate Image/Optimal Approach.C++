// Input : {{1,2,3},{4,5,6},{7,8,9}}
// Output : {{7,4,1},{8,5,2},{9,6,3}}

#include<bits/stdc++.h>
using namespace std;

// T.C : O(N^2) + O(N^2) = O(N^2) S.C : O(1)

vector<vector<int>> RotateImage(vector<vector<int>>&matrix){
    // Step-1 : Transpose the matrix
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step-2 : Reverse Each row of the transposed matrix
    for(int i=0;i<matrix.size();i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return matrix;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    RotateImage(matrix);
}