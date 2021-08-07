//https://practice.geeksforgeeks.org/problems/count-pair-sum5956/1/?category[]=Arrays&amp;category[]=Arrays&amp;page=4&amp;query=category[]Arrayspage4category[]Arrays#

/*
Example 1:

Input:
M=4, N=4 , Sum = 10
arr1[] = {1, 3, 5, 7}
arr2[] = {2, 3, 5, 8} 
Output: 2
Explanation: The pairs are: (5, 5) and (7, 3).

*/

//! N2

{
    int count = 0;

    // generating pairs from
    // both the arrays
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)

            // if sum of pair is equal
            // to 'x' increment count
            if ((arr1[i] + arr2[j]) == x)
                count++;

    // required count of pairs
    return count;
}

//! O(N+M)
class Solution
{
public:
    int countPairs(int arr1[], int arr2[], int m, int n, int x)
    {
        //code here.
        int count = 0;
        set<int> v;
        for (int i = 0; i < n; i++)
        {
            v.insert(arr2[i]);
        }
        int temp;
        for (int i = 0; i < m; i++)
        {

            if (v.find(x - arr1[i]) != v.end())
            {
                count++;
            }
        }
        return count;
    }
};

//! o(mlogN)

bool isPresent(int arr[], int low,
               int high, int value)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // value found
        if (arr[mid] == value)
            return true;

        else if (arr[mid] > value)
            high = mid - 1;
        else
            low = mid + 1;
    }

    // value not found
    return false;
}

int countPairs(int arr1[], int arr2[],
               int m, int n, int x)
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int value = x - arr1[i];

        if (isPresent(arr2, 0, n - 1, value))
            count++;
    }

    return count;
}