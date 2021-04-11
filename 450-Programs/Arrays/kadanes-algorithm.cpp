//Find the contiguous sub-array with maximum sum.
int maxSubarraySum(int arr[], int n)
{

    // Your code here
    int max_so_far = arr[0];
    int max_end_here = 0;
    int start, end, s = 0;
    for (int i = 0; i < n; i++)
    {
        max_end_here += arr[i];
        if (max_so_far < max_end_here)
        {
            max_so_far = max_end_here;
            start = s;
            end = i;
        }
        if (max_end_here < 0)
        {
            max_end_here = 0;
            s = i + 1;
        }
    }
    return max_so_far;
}