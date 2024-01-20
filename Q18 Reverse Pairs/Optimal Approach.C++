// Input : 
// Output : 


#include<bits/stdc++.h>
using namespace std;

// T.C : O(nlogn)+O(n)+O(n) S.C : O(n)

int Merge(vector<int>&arr, int low, int mid, int high){
    int cnt = 0;
    int j = mid+1;
    for(int i=low;i<=mid;i++){
        while(j<=high && arr[i]>2LL*arr[j]){
            j++;
        }
        cnt+=(j-(mid+1));
    }

    vector<int>temp;
    int left = low, right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }

    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }

    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    return cnt;
}

int MergeSort(vector<int>&arr,int low, int high){
    if(low>=high) return 0;
    int mid = (low+high)/2;
    int inv = MergeSort(arr,low,mid);
    inv+= MergeSort(arr,mid+1,high);
    inv+= Merge(arr,low,mid,high);
    return inv;
}

int ReversePairs(vector<int>&arr){
    return MergeSort(arr,0,arr.size()-1);
}

int main(){
    vector<int>arr = {1,3,2,3,1};
    ReversePairs(arr);
    return 0;
}