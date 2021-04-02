//https://leetcode.com/problems/top-k-frequent-elements/

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> freq;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        for (auto i : freq)
        {
            if (i.second > k)
                res.push_back(i.first);
        }
        if (res.size() > 0)
            return res;
        else
            return nums;
    }
};