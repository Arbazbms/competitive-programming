// link : https://leetcode.com/problems/running-sum-of-1d-array/
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {

        int sum = 0;
        vector<int> runningSum;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
            runningSum.push_back(sum);
        }
        return runningSum;
    }
};
