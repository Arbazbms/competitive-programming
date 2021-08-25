
//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
/*
Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
*/

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here

        unordered_map<int, int> map;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (map.find(k - arr[i]) != map.end())
            {
                count += map[k - arr[i]];
            }
            map[arr[i]]++;
        }
        return count;

        // if(n<2)
        //     return 0;

        // sort(arr,arr+n);

        // int start = 0;
        // int end = n-1;
        // int count = 0;

        // while(start < end){
        //     if(arr[start]+arr[end] == k){
        //         count++;
        //         start++;
        //     }

        //     else if(arr[start] + arr[end] > k)
        //         end--;
        //     else
        //         start++;
        // }
        // return count;
    }
};