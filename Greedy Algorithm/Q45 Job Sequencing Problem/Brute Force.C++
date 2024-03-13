#include<bits/stdc++.h>
using namespace std;

struct Job{
    int id;
    int dead;
    int profit;
};

bool comparator(Job a, Job b){
    return (a.profit > b.profit);
}
// T.C : O(nlogn) + O(n*m) S.C :O(m)
pair<int,int> JobSequenceProblem(Job arr[], int n){
    // Step-1 : Sort the jobs based on the profit
    sort(arr, arr+n, comparator);
    // Step-2 : Take the max deadline
    int maxi = arr[0].dead;
    for(int i =1;i<n;i++){
        maxi = max(maxi, arr[i].dead);
    }
    // Step-3 : Create a slot for store the maximum deadline
    int slot[maxi+1];
    for(int i=0;i<=maxi;i++){
        slot[i] = -1;
    }
    // Step-4 : Traverse on the array and check if the slot is 
    // empty then store the job in the slot
    int count = 0, profit = 0;
    for(int i=0;i<n;i++){
        for(int j=arr[i].dead;j>0;j--){
            if(slot[j] == -1){
                slot[j] = i;
                count++;
                profit += arr[i].profit;
                break;
            }
        }
    }
    return make_pair(count, profit);
}
int main(){
    int n = 4;
    Job arr[n] = {{1,4,20},{2,1,10},{3,1,40},{4,1,30}};
    JobSequenceProblem(arr, n);
    return 0;
}