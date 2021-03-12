#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5}, k;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter k: " << endl;
    cin >> k;
    if (k > n)
        cout << "enter k within range of arr size" << endl;
    else
    {
        sort(arr, arr + n);
        cout << "Kth Smallest number in an array is : " << arr[k - 1] << endl;
    }

    return 0;
}