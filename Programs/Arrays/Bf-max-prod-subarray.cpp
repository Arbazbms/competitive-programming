#include <bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(int arr[], int n)
{

    int res = arr[0];
    for (int i = 0; i < n; i++)
    {

        int mul = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            res = max(mul, res); // for single element
            mul = mul * arr[j];
        }
        res = max(mul, res);
    }
    return res;
}

int main()
{
    int arr[] = {-1, -3, 10, 0, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sub array product is:  "
         << maxSubarrayProduct(arr, n);
    return 0;
}