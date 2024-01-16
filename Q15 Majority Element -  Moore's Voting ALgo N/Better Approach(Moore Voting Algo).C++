// Input : [3,2,3]
// Output : 3

#include <bits/stdc++.h>
using namespace std;

int MajorityElement(vector<int> &arr)
{
    int cnt = 0;
    int ele = 0;
    for(auto it : arr){
        if(cnt == 0){
            ele = it;
        }
        if(ele == it){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    return ele;
}

int main()
{
    vector<int> arr = {3, 2, 3};
    MajorityElement(arr);
}