#include <bits/stdc++.h>
using namespace std;

bool chkSame(int arr[], int n)
{
    int firstElement = arr[0];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != firstElement)
        {
            flag = 1;
        }
    }
    return flag;
}

int main()
{
    int arr[] = {2, 2, 2, 2, 2};
    int n = 5;

    int res = chkSame(arr, n);
    if (res)
        cout << "Array elements are not same";
    else
        cout << "Array elements are same";
}
