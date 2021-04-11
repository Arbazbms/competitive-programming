#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max Element in an Array is :" << max << endl;

    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Min Element in an Array is :" << min << endl;

    return 0;
}