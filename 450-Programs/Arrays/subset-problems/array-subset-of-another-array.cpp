// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
/*
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Example 2:

Input:
a1[] = {1, 2, 3, 4, 5, 6}
a2[] = {1, 2, 4}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Example 3:

Input:
a1[] = {10, 5, 2, 23, 19}
a2[] = {19, 5, 3}
Output:
No
Explanation:
a2[] is not a subset of a1[]
*/

//! O(N) soln

string isSubset(int a1[], int a2[], int n, int m)
{

    set<int> s;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        s.insert(a1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        if (s.find(a2[i]) == s.end())
            flag = 0;
    }

    if (flag)
        return "Yes";
    else
        return "No";
}