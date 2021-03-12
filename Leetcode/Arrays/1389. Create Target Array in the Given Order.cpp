//link: https://leetcode.com/problems/create-target-array-in-the-given-order/

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        int len = nums.size();
        vector<int> target;
        for (int i = 0; i < nums.size(); i++)
        {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};
