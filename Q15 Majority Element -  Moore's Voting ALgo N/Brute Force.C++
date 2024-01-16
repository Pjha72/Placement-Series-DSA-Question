// Input : [3,2,3]
// Output : 3

#include <bits/stdc++.h>
using namespace std;

int MajorityElement(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++){
        int cnt = 0;
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt<(arr.size()/2)){
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 2, 3};
    MajorityElement(arr);
}