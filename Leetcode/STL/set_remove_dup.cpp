#include <bits/stdc++.h>
using namespace std;

void printdup(int arr[], int n)
{

    set<int> intset;

    for (int i = 0; i < n; i++)
    {
        intset.insert(arr[i]);
    }

    cout << "unique elements: \n";
    set<int>::iterator itr;
    for (itr = intset.begin(); itr != intset.end(); itr++)
        cout << *itr << " ";
}

int main()
{

    int arr[] = {1, 2, 3, 2, 3, 4, 4, 4, 4, 4, 6, 6, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    printdup(arr, n);

    return 0;
}