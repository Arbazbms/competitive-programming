#include <bits/stdc++.h>
using namespace std;

void printdup(int arr[], int n)
{

    unordered_set<int> intset;
    unordered_set<int> dupset;

    for (int i = 0; i < n; i++)
    {
        // if element is not there then insert that
        if (intset.find(arr[i]) == intset.end())
            intset.insert(arr[i]);
        // if element is already there then insert into
        // duplicate set
        else
            dupset.insert(arr[i]);
    }

    unordered_set<int>::iterator itr;
    for (itr = dupset.begin(); itr != dupset.end(); itr++)
        cout << *itr << " ";
}

int main()
{

    int arr[5] = {1, 2, 3, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    printdup(arr, n);

    return 0;
}