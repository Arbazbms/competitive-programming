#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[2][2] =
        {
            {1, 2},
            {3, 4},
        };

    int arr2[2][2];
    int r, c;

    int arr3[2][2];

    // getting size of 2d arrays
    int row = sizeof(arr1) / sizeof(arr1[0]);
    int col = sizeof(arr1[0]) / sizeof(int);
    cout << row << " " << col << endl;

    cout << "***************taking input*************************" << endl;
    r = sizeof(arr2) / sizeof(arr2[0]);
    c = sizeof(arr2[0]) / sizeof(int);

    //input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\narr2[" << i << "][" << j << "]= ";
            cin >> arr2[i][j];
        }
    }

    //output
    cout << "\n arr2" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "****************************adding  matrices ************************" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "\n arr3" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}