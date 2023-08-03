/***
 * @Author: gongbinwen
 * @Date: 2023-08-03 12:33
 * @LastEditTime: 2023-08-03 13:59
 * @FilePath: \leetcode\20.有效的括号.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stc;
        for (auto &c : s)
        {
            if (c == '{' || c == '(' || c == '[')
                stc.push(c);
            else
            {
                if (stc.empty())
                    return false;
                else
                {
                    char tmp = stc.top();
                    stc.pop();
                    if ((tmp == '{' && c == '}') || (tmp == '(' && c == ')') || (tmp == '[' && c == ']'))
                    {
                    }
                    else
                        return false;
                }
            }
        }
        return stc.empty() ? true : false;
    }
};
// @lc code=end
