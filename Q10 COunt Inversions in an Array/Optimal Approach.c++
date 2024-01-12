// input : {8,4,2,1}
// Output : (8,4), (4,2), (8,2), (8,1), (4,1), (2,1)

#include <bits/stdc++.h>
using namespace std;

// T.C : O(Nlogn) S.C : O(n)

int merge(int arr[], int temp[], int l, int m, int h){
    int i,j,k;
    int inv_count = 0;

    i=l; /*i is index for left subarray*/
    j=m; /*j is index for right subarray*/
    k=l; /*k is index for resultant merged array*/

    while((i<=m-1) && (j<=h)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            /*this is tricky -- see above explanation
            /diagram for merge()*/
            inv_count+=(m-i);
        }
    }

    while(i<=m-1){
        temp[k++] = arr[i++];
    }
    while(j<=h){
        temp[k++] = arr[j++];
    }

    for(i=l;i<=h;i++){
        arr[i] = temp[i];
    }

    return inv_count;

}

int _mergeSort(int arr[], int temp[], int l, int h){
    int mid, inv_count = 0;
    if(h>l){
        mid = (l+h)/2;

        inv_count+=_mergeSort(arr, temp, l, mid);
        inv_count+=_mergeSort(arr, temp, mid+1, h);

        inv_count+=merge(arr, temp, l, mid+1, h);
    }
    return inv_count;
}


int main()
{
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    int ans = _mergeSort(arr, temp, 0, n-1);
    cout << ans << endl;
}