/*
https://leetcode.com/problems/reverse-string/

Example 1
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start <= end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};