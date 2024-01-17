// Input : [1,1,1,3,3,2,2,2]
// Output : [1,2]

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n)+O(n), S.C : O(1)

vector<int> MajorityElement(vector<int>&nums){
    int n = nums.size();
    vector<int>ans;
    int num1=-1,num2=-1,c1=0,c2=0;
    for(auto ele : nums){
        if(ele==num1){
            c1++;
        }
        else if(ele==num2) c2++;
        else if(c1==0){
            num1=ele;
            c1=1;
        }
        else if(c2==0){
            num2=ele;
            c2=1;
        }
        else{
            c1--;
            c2--;
        }
    }

    int cnt1 = 0,cnt2=0;
    for(auto it : nums){
        if(it==num1) cnt1++;
        else if(it==num2) cnt2++;
    }
    if(cnt1>(n/3)) ans.push_back(num1);
    if(cnt2>(n/3)) ans.push_back(num2);

    return ans;
}

int main(){
    vector<int>arr = {1,1,1,3,3,2,2,2};
    MajorityElement(arr);
}