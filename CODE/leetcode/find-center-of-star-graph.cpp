/**
 * Problem: Find Center of Star Graph
 * Link: https://leetcode.com/problems/find-center-of-star-graph/description/
 * Difficulty: Easy
 * Platform: Leetcode
 * Language: C++
 * Tags: Graph Theory, My Lists
 * Status: Accepted
 */

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,vector<int>>mp;
        for(int i=0;i<edges.size();i++)
        {
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        int ans=0;
        int n=mp.size();
        for(auto z:mp)
        {
            if(z.second.size()==n-1)
            ans=z.first;
        }
        return ans;
    }
};
