// input : [[1,1,1],[1,0,1],[1,1,1]]
// output : [[1,0,1],[0,0,0],[1,0,1]]

#include<bits/stdc++.h>
using namespace std;

// Method 1 : T.C : O(n*m)+(n*m), S.C : O(n+m)

void SetZero(vector<vector<int>>&matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    int rowIndex[] = {0};
    int colIndex[] = {0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                rowIndex[i] = -1;
                colIndex[j] = -1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rowIndex[i]==-1 || colIndex[j]==-1){
                matrix[i][j] = 0;
            }
        }
    }



}

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    SetZero(matrix);
}