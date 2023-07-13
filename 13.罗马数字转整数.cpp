/***
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-13 23:04
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-13 23:21
 * @FilePath: \leetcode\13.罗马数字转整数.cpp
 * @Description: passed
 * @
 */
/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {

        std::map<char, int> value;
        value['I'] = 1;
        value['V'] = 5;
        value['X'] = 10;
        value['L'] = 50;
        value['C'] = 100;
        value['D'] = 500;
        value['M'] = 1000;

        int index = 0;
        int sum = 0;
        while (index < s.size())
        {
            if (index == s.size() - 1)
            {
                sum += value[s[index]];
            }
            else
            {
                if (value[s[index]] < value[s[index + 1]])
                    sum -= value[s[index]];
                else
                    sum += value[s[index]];
            }
            index++;
        }
        return sum;
    }
};
// @lc code=end
/*
    algorithms 字符是I,X,C且大小顺序相反相减，否则相加
    定义一个结构来存罗马字符对应的数值
*/
