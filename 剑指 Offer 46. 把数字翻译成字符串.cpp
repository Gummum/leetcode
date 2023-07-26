/***
 * @Author: gongbinwen
 * @Date: 2023-07-26 09:33
 * @LastEditTime: 2023-07-26 09:34
 * @FilePath: \leetcode\剑指 Offer 46. 把数字翻译成字符串.cpp
 * @Description:pass
 * @
 */
/*
给定一个数字，我们按照如下规则把它翻译为字符串：0 翻译成 “a” ，1 翻译成 “b”，……，11 翻译成 “l”，……，25 翻译成 “z”。一个数字可能有多个翻译。请编程实现一个函数，用来计算一个数字有多少种不同的翻译方法。

示例 1:

输入: 12258
输出: 5
解释: 12258有5种不同的翻译，分别是"bccfi", "bwfi", "bczi", "mcfi"和"mzi"
 
提示：
0 <= num < 231

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/ba-shu-zi-fan-yi-cheng-zi-fu-chuan-lcof
*/
class Solution
{
public:
    int translateNum(int num)
    {
        string str = to_string(num);
        if (str.size() <= 1)
            return str.size();
        vector<int> dp(str.size(), 0);
        dp[0] = 1;
        if (str.substr(0, 2) > "25")
            dp[1] = 1;
        else
            dp[1] = 2;
        for (int i = 2; i < str.size(); i++)
        {
            int count = 0;
            if (str.substr(i - 1, 2) <= "25" && str[i - 1] != '0')
            {
                dp[i] = dp[i - 1] + dp[i - 2];
            }
            else
            {
                dp[i] = dp[i - 1];
            }
        }
        return dp[str.size() - 1];
    }
};