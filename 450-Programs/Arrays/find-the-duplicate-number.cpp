https : //leetcode.com/problems/find-the-duplicate-number/
        //11 450

        //soln 1
        class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int res = -1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                res = nums[i];
                break;
            }
        }
        return res;
    }
};

//soln 2 sort()

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int res;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size() + 1; j++)
            {
                if (nums[i] == nums[j])
                {
                    res = nums[i];
                    return res;
                }
            }
        }
        return 0;
    }
};