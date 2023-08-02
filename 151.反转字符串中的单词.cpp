/***
 * @Author: gongbinwen
 * @Date: 2023-07-29 14:46
 * @LastEditTime: 2023-07-29 15:13
 * @FilePath: \leetcode\151.反转字符串中的单词.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 反转字符串中的单词
 */

// @lc code=start
class Solution
{
public:
    string reverseWords(string s)
    {
        reverse(s.begin(), s.end());
        int index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                if (index > 0)
                    s[index++] = ' ';
                int end = i;
                while (end < s.size() && s[end] != ' ')
                    s[index++] = s[end++];
                reverse(s.begin() + index - end + i, s.begin() + index);
                i = end;
            }
        }
        s.resize(index);
        return s;
    }
};
// @lc code=end
/*
    //自己的解法
    class Solution
    {
    public:
        string reverseWords(string s)
        {
            string result;
            result.resize(s.size());
            int resultIndex = 0;
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] != ' ')
                {
                    int end = i;
                    while (i >= 0 && s[i] != ' ')
                    {
                        i--;
                    }
                    for (int index = i + 1; index <= end; index++)
                    {
                        result[resultIndex++] = s[index];
                    }
                    result[resultIndex++] = ' ';
                }
            }
            result.earse(result.begin()+resultIndex,result.end());
            return result;
        }
    };

    // 两次反转空间复杂度最低解法
        reverse(s.begin(), s.end());
        int index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                if (index != 0)
                    s[index++] = ' ';
                int end = i;
                while (end < s.size() && s[end] != ' ')
                    s[index++] = s[end++];
                reverse(s.begin() + index - end + i, s.begin() + index);
                i = end;
            }
        }
        s.resize(index);
        return s;
*/
