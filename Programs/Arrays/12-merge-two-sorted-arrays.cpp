#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        // code here
        int res[n + m];
        int n1 = 0;
        int size;
        for (int i = 0; i < n; i++)
        {
            res[i] = arr1[i];
            n1++;
        }

        int n2 = n1 + 1;
        for (int i = 0; i < m; i++)
        {
            res[n2] = arr2[i];
            n2++;
        }
        size = sizeof(res) / sizeof(res[0]);
        sort(res, res + size);
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++)
            cin >> arr1[i];

        for (i = 0; i < m; i++)
            cin >> arr2[i];

        Solution ob;
        ob.merge(arr1, arr2, n, m);

        cout << "After merge: \n";
        for (i = 0; i < n; i++)
            cout << arr1[i] << " ";

        for (i = 0; i < m; i++)
            cout << arr2[i] << " ";

        cout << "\n";
    }
    return 0;
}