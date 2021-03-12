//link : https://leetcode.com/problems/shuffle-the-array/
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        int st1 = 0;
        int st2 = nums.size() / 2;
        vector<int> res;
        while (st1 < n)
        {
            res.push_back(nums[st1]);
            res.push_back(nums[st2]);
            st1++;
            st2++;
        }
        return res;
    }
};