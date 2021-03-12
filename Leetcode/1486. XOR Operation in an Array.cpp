//link: https://leetcode.com/problems/xor-operation-in-an-array/

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        vector<int> nums;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            nums.push_back(start + 2 * i);
        }

        for (int i = 0; i < n; i++)
        {
            res = res ^ nums[i];
        }

        return res;
    }
};