class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {

        sort(arr, arr + n);
        int count = 0;
        int left = 0, right = 0;
        while (left < right)
        {
            if (arr[left] + arr[right] > k)
                right--;
            else if (arr[left] + arr[right] < k)
                left++;
            else
            {
                count++;
                right--;
            }
        }
        return count;
    }
};