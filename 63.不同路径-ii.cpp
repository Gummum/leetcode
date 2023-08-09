/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-09 17:07
 * @LastEditTime: 2023-08-09 17:15
 * @FilePath: \leetcode\63.不同路径-ii.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid);

        for(int i=1;i<dp.size();i++)
        {
            for(int j=1;j<dp[0].size();j++)
            {
                
            } 
        }
    }
};
// @lc code=end

