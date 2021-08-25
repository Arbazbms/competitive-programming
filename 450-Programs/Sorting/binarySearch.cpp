#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{

    while (l <= r)
    {
        int mid = l + (r - 1) / 2;

        if (arr[mid] == x)
            return mid;
        if (x > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}