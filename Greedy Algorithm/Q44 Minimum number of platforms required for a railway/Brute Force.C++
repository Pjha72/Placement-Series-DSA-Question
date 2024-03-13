#include <bits/stdc++.h>
using namespace std;

// T.C : O(2*nlogn) + O(2n) S.C : O(1)
int MinimumPlatforms(vector<int> &arr, vector<int> &dep, int n)
{
    // Step-1 : Sort the arrival and departure time
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    // Step-2 : Initialize the platform needed and maximum
    // platform needed
    int platform = 1, maxi = 1;
    int i = 1, j = 0;
    while (i < n && j < n)
    {
        // Step-3 : If the arrival time is less than or equal
        // to the departure time then increment the platform
        // needed and move to the next arrival time
        if (arr[i] <= dep[j])
        {
            platform++;
            i++;
        }
        // Step-4 : If the arrival time is greater than the
        // departure time then departure the platform needed
        // and move to the next departure time
        else if (arr[i] > dep[j])
        {
            platform--;
            j++;
        }
        // Step-5 : Update the maximum platform needed
        maxi = max(maxi, platform);
    }
    // Step-6 : Return the maximum platform needed
    return maxi;
}

int main()
{
    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {910, 1200, 1120, 1130, 1900, 2000};
    int n = 6;
    MinimumPlatforms(arr, dep, n);
    return 0;
}