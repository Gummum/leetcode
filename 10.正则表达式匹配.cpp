/***
 * @Author: gongbinwen
 * @Date: 2023-07-19 19:37
 * @LastEditTime: 2023-07-19 19:57
 * @FilePath: \leetcode\10.正则表达式匹配.cpp
 * @Description:
 * @
 */
/***
 * @Author: gongbinwen
 * @Date: 2023-07-19 09:55
 * @LastEditTime: 2023-07-19 09:56
 * @FilePath: \leetcode\10.正则表达式匹配.cpp
 * @Description:
 * @
 */

/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int pIndex = 0;
        int count = 0;
        for (int i = 0; i < s.length() && pIndex < p.length(); i++)
        {
            if (p[i] == '*')
            {
                if (count == 0)
                {
                    count++;
                    p.insert(i,1, s[i]);
                }
                else
                {
                    if (s[i] != p[pIndex - 1])
                        return false;
                }
            }
            else if (p[pIndex] == s[i] || p[pIndex] == '.')
            {
                p[pIndex] = s[i];
                pIndex++;
            }
            else
            {
                return false;
            }
        }
        if()
        return true;
    }
};
// @lc code=end
