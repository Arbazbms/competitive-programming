//link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> res;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j] && j != i)
                {
                    count++;
                }
            }
            res.push_back(count);
            count = 0;
        }
        return res;
    }
};