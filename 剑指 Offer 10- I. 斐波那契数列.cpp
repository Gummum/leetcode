/***
 * @Author: gongbinwen
 * @Date: 2023-07-17 09:21
 * @LastEditTime: 2023-07-17 09:37
 * @FilePath: \leetcode\剑指 Offer 10- I. 斐波那契数列.cpp
 * @Description:pass,需要对答案进行取模，leetcode内部计算需要
 * @
 */

/*
写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项（即 F(N)）。斐波那契数列的定义如下：

F(0) = 0,   F(1) = 1
F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
斐波那契数列由 0 和 1 开始，之后的斐波那契数就是由之前的两数相加而得出。

答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

示例 1：

输入：n = 2
输出：1
示例 2：

输入：n = 5
输出：5
 
提示：

0 <= n <= 100

链接：https://leetcode.cn/problems/fei-bo-na-qi-shu-lie-lcof
*/
class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;

        int fibn_2 = 0, fibn_1 = 1, fibN = 0;
        for (int i = 2; i <= n; i++)
        {
            fibN = (fibn_2 + fibn_1) % 1000000007;
            fibn_2 = fibn_1;
            fibn_1 = fibN;
        }

        return fibN;
    }
};
/*
    直接递归会超时
    2-0,1
    3-1,2
    4-2,3
*/