/**
 * Problem: Find if Path Exists in Graph
 * Link: https://leetcode.com/problems/find-if-path-exists-in-graph/
 * Difficulty: Easy
 * Platform: Leetcode
 * Language: C++
 * Tags: Depth-First Search, Breadth-First Search, Union-Find, Graph Theory, My Lists
 * Status: Accepted
 */

class Solution {
public:
    bool res=false;
    void solve (int source,int destination,unordered_map<int,vector<int>>&mp,vector<bool>&visited)
    {
        if(res==true)
            return;
            if(visited[source]==true)
            return;
            if(source==destination)
        {   
                res=true;
            return;
        }  
        visited[source]=true;
        for(int i=0;i<mp[source].size();i++) 
        {
            solve(mp[source][i],destination,mp,visited);
        }
    }


    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<edges.size();i++)
        {
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>visited(n,false);
        solve(source,destination,mp,visited);
        return res;
    }
};
