/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-26 12:24
 * @LastEditTime: 2023-07-28 12:50
 * @FilePath: \leetcode\264.丑数-ii.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
class Solution
{
public:
    int nthUglyNumber(int n)
    {
        vector<int> dp(n, 0);
        dp[0] = 1;
        int a = 0, b = 0, c = 0;
        for (int i = 1; i < n; i++)
        {
            int n2 = dp[a] * 2, n3 = dp[b] * 3, n5 = dp[c] * 5;
            dp[i] = min(n2, min(n3, n5));
            if (dp[i] == n2)
                a++;
            if (dp[i] == n3)
                b++;
            if (dp[i] == n5)
                c++;
        }
        return dp[n - 1];
    }
};
// @lc code=end
