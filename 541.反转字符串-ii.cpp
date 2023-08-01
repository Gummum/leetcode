/***
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-02 00:17
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-02 00:27
 * @FilePath: \leetcode\541.反转字符串-ii.cpp
 * @Description:
 * @
 */

/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int num = 0;
        int count = s.size() / (2 * k);
        for (int i = 0; i < count; i++)
        {
            reverse(s.begin() + i * 2 * k, s.begin() + i * 2 * k + k);
        }
        if (s.size() % (2 * k) >= k)
            reverse(s.begin() + count * 2 * k, s.begin() + count * 2 * k + k);
        else
            reverse(s.begin() + count * 2 * k, s.end());
        return s;
    }
};
// @lc code=end
