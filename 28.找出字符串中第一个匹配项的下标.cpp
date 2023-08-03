/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-02 09:09
 * @LastEditTime: 2023-08-03 09:14
 * @FilePath: \leetcode\28.找出字符串中第一个匹配项的下标.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        return haystack.find(needle);
    }
};
// @lc code=end
