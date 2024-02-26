//https://leetcode.com/problems/two-sum/
/*
Given an array of integers nums and an integer target, return indices of the two numbers 
such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element 
twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/


// !n2 soln
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int res=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                    
                }
            }
        }
        return v;
    }
};

//! N solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        vector<int>::iterator it;
        for(int i=0; i<nums.size(); i++){
          it = find(nums.begin(), nums.end(), target-nums[i]);  
           if(it!=nums.end()){
               if(i!=it-nums.begin()){
                v.push_back(i);
                v.push_back(it-nums.begin());
                break;   
               }

           }             
        }
        return v;
    }
};