/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 16:27
 * @LastEditTime: 2023-08-09 16:35
 * @FilePath: \leetcode\509.斐波那契数.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        vector<int> dp(2, 0);
        dp[0] = 0;
        dp[1] = 1;
        if (n <= 1)
            return dp[n];
        for (int i = 2; i <= n; i++)
        {
            int sum = dp[0] + dp[1];
            dp[0] = dp[1];
            dp[1] = sum;
        }
        return dp[1];
    }
};
// @lc code=end
