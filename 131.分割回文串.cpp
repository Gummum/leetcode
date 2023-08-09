/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 14:39
 * @LastEditTime: 2023-08-09 14:40
 * @FilePath: \leetcode\131.分割回文串.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution
{
public:
    vector<vector<string>> result;
    vector<string> path;
    vector<vector<string>> partition(string s)
    {
        backtracking(s,0);
        return result;
    }
    void backtracking(string s, int index)
    {
        if(s.size()<=index)
        {
            result.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(isPalindromicSubstring(s,index,i))
            {
                string str=s.substr(index,i-index+1);
                path.push_back(str);
            }
            else
                continue;
            backtracking(s,i+1);
            path.pop_back();
        }
    }
    bool isPalindromicSubstring(string s, int left, int right)
    {
        while (left <= right)
        {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
// @lc code=end
