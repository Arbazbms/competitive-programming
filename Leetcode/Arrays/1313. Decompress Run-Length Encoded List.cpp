//link: https://leetcode.com/problems/decompress-run-length-encoded-list/
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); i = i + 2)
        {
            int freq = nums[i];
            while (freq != 0)
            {
                res.push_back(nums[i + 1]);
                freq--;
            }
            //or while(freq--) res.push_back(nums[i+1]);
        }
        return res;
    }
};