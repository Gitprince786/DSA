/**
 * Problem: Two Sum
 * Link: https://leetcode.com/problems/two-sum/description/
 * Difficulty: Easy
 * Platform: Leetcode
 * Language: C++
 * Tags: Array, Hash Table, My Lists
 * Status: Accepted
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return{};
    }
};
