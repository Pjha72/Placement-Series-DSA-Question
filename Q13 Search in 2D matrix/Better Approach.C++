// Input : [[1,3,5,7],[10,11,16,20],[23,30,34,60]] , target = 3
// Output : True

#include<bits/stdc++.h>
using namespace std;

// T.C : O(N*M), S.C : O(1)
bool SearchIn2DMatrix(vector<vector<int>>&matrix, int target){
    int n = matrix.size(), m = matrix[0].size();
    int i = 0, j = m-1;
    while(i<n && j>=0){
        if(matrix[i][j] == target){
            return true;
        }
        if(matrix[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    SearchIn2DMatrix(matrix,target);
}