#include<bits/stdc++.h>
using namespace std;

struct meeting{
    int start;
    int end;
    int pos;
};

bool comparator(struct meeting m1, meeting m2){
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    return false;
}
// T.C : O(n) + O(nlogn) + O(n) S.C : O(n)
int NMeetingsInOneRoom(vector<int>&start, vector<int>&end, int n){
    // Step-1 : create a structure array
    struct meeting meet[n];
    for(int i=0;i<n;i++){
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i+1;
    }
    // Step-2 : Sort the structure array
    sort(meet, meet+n, comparator);

    // Step-3 : Take a vector to store the result and set the
    // endlimit to the first meeting's end
    vector<int> res;
    int limit = meet[0].end;
    res.push_back(meet[0].pos);

    // Step-4 : Traverse on the array and check if the
    // start time of the next meeting is greater than or
    // equal to the end time of the previous meeting
    for(int i=1;i<n;i++){
        if(meet[i].start > limit){
            limit = meet[i].end;
            res.push_back(meet[i].pos);
        }
    }

    // Step-5 : Return the result
    return res.size();
}

int main(){
    int n = 6;
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    NMeetingsInOneRoom(start, end, n);
    return 0;
}