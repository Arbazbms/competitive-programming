//https://www.geeksforgeeks.org/minimum-length-subarray-sum-greater-given-value/
//code editor https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
/*

Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.

Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).

Example 1:

Input:
A[] = {1, 4, 45, 6, 0, 19}
x  =  51
Output: 3
Explanation:
Minimum length subarray is 
{4, 45, 6}

Example 2:
Input:
A[] = {1, 10, 5, 2, 7}
   x  = 9
Output: 1
Explanation:
Minimum length subarray is {10}
*/

#include <iostream>
using namespace std;

// Returns length of smallest subarray with sum greater than x.
// If there is no subarray with given sum, then returns n+1
int smallestSubWithSum(int arr[], int n, int x)
{
    // Initialize length of smallest subarray as n+1
    int min_len = n + 1;

    // Pick every element as starting point
    for (int start = 0; start < n; start++)
    {
        // Initialize sum starting with current start
        int curr_sum = arr[start];

        // If first element itself is greater
        if (curr_sum > x)
            return 1;

        // Try different ending points for curremt start
        for (int end = start + 1; end < n; end++)
        {
            // add last element to current sum
            curr_sum += arr[end];

            // If sum becomes more than x and length of
            // this subarray is smaller than current smallest
            // length, update the smallest length (or result)
            if (curr_sum > x && (end - start + 1) < min_len)
                min_len = (end - start + 1);
        }
    }
    return min_len;
}

/* Driver program to test above function */
int main()
{
    int arr1[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = smallestSubWithSum(arr1, n1, x);
    (res1 == n1 + 1) ? cout << "Not possible\n" : cout << res1 << endl;

    int arr2[] = {1, 10, 5, 2, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    x = 9;
    int res2 = smallestSubWithSum(arr2, n2, x);
    (res2 == n2 + 1) ? cout << "Not possible\n" : cout << res2 << endl;

    int arr3[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    x = 280;
    int res3 = smallestSubWithSum(arr3, n3, x);
    (res3 == n3 + 1) ? cout << "Not possible\n" : cout << res3 << endl;

    int arr4[] = {1, 3, 5, 5};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    x = 6;
    int res4 = smallestSubWithSum(arr4, n4, x);
    (res4 == n4 + 1) ? cout << "Not possible\n" : cout << res4 << endl;

    return 0;
}
