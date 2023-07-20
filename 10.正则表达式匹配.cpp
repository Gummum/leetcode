/***
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-19 22:36
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-19 22:58
 * @FilePath: \leetcode\10.正则表达式匹配.cpp
 * @Description:
 * @
 */

/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution
{
public:
    bool isMatch(string s, string p)
    {
        if (p.empty())
            return s.empty();
        int n=s.size();
        int m=p.size();
        vector<vector<int>> dp(n, vector(m, 0));
        for(int i=0;i<n;i++)
        {
            if(p[0]==s[i]||p[0]=='.')
                dp[i][0]=true;
            else 
                return false;
        }
        for(int i=0;i<m;i++)
        {
            if(p[i]==s[0]||p[i]==)
        }
        for (int i = 1; i < ;)
    }
};
// @lc code=end

/*
    递归:超时
        每次只拿两个字符出来
        边界:
            p.empty()
            class Solution
    {
    public:
        bool isMatch(string s, string p)
        {
            if (p.empty())
                return s.empty();
            bool result = (!s.empty() && (p[0] == '.' || p[0] == s[0]));
            if (p.length() >= 2 && p[1] == '*')
                return (result && (isMatch(s.substr(1), p) || isMatch(s, p.substr(2))));
            else
                return (result && isMatch(s.substr(1), p.substr(1)));
        }
    };

    动态规划
        1.定义dp数组，dp[i][j]表示的是（i表示s,j表示p）在i,j的时候是否匹配,dp[i-1][j-1]即答案
        2.dp元素关系式，dp[i][j]=dp[i-1][j-i]||dp[i][j-1]||dp[i-1][j]
        3.找出初始值，dp[0][0],dp[1][n],dp[n][1]

*/