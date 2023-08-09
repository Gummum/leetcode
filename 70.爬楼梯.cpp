/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-09 16:35
 * @LastEditTime: 2023-08-09 16:47
 * @FilePath: \leetcode\70.爬楼梯.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)return n;
        vector<int> dp(n+1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
// @lc code=end

