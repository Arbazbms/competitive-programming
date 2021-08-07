
//! N2 soln
/*
int getPairsCount(int arr[], int n, int sum)
{
    int count = 0; // Initialize result
 
    // Consider all possible pairs and check their sums
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
 
    return count;
}
*/

#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    // code here
    if (n < 2)
        return 0;

    sort(arr, arr + n);

    int start = 0;
    int end = n - 1;
    int count = 0;

    while (start < end)
    {
        if (arr[start] + arr[end] == k)
        {
            count++;
            start++;
        }
        else if (arr[start] + arr[end] > k)
        {
            end--;
        }

        else
            start++;
    }
    return count;
}
int main()
{

    int arr[] = {1, 5, 7, 1};
    int n = 4;
    int k = 12;
    cout << "getPairsCount" << endl;
    int res = getPairsCount(arr, n, k);
    cout << "result: " << res;
    return 0;
}

/*
using hasing

*/