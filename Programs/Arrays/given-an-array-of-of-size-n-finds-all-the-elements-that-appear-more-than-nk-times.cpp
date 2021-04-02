/*
Given an array of size n and a number k, find all elements that appear more than n/k times
*/
//https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/

#include <bits/stdc++.h>
using namespace std;
vector<int> nk(int arr[], int n, int k)
{
    unordered_map<int, int> freq;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (auto i : freq)
    {
        if (i.second > n / k)
        {
            res.push_back(i.first);
        }
    }
    return res;
}
int main()
{
    vector<int> vect;
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vect = nk(arr, n, 2);
    vector<int>::iterator it;
    for (it = vect.begin(); it != vect.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}