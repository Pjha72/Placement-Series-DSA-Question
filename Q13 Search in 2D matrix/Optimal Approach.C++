// Input : [[1,3,5,7],[10,11,16,20],[23,30,34,60]] , target = 3
// Output : True

#include<bits/stdc++.h>
using namespace std;

// T.C : O(log(n*m)), S.C : O(1)
bool SearchIn2DMatrix(vector<vector<int>>&matrix, int target){
    int n = matrix.size(), m = matrix[0].size();
    if(n==0) return false;
    int low = 0, high = (n*m)-1;

    while(low<=high){
        int mid  = (low+(high-low)/2);
        if(matrix[mid/m][mid%m] == target){
            return true;
        }
        if(matrix[mid/m][mid%m] > target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    SearchIn2DMatrix(matrix,target);
}