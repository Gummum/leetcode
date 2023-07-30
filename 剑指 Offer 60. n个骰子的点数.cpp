/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-30 15:48
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-30 15:56
 * @FilePath: \leetcode\剑指 Offer 60. n个骰子的点数.cpp
 * @Description: not pass
 * @
 */

/*
把n个骰子扔在地上，所有骰子朝上一面的点数之和为s。输入n，打印出s的所有可能的值出现的概率。

你需要用一个浮点数数组返回答案，其中第 i 个元素代表这 n 个骰子所能掷出的点数集合中第 i 小的那个的概率。

示例 1:
输入: 1
输出: [0.16667,0.16667,0.16667,0.16667,0.16667,0.16667]

示例 2:
输入: 2
输出: [0.02778,0.05556,0.08333,0.11111,0.13889,0.16667,0.13889,0.11111,0.08333,0.05556,0.02778]

限制：
1 <= n <= 11

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/nge-tou-zi-de-dian-shu-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution
{
public:
    vector<double> dicesProbability(int n)
    {
        vector<double> dp(6, 1.0 / 6.0);
        for (int i = 2; i <= n; i++)
        {
            vector<double> tmp(5 * i + 1, 0);
            for (int j = 0; j < dp.size(); j++)
                for (int k = 0; k < 6; k++)
                    tmp[j + k] += dp[j] / 6.0;
            dp = tmp;
        }
        return dp;
    }
};