//DP O(N) soln
//O(N^2) is Bf-max-prod-subarrary.cpp file

class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(int *arr, int n)
    {
        // code here
        if (n == 0)
            return -1;
        int maxProd = arr[0];
        int minProd = arr[0];
        int ans = arr[0];
        int choice1, choice2;
        for (int i = 1; i < n; i++)
        {
            choice1 = minProd * arr[i];
            choice2 = maxProd * arr[i];
            minProd = min(arr[i], min(choice1, choice2));
            maxProd = max(arr[i], max(choice1, choice2));
            ans = max(ans, maxProd);
        }
        return ans;
    }
};