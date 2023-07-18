/***
 * @Author: gongbinwen
 * @Date: 2023-07-18 11:05
 * @LastEditTime: 2023-07-18 11:25
 * @FilePath: \leetcode\343.整数拆分.cpp
 * @Description:算not pass 第一道动态规划不是很熟练，还是要多思考
 * @
 */

/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] 整数拆分
 */

// @lc code=start
class Solution
{
public:
    int integerBreak(int n)
    {
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i++)
        {
            int curmax = 0;
            for (int j = 1; j < i; j++)
            {
                curmax = max(curmax, max(j * (i - j), dp[i - j] * j));
            }
            dp[i] = curmax;
        }
        return dp[n];
    }
};
// @lc code=end
/*
    拆分子问题，记住过往，减少重复计算。
    动态规划有几个典型特征，最优子结构、状态转移方程、边界、重叠子问题。

    穷举分析
    确定边界
    找出规律，确定最优子结构
    写出状态转移方程
    贪心算法：
    拆成3和2
    从5开始/3余1，先/2
    余2先/3
    4 2 2
    5 2 3
    6 3 3
    7 3 2 2
    8 3 3 2
    9 3 3 3
    10 3 3 2 2
    11 3 3 3 2
    12 3 3 3 3
    13 3 3 3 2 2
    class Solution
    {
    public:
        int integerBreak(int n)
        {
            if(n<=2)return 1;
            else if(n==3)return 2;
            int max=0;
            int count=n/3;
            int num2=2;
            if(n%3==1)
            {
                count-=1;
                num2=4;
            }
            else if(n%3==0)
            {
                return pow(3,count);
            }
            return num2*pow(3,count);
        }
    };
*/
