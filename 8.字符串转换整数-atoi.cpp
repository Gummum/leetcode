/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-30 20:31
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-30 21:19
 * @FilePath: \leetcode\8.字符串转换整数-atoi.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        if (s.size() == 0)
            return 0;
        string str;
        int index = 0, flag = 1;
        int min = -pow(2, 31), max = pow(2, 31) - 1;
        int size = s.size();
        while (index < size && s[index] == ' ')
            index++;
        if (s[index] == '-' || s[index] == '+')
        {
            if (s[index] == '-')
                flag = 0;
            index++;
        }
        while (index < size && s[index] >= '0' && s[index] <= '9')
            str += s[index++];
        if (str.empty())
            return 0;
        long long value = str[0] - '0';
        for (int i = 1; i < str.size(); i++)
        {
            value *= 10;
            value += str[i] - '0';
            long long tmp = value;
            if (!flag)
                tmp = -tmp;
            if (tmp < min)
                return min;
            else if (tmp > max)
                return max;
        }
        if (!flag)
            value = -value;
        return (int)value;
    }
};
// @lc code=end
