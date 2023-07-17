/***
 * @Author: gongbinwen
 * @Date: 2023-07-17 10:18
 * @LastEditTime: 2023-07-17 10:59
 * @FilePath: \leetcode\剑指 Offer 10- II. 青蛙跳台阶问题.cpp
 * @Description:pass
 * @
 */

/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。

答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

示例 1：

输入：n = 2
输出：2
示例 2：

输入：n = 7
输出：21
示例 3：

输入：n = 0
输出：1
提示：

0 <= n <= 100

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/qing-wa-tiao-tai-jie-wen-ti-lcof

*/
class Solution
{
public:
    int numWays(int n)
    {
        if (n < 2)
            return 1;

        int fibn_2 = 1, fibn_1 = 1, fibN = 0;
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
    转换成斐波那契数列的形式
*/