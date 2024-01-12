// input : {8,4,2,1}
// Output : (8,4), (4,2), (8,2), (8,1), (4,1), (2,1)

#include <bits/stdc++.h>
using namespace std;

// T.C : O(N^2) S.C : O(1)

int countInversions(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n)
        {
            if (arr[i] > arr[j])
            {
                cnt++;
            }
            j++;
        }
        i++;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {8, 4, 2, 1};
    int ans = countInversions(arr);
    cout << ans << endl;
}