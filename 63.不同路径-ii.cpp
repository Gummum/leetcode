/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 17:07
 * @LastEditTime: 2023-08-09 22:06
 * @FilePath: \leetcode\63.不同路径-ii.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,0));
        for (int i = 0; i < n; i++)
        {
            if (obstacleGrid[0][i] == 1)
            {
                while (i < n)
                {
                    dp[0][i] = 0;
                    i++;
                }
            }
            else
                dp[0][i] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            if (obstacleGrid[i][0] == 1)
            {
                while (i < m)
                {
                    dp[i][0] = 0;
                    i++;
                }
            }
            else
                dp[i][0] = 1;
        }

        for (int i = 1; i < dp.size(); i++)
        {
            for (int j = 1; j < dp[0].size(); j++)
            {
                if (obstacleGrid[i][j] == 1)
                {
                    dp[i][j] = 0;
                    continue;
                }
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m-1][n-1];
    }
};
// @lc code=end
