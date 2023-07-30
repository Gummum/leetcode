/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-30 19:10
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-30 19:10
 * @FilePath: \leetcode\121.买卖股票的最佳时机.cpp
 * @Description: not pass
 * @
 */

/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (!prices.size())
            return 0;

        int profit = 0;
        int cost = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < cost)
            {
                cost = prices[i];
                continue;
            }
            profit = max(profit, prices[i] - cost);
        }
        return profit;
    }
};
// @lc code=end
