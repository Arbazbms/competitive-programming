//O(N) soln

class Solution
{
public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int, bool> sumMap;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];

            if (sum == 0 || sumMap[sum] == true)
                return true;
            sumMap[sum] = true;
        }
        return false;
    }
};