/**
 * Problem: Sum of Square Numbers
 * Link: https://leetcode.com/problems/sum-of-square-numbers/submissions/2070669581/
 * Difficulty: Medium
 * Platform: Leetcode
 * Language: C
 * Tags: Math, Two Pointers, Binary Search, My Lists
 * Status: Accepted
 */

class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0;i<sqrt(c);i++)
        {
            int b=c-i*i;
            int val=sqrt(b);
            if(val*val==b)
            return true;
        }
        return false;
    }
};
