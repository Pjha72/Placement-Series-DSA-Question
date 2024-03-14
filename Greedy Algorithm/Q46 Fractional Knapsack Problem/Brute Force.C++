#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
};

bool comp(Item a, Item b)
{
    double r1 = (double)(a.value) / (a.weight);
    double r2 = (double)(b.value) / (b.weight);
    return r1 > r2;
}

// T.C : O(nlogn) + O(n) S.C : O(1)
double FractopnalKnapsack(int n, int W, Item arr[])
{
    // Step-1  : Sort the item based on the value/weight
    sort(arr, arr + n, comp);

    // Step-2 : Initialize the result
    int currWeight = 0;
    double finalValue = 0.0;

    // Step-3 : Loop through all the items
    for (int i = 0; i < n; i++)
    {
        if (currWeight + arr[i].weight <= W)
        {
            currWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            int remain = W - currWeight;
            finalValue += (arr[i].value / (double)arr[i].weight) * (double)remain;
            break;
        }
    }

    return finalValue;
}

int main()
{
    int n = 3, W = 50;
    Item arr[n] = {{60, 10}, {100, 20}, {120, 30}};

    FractopnalKnapsack(n, W, arr);
    return 0;
}