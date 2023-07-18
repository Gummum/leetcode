/***
 * @Author: gongbinwen
 * @Date: 2023-07-18 15:21
 * @LastEditTime: 2023-07-18 15:44
 * @FilePath: \leetcode\50.pow-x-n.cpp
 * @Description:算pass,原本的答案是笨答案，会超时,能拆分子问题的最好用递归
 * @
 */

/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution
{
public:
    double quickMul(double x, long long N)
    {
        if (N == 0)
        {
            return 1.0;
        }
        double y = quickMul(x, N / 2);
        return N % 2 == 0 ? y * y : y * y * x;
    }
    double myPow(double x, int n)
    {
        long long N = n;
        return N >= 0 ? quickMul(x, N) : 1.0 / quickMul(x, N);
    }
};
// @lc code=end
