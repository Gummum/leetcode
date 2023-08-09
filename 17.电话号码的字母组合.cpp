/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 13:36
 * @LastEditTime: 2023-08-09 13:56
 * @FilePath: \leetcode\17.电话号码的字母组合.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution
{
public:
    vector<string> result;
    string str;
    vector<string> ditmap = {
        "abc", "def", "ghi",
        "jkl", "mno", "pqrs",
        "tuv", "wxyz"};
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return result;
        backtracking(digits, 0);
        return result;
    }
    void backtracking(string digits, int index)
    {
        if (index == digits.size())
        {
            result.push_back(str);
            return;
        }
        int dit=digits[index]-'0';
        string letters = ditmap[dit-2];
        for (int j = 0; j < letters.size(); j++)
        {
            str += letters[j];
            backtracking(digits, index + 1);
            str.pop_back();
        }
    }
};
// @lc code=end
