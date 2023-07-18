/***
 * @Author: gongbinwen
 * @Date: 2023-07-18 14:59
 * @LastEditTime: 2023-07-18 14:59
 * @FilePath: \leetcode\191.位-1-的个数.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        for (int i = 0; i < 32; i++)
        {
            if (n & 1 == 1)
                count++;
            n /= 2;
        }
        return count;
    }
};
// @lc code=end
